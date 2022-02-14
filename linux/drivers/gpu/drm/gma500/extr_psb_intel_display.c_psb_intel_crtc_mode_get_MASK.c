
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct psb_pipe {int htotal; int hsync; int vtotal; int vsync; } ;
struct psb_offset {int vsync; int vtotal; int hsync; int htotal; } ;
struct gma_crtc {int pipe; } ;
struct TYPE_2__ {struct psb_pipe* pipe; } ;
struct drm_psb_private {struct psb_offset* regmap; TYPE_1__ regs; } ;
struct drm_display_mode {int hdisplay; int htotal; int hsync_start; int hsync_end; int vdisplay; int vtotal; int vsync_start; int vsync_end; int clock; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_display_mode*,int ) ;
 int FUNC_2 (struct drm_display_mode*) ;
 scalar_t__ FUNC_3 (struct drm_device*,int) ;
 int FUNC_4 (struct drm_device*) ;
 struct drm_display_mode* FUNC_5 (int,int ) ;
 int FUNC_6 (struct drm_device*,struct drm_crtc*) ;
 struct gma_crtc* FUNC_7 (struct drm_crtc*) ;

struct drm_display_mode *FUNC_8(struct drm_device *VAR_1,
          struct drm_crtc *VAR_2)
{
 struct gma_crtc *VAR_3 = FUNC_7(VAR_2);
 int VAR_4 = VAR_3->pipe;
 struct drm_display_mode *VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;
 struct drm_psb_private *VAR_10 = VAR_1->dev_private;
 struct psb_pipe *VAR_11 = &VAR_10->regs.pipe[VAR_4];
 const struct psb_offset *VAR_12 = &VAR_10->regmap[VAR_4];

 if (FUNC_3(VAR_1, 0)) {
  VAR_6 = FUNC_0(VAR_12->htotal);
  VAR_7 = FUNC_0(VAR_12->hsync);
  VAR_8 = FUNC_0(VAR_12->vtotal);
  VAR_9 = FUNC_0(VAR_12->vsync);
  FUNC_4(VAR_1);
 } else {
  VAR_6 = VAR_11->htotal;
  VAR_7 = VAR_11->hsync;
  VAR_8 = VAR_11->vtotal;
  VAR_9 = VAR_11->vsync;
 }

 VAR_5 = FUNC_5(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 VAR_5->clock = FUNC_6(VAR_1, VAR_2);
 VAR_5->hdisplay = (VAR_6 & 0xffff) + 1;
 VAR_5->htotal = ((VAR_6 & 0xffff0000) >> 16) + 1;
 VAR_5->hsync_start = (VAR_7 & 0xffff) + 1;
 VAR_5->hsync_end = ((VAR_7 & 0xffff0000) >> 16) + 1;
 VAR_5->vdisplay = (VAR_8 & 0xffff) + 1;
 VAR_5->vtotal = ((VAR_8 & 0xffff0000) >> 16) + 1;
 VAR_5->vsync_start = (VAR_9 & 0xffff) + 1;
 VAR_5->vsync_end = ((VAR_9 & 0xffff0000) >> 16) + 1;

 FUNC_2(VAR_5);
 FUNC_1(VAR_5, 0);

 return VAR_5;
}
