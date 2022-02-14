
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
 int FUNC_1 (struct drm_device*,struct drm_crtc*) ;
 int FUNC_2 (struct drm_display_mode*,int ) ;
 int FUNC_3 (struct drm_display_mode*) ;
 scalar_t__ FUNC_4 (struct drm_device*,int) ;
 int FUNC_5 (struct drm_device*) ;
 struct drm_display_mode* FUNC_6 (int,int ) ;
 struct gma_crtc* FUNC_7 (struct drm_crtc*) ;

struct drm_display_mode *FUNC_8(struct drm_device *VAR_1,
          struct drm_crtc *VAR_2)
{
 struct gma_crtc *VAR_3 = FUNC_7(VAR_2);
 int VAR_4 = VAR_3->pipe;
 struct drm_psb_private *VAR_5 = VAR_1->dev_private;
 struct psb_pipe *VAR_6 = &VAR_5->regs.pipe[VAR_4];
 const struct psb_offset *VAR_7 = &VAR_5->regmap[VAR_4];
 struct drm_display_mode *VAR_8;
 int VAR_9;
 int VAR_10;
 int VAR_11;
 int VAR_12;

 if (FUNC_4(VAR_1, 0)) {
  VAR_9 = FUNC_0(VAR_7->htotal);
  VAR_10 = FUNC_0(VAR_7->hsync);
  VAR_11 = FUNC_0(VAR_7->vtotal);
  VAR_12 = FUNC_0(VAR_7->vsync);
  FUNC_5(VAR_1);
 } else {
  VAR_9 = VAR_6->htotal;
  VAR_10 = VAR_6->hsync;
  VAR_11 = VAR_6->vtotal;
  VAR_12 = VAR_6->vsync;
 }

 VAR_8 = FUNC_6(sizeof(*VAR_8), VAR_0);
 if (!VAR_8)
  return ((void*)0);

 VAR_8->clock = FUNC_1(VAR_1, VAR_2);
 VAR_8->hdisplay = (VAR_9 & 0xffff) + 1;
 VAR_8->htotal = ((VAR_9 & 0xffff0000) >> 16) + 1;
 VAR_8->hsync_start = (VAR_10 & 0xffff) + 1;
 VAR_8->hsync_end = ((VAR_10 & 0xffff0000) >> 16) + 1;
 VAR_8->vdisplay = (VAR_11 & 0xffff) + 1;
 VAR_8->vtotal = ((VAR_11 & 0xffff0000) >> 16) + 1;
 VAR_8->vsync_start = (VAR_12 & 0xffff) + 1;
 VAR_8->vsync_end = ((VAR_12 & 0xffff0000) >> 16) + 1;

 FUNC_3(VAR_8);
 FUNC_2(VAR_8, 0);

 return VAR_8;
}
