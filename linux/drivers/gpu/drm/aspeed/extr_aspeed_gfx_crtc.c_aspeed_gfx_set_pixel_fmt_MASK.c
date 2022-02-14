
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
struct drm_device {int dev; } ;
struct drm_crtc {TYPE_5__* primary; struct drm_device* dev; } ;
struct TYPE_6__ {struct drm_crtc crtc; } ;
struct aspeed_gfx {scalar_t__ base; TYPE_1__ pipe; } ;
struct TYPE_10__ {TYPE_4__* state; } ;
struct TYPE_9__ {TYPE_3__* fb; } ;
struct TYPE_8__ {TYPE_2__* format; } ;
struct TYPE_7__ {int format; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int const) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct aspeed_gfx *VAR_5, u32 *VAR_6)
{
 struct drm_crtc *VAR_7 = &VAR_5->pipe.crtc;
 struct drm_device *VAR_8 = VAR_7->dev;
 const u32 VAR_9 = VAR_7->primary->state->fb->format->format;
 u32 VAR_10;

 VAR_10 = FUNC_2(VAR_5->base + VAR_0);
 VAR_10 &= ~VAR_1;

 switch (VAR_9) {
 case 129:
  FUNC_0(VAR_8->dev, "Setting up RGB565 mode\n");
  VAR_10 |= VAR_2;
  *VAR_6 = 16;
  break;
 case 128:
  FUNC_0(VAR_8->dev, "Setting up XRGB8888 mode\n");
  VAR_10 |= VAR_3;
  *VAR_6 = 32;
  break;
 default:
  FUNC_1(VAR_8->dev, "Unhandled pixel format %08x\n", VAR_9);
  return -VAR_4;
 }

 FUNC_3(VAR_10, VAR_5->base + VAR_0);

 return 0;
}
