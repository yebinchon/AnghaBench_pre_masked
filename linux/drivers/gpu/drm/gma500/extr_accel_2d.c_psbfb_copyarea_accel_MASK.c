
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {struct drm_device* dev; } ;
struct psb_framebuffer {TYPE_1__ base; } ;
struct TYPE_6__ {struct drm_framebuffer* fb; } ;
struct psb_fbdev {TYPE_2__ psb_fb_helper; struct psb_framebuffer pfb; } ;
struct fb_info {struct psb_fbdev* par; } ;
struct fb_copyarea {int height; int width; int dy; int dx; int sy; int sx; } ;
struct drm_psb_private {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; int * pitches; int * obj; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct TYPE_8__ {int offset; } ;
struct TYPE_7__ {int depth; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct fb_info*,struct fb_copyarea const*) ;
 int FUNC_1 (struct drm_device*,int) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_psb_private*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 TYPE_4__* FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct fb_info *VAR_8,
     const struct fb_copyarea *VAR_9)
{
 struct psb_fbdev *VAR_10 = VAR_8->par;
 struct psb_framebuffer *VAR_11 = &VAR_10->pfb;
 struct drm_device *VAR_12 = VAR_11->base.dev;
 struct drm_framebuffer *VAR_13 = VAR_10->psb_fb_helper.fb;
 struct drm_psb_private *VAR_14 = VAR_12->dev_private;
 uint32_t VAR_15;
 uint32_t VAR_16;
 uint32_t VAR_17;
 uint32_t VAR_18;

 if (!VAR_13)
  return;

 VAR_15 = FUNC_4(VAR_13->obj[0])->offset;
 VAR_16 = VAR_13->pitches[0];

 switch (VAR_13->format->depth) {
 case 8:
  VAR_17 = VAR_4;
  VAR_18 = VAR_0;
  break;
 case 15:
  VAR_17 = VAR_5;
  VAR_18 = VAR_1;
  break;
 case 16:
  VAR_17 = VAR_6;
  VAR_18 = VAR_2;
  break;
 case 24:
 case 32:

  VAR_17 = VAR_7;
  VAR_18 = VAR_3;
  break;
 default:

  FUNC_0(VAR_8, VAR_9);
  return;
 }

 if (!FUNC_1(VAR_12, 0)) {
  FUNC_0(VAR_8, VAR_9);
  return;
 }
 FUNC_3(VAR_14,
     VAR_15, VAR_16, VAR_17,
     VAR_15, VAR_16, VAR_18,
     VAR_9->sx, VAR_9->sy, VAR_9->dx, VAR_9->dy, VAR_9->width, VAR_9->height);
 FUNC_2(VAR_12);
}
