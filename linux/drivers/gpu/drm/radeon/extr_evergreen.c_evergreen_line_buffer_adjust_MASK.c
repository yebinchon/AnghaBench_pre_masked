
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct radeon_device {int usec_timeout; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_crtc {int crtc_id; int crtc_offset; TYPE_1__ base; } ;
struct drm_display_mode {int dummy; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct radeon_device *VAR_3,
     struct radeon_crtc *VAR_4,
     struct drm_display_mode *VAR_5,
     struct drm_display_mode *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = VAR_4->crtc_id * 0x20;
 if (VAR_4->base.enabled && VAR_5) {
  if (VAR_6) {
   VAR_7 = 0;
   VAR_8 = 1;
  } else {
   VAR_7 = 2;
   VAR_8 = 2;
  }
 } else {
  VAR_7 = 0;
  VAR_8 = 0;
 }


 if (VAR_4->crtc_id % 2)
  VAR_7 += 4;
 FUNC_4(VAR_0 + VAR_4->crtc_offset, VAR_7);

 if (FUNC_0(VAR_3) || FUNC_1(VAR_3)) {
  FUNC_4(VAR_2 + VAR_10,
         FUNC_2(VAR_8));
  for (VAR_9 = 0; VAR_9 < VAR_3->usec_timeout; VAR_9++) {
   if (FUNC_3(VAR_2 + VAR_10) &
       VAR_1)
    break;
   FUNC_5(1);
  }
 }

 if (VAR_4->base.enabled && VAR_5) {
  switch (VAR_7) {
  case 0:
  case 4:
  default:
   if (FUNC_1(VAR_3))
    return 4096 * 2;
   else
    return 3840 * 2;
  case 1:
  case 5:
   if (FUNC_1(VAR_3))
    return 6144 * 2;
   else
    return 5760 * 2;
  case 2:
  case 6:
   if (FUNC_1(VAR_3))
    return 8192 * 2;
   else
    return 7680 * 2;
  case 3:
  case 7:
   if (FUNC_1(VAR_3))
    return 2048 * 2;
   else
    return 1920 * 2;
  }
 }


 return 0;
}
