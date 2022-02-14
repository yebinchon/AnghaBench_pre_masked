
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct drm_crtc {TYPE_5__* primary; struct drm_device* dev; } ;
struct TYPE_6__ {struct drm_crtc crtc; } ;
struct mxsfb_drm_private {scalar_t__ base; TYPE_1__ pipe; } ;
struct drm_device {int dev; } ;
struct TYPE_10__ {TYPE_4__* state; } ;
struct TYPE_9__ {TYPE_3__* fb; } ;
struct TYPE_8__ {TYPE_2__* format; } ;
struct TYPE_7__ {int format; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int) ;


 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,int const) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct mxsfb_drm_private *VAR_7)
{
 struct drm_crtc *VAR_8 = &VAR_7->pipe.crtc;
 struct drm_device *VAR_9 = VAR_8->dev;
 const u32 VAR_10 = VAR_8->primary->state->fb->format->format;
 u32 VAR_11, VAR_12;

 VAR_11 = VAR_2 | VAR_3;
 VAR_12 = FUNC_4(VAR_7->base + VAR_6);
 VAR_12 &= VAR_1 | VAR_0;

 switch (VAR_10) {
 case 129:
  FUNC_2(VAR_9->dev, "Setting up RGB565 mode\n");
  VAR_11 |= FUNC_1(0);
  VAR_12 |= FUNC_0(0xf);
  break;
 case 128:
  FUNC_2(VAR_9->dev, "Setting up XRGB8888 mode\n");
  VAR_11 |= FUNC_1(3);

  VAR_12 |= FUNC_0(0x7);
  break;
 default:
  FUNC_3(VAR_9->dev, "Unhandled pixel format %08x\n", VAR_10);
  return -VAR_4;
 }

 FUNC_5(VAR_12, VAR_7->base + VAR_6);
 FUNC_5(VAR_11, VAR_7->base + VAR_5);

 return 0;
}
