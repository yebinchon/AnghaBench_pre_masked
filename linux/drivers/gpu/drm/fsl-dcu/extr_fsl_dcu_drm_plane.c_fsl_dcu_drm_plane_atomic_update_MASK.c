
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct fsl_dcu_drm_device {int regmap; TYPE_3__* soc; } ;
struct drm_plane_state {int crtc_x; int crtc_y; int crtc_w; int crtc_h; struct drm_framebuffer* fb; } ;
struct drm_plane {struct drm_plane_state* state; TYPE_1__* dev; } ;
struct drm_gem_cma_object {unsigned int paddr; } ;
struct drm_framebuffer {TYPE_2__* format; } ;
struct TYPE_6__ {int name; } ;
struct TYPE_5__ {int format; } ;
struct TYPE_4__ {struct fsl_dcu_drm_device* dev_private; } ;


 int DCU_CTRLDESCLN (int,int) ;
 unsigned int DCU_LAYER_AB_NONE ;
 unsigned int DCU_LAYER_AB_WHOLE_FRAME ;
 unsigned int DCU_LAYER_BG_BCOLOR (int ) ;
 unsigned int DCU_LAYER_BPP (unsigned int) ;
 unsigned int DCU_LAYER_CKMAX_B (int) ;
 unsigned int DCU_LAYER_CKMAX_G (int) ;
 unsigned int DCU_LAYER_CKMAX_R (int) ;
 unsigned int DCU_LAYER_CKMIN_B (int ) ;
 unsigned int DCU_LAYER_CKMIN_G (int ) ;
 unsigned int DCU_LAYER_CKMIN_R (int ) ;
 unsigned int DCU_LAYER_EN ;
 unsigned int DCU_LAYER_FG_FCOLOR (int ) ;
 unsigned int DCU_LAYER_HEIGHT (int ) ;
 unsigned int DCU_LAYER_POST_SKIP (int ) ;
 unsigned int DCU_LAYER_POSX (int ) ;
 unsigned int DCU_LAYER_POSY (int ) ;
 unsigned int DCU_LAYER_PRE_SKIP (int ) ;
 unsigned int DCU_LAYER_TRANS (int) ;
 unsigned int DCU_LAYER_WIDTH (int ) ;
 unsigned int FSL_DCU_ARGB1555 ;
 unsigned int FSL_DCU_ARGB4444 ;
 unsigned int FSL_DCU_ARGB8888 ;
 unsigned int FSL_DCU_RGB565 ;
 unsigned int FSL_DCU_RGB888 ;
 unsigned int FSL_DCU_YUV422 ;
 struct drm_gem_cma_object* drm_fb_cma_get_gem_obj (struct drm_framebuffer*,int ) ;
 int fsl_dcu_drm_plane_index (struct drm_plane*) ;
 int regmap_write (int ,int ,unsigned int) ;
 int strcmp (int ,char*) ;

__attribute__((used)) static void fsl_dcu_drm_plane_atomic_update(struct drm_plane *plane,
         struct drm_plane_state *old_state)

{
 struct fsl_dcu_drm_device *fsl_dev = plane->dev->dev_private;
 struct drm_plane_state *state = plane->state;
 struct drm_framebuffer *fb = plane->state->fb;
 struct drm_gem_cma_object *gem;
 unsigned int alpha = DCU_LAYER_AB_NONE, bpp;
 int index;

 if (!fb)
  return;

 index = fsl_dcu_drm_plane_index(plane);
 if (index < 0)
  return;

 gem = drm_fb_cma_get_gem_obj(fb, 0);

 switch (fb->format->format) {
 case 133:
  bpp = FSL_DCU_RGB565;
  break;
 case 132:
  bpp = FSL_DCU_RGB888;
  break;
 case 134:
  alpha = DCU_LAYER_AB_WHOLE_FRAME;

 case 129:
  bpp = FSL_DCU_ARGB8888;
  break;
 case 135:
  alpha = DCU_LAYER_AB_WHOLE_FRAME;

 case 130:
  bpp = FSL_DCU_ARGB4444;
  break;
 case 136:
  alpha = DCU_LAYER_AB_WHOLE_FRAME;

 case 131:
  bpp = FSL_DCU_ARGB1555;
  break;
 case 128:
  bpp = FSL_DCU_YUV422;
  break;
 default:
  return;
 }

 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 1),
       DCU_LAYER_HEIGHT(state->crtc_h) |
       DCU_LAYER_WIDTH(state->crtc_w));
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 2),
       DCU_LAYER_POSY(state->crtc_y) |
       DCU_LAYER_POSX(state->crtc_x));
 regmap_write(fsl_dev->regmap,
       DCU_CTRLDESCLN(index, 3), gem->paddr);
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 4),
       DCU_LAYER_EN |
       DCU_LAYER_TRANS(0xff) |
       DCU_LAYER_BPP(bpp) |
       alpha);
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 5),
       DCU_LAYER_CKMAX_R(0xFF) |
       DCU_LAYER_CKMAX_G(0xFF) |
       DCU_LAYER_CKMAX_B(0xFF));
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 6),
       DCU_LAYER_CKMIN_R(0) |
       DCU_LAYER_CKMIN_G(0) |
       DCU_LAYER_CKMIN_B(0));
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 7), 0);
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 8),
       DCU_LAYER_FG_FCOLOR(0));
 regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 9),
       DCU_LAYER_BG_BCOLOR(0));

 if (!strcmp(fsl_dev->soc->name, "ls1021a")) {
  regmap_write(fsl_dev->regmap, DCU_CTRLDESCLN(index, 10),
        DCU_LAYER_POST_SKIP(0) |
        DCU_LAYER_PRE_SKIP(0));
 }

 return;
}
