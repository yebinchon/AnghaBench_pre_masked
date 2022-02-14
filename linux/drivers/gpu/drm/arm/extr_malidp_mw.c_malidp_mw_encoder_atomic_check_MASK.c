
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct malidp_mw_connector_state {scalar_t__ format; int* pitches; int n_planes; int rgb2yuv_coeffs; scalar_t__* addrs; } ;
struct malidp_drm {TYPE_6__* dev; } ;
struct drm_gem_cma_object {scalar_t__ paddr; } ;
struct drm_framebuffer {scalar_t__ width; scalar_t__ height; int* pitches; TYPE_5__* format; scalar_t__* offsets; scalar_t__ modifier; } ;
struct drm_format_name_buf {int dummy; } ;
struct drm_encoder {TYPE_1__* dev; } ;
struct TYPE_9__ {scalar_t__ hdisplay; scalar_t__ vdisplay; } ;
struct drm_crtc_state {TYPE_3__ mode; } ;
struct drm_connector_state {TYPE_2__* writeback_job; } ;
struct TYPE_12__ {TYPE_4__* hw; } ;
struct TYPE_11__ {int num_planes; scalar_t__ is_yuv; int format; } ;
struct TYPE_10__ {int map; } ;
struct TYPE_8__ {struct drm_framebuffer* fb; } ;
struct TYPE_7__ {struct malidp_drm* dev_private; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct drm_gem_cma_object* FUNC_1 (struct drm_framebuffer*,int) ;
 int FUNC_2 (int ,struct drm_format_name_buf*) ;
 scalar_t__ FUNC_3 (int *,int ,int ,int) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int VAR_3 ;
 struct malidp_mw_connector_state* FUNC_5 (struct drm_connector_state*) ;

__attribute__((used)) static int
FUNC_6(struct drm_encoder *VAR_4,
          struct drm_crtc_state *VAR_5,
          struct drm_connector_state *VAR_6)
{
 struct malidp_mw_connector_state *VAR_7 = FUNC_5(VAR_6);
 struct malidp_drm *VAR_8 = VAR_4->dev->dev_private;
 struct drm_framebuffer *VAR_9;
 int VAR_10, VAR_11;

 if (!VAR_6->writeback_job)
  return 0;

 VAR_9 = VAR_6->writeback_job->fb;
 if ((VAR_9->width != VAR_5->mode.hdisplay) ||
     (VAR_9->height != VAR_5->mode.vdisplay)) {
  FUNC_0("Invalid framebuffer size %ux%u\n",
    VAR_9->width, VAR_9->height);
  return -VAR_0;
 }

 if (VAR_9->modifier) {
  FUNC_0("Writeback framebuffer does not support modifiers\n");
  return -VAR_0;
 }

 VAR_7->format =
  FUNC_3(&VAR_8->dev->hw->map, VAR_2,
     VAR_9->format->format, !!VAR_9->modifier);
 if (VAR_7->format == VAR_1) {
  struct drm_format_name_buf VAR_12;

  FUNC_0("Invalid pixel format %s\n",
         FUNC_2(VAR_9->format->format,
        &VAR_12));
  return -VAR_0;
 }

 VAR_11 = VAR_9->format->num_planes;
 for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++) {
  struct drm_gem_cma_object *VAR_13 = FUNC_1(VAR_9, VAR_10);

  u8 VAR_14 = FUNC_4(VAR_8->dev, 0);

  if (VAR_9->pitches[VAR_10] & (VAR_14 - 1)) {
   FUNC_0("Invalid pitch %u for plane %d\n",
          VAR_9->pitches[VAR_10], VAR_10);
   return -VAR_0;
  }
  VAR_7->pitches[VAR_10] = VAR_9->pitches[VAR_10];
  VAR_7->addrs[VAR_10] = VAR_13->paddr + VAR_9->offsets[VAR_10];
 }
 VAR_7->n_planes = VAR_11;

 if (VAR_9->format->is_yuv)
  VAR_7->rgb2yuv_coeffs = VAR_3;

 return 0;
}
