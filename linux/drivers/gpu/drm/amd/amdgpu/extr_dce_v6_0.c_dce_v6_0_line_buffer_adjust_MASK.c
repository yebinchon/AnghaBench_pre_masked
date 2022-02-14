
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_display_mode {int dummy; } ;
struct amdgpu_device {scalar_t__ usec_timeout; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct amdgpu_crtc {int crtc_id; scalar_t__ crtc_offset; TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(struct amdgpu_device *VAR_4,
       struct amdgpu_crtc *VAR_5,
       struct drm_display_mode *VAR_6,
       struct drm_display_mode *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 u32 VAR_11 = VAR_5->crtc_id * 0x8;
 if (VAR_5->base.enabled && VAR_6) {
  if (VAR_7) {
   VAR_8 = 0;
   VAR_9 = 1;
  } else {
   VAR_8 = 2;
   VAR_9 = 2;
  }
 } else {
  VAR_8 = 0;
  VAR_9 = 0;
 }

 FUNC_2(VAR_2 + VAR_5->crtc_offset,
        FUNC_0(VAR_8));

 FUNC_2(VAR_3 + VAR_11,
        (VAR_9 << VAR_0));
 for (VAR_10 = 0; VAR_10 < VAR_4->usec_timeout; VAR_10++) {
  if (FUNC_1(VAR_3 + VAR_11) &
      VAR_1)
   break;
  FUNC_3(1);
 }

 if (VAR_5->base.enabled && VAR_6) {
  switch (VAR_8) {
  case 0:
  default:
   return 4096 * 2;
  case 2:
   return 8192 * 2;
  }
 }


 return 0;
}
