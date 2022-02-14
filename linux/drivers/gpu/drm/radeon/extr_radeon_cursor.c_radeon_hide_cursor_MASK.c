
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_device {int dummy; } ;
struct radeon_crtc {int crtc_id; scalar_t__ crtc_offset; } ;
struct drm_crtc {TYPE_1__* dev; } ;
struct TYPE_2__ {struct radeon_device* dev_private; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 struct radeon_crtc* FUNC_6 (struct drm_crtc*) ;

__attribute__((used)) static void FUNC_7(struct drm_crtc *VAR_9)
{
 struct radeon_crtc *VAR_10 = FUNC_6(VAR_9);
 struct radeon_device *VAR_11 = VAR_9->dev->dev_private;

 if (FUNC_1(VAR_11)) {
  FUNC_5(VAR_5 + VAR_10->crtc_offset,
      FUNC_2(VAR_3) |
      FUNC_3(VAR_4));
 } else if (FUNC_0(VAR_11)) {
  FUNC_5(VAR_2 + VAR_10->crtc_offset,
      (VAR_0 << VAR_1));
 } else {
  u32 VAR_12;
  switch (VAR_10->crtc_id) {
  case 0:
   VAR_12 = VAR_8;
   break;
  case 1:
   VAR_12 = VAR_6;
   break;
  default:
   return;
  }
  FUNC_5(VAR_12, FUNC_4(VAR_12) & ~VAR_7);
 }
}
