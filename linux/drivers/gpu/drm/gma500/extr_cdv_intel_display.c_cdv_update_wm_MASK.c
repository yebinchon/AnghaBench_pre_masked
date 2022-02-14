
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct gma_crtc {int pipe; } ;
struct drm_psb_private {TYPE_1__* ops; } ;
struct drm_device {struct drm_psb_private* dev_private; } ;
struct drm_crtc {int dummy; } ;
struct TYPE_2__ {int (* disable_sr ) (struct drm_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_device*,int) ;
 scalar_t__ FUNC_3 (struct drm_crtc*,int ) ;
 int FUNC_4 (struct drm_device*) ;
 int FUNC_5 (struct drm_device*) ;
 struct gma_crtc* FUNC_6 (struct drm_crtc*) ;

void FUNC_7(struct drm_device *VAR_21, struct drm_crtc *VAR_22)
{
 struct drm_psb_private *VAR_23 = VAR_21->dev_private;
 struct gma_crtc *VAR_24 = FUNC_6(VAR_22);


 if (FUNC_2(VAR_21, 0) ^ FUNC_2(VAR_21, 1)) {
  u32 VAR_25;

  VAR_25 = FUNC_0(VAR_6);
  VAR_25 &= ~VAR_12;
  VAR_25 |= (0x7e << VAR_13);
  VAR_25 &= ~VAR_3;
  VAR_25 |= (0x4 << VAR_4);
  FUNC_1(VAR_6, VAR_25);

  VAR_25 = FUNC_0(VAR_7);
  VAR_25 &= ~VAR_0;
  VAR_25 |= (0x6 << VAR_1);
  VAR_25 &= ~VAR_16;
  VAR_25 |= (0x8 << VAR_17);
  FUNC_1(VAR_7, VAR_25);

  FUNC_1(VAR_8, 0x36000000);




  if (VAR_24->pipe == 1 &&
      FUNC_3(VAR_22, VAR_20)) {
   FUNC_1(VAR_10, 0x00040330);
  } else {
   VAR_25 = (3 << VAR_15) |
        (4 << VAR_14) |
        (3 << VAR_2) |
        (4 << VAR_5);
   FUNC_1(VAR_10, VAR_25);
  }

  FUNC_1(VAR_11, 0x10);

  FUNC_4(VAR_21);


  FUNC_1(VAR_18, VAR_19);
  FUNC_0(VAR_18);
  FUNC_4(VAR_21);

 } else {


  FUNC_1(VAR_6, 0x3f880808);
  FUNC_1(VAR_7, 0x0b020202);
  FUNC_1(VAR_8, 0x24000000);
  FUNC_1(VAR_9, 0x08030202);
  FUNC_1(VAR_10, 0x01010101);
  FUNC_1(VAR_11, 0x1d0);

  FUNC_4(VAR_21);

  VAR_23->ops->disable_sr(VAR_21);
 }
}
