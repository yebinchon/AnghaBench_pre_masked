
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct drm_display_mode {int crtc_hdisplay; } ;
struct amdgpu_device {int flags; int usec_timeout; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct amdgpu_crtc {int crtc_id; int crtc_offset; TYPE_1__ base; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int) ;

__attribute__((used)) static u32 FUNC_4(struct amdgpu_device *VAR_7,
           struct amdgpu_crtc *VAR_8,
           struct drm_display_mode *VAR_9)
{
 u32 VAR_10, VAR_11, VAR_12;
 u32 VAR_13 = VAR_8->crtc_id * 0x8;
 if (VAR_8->base.enabled && VAR_9) {
  if (VAR_9->crtc_hdisplay < 1920) {
   VAR_10 = 1;
   VAR_11 = 2;
  } else if (VAR_9->crtc_hdisplay < 2560) {
   VAR_10 = 2;
   VAR_11 = 2;
  } else if (VAR_9->crtc_hdisplay < 4096) {
   VAR_10 = 0;
   VAR_11 = (VAR_7->flags & VAR_0) ? 2 : 4;
  } else {
   FUNC_0("Mode too big for LB!\n");
   VAR_10 = 0;
   VAR_11 = (VAR_7->flags & VAR_0) ? 2 : 4;
  }
 } else {
  VAR_10 = 1;
  VAR_11 = 0;
 }

 FUNC_2(VAR_5 + VAR_8->crtc_offset,
       (VAR_10 << VAR_1) |
       (0x6B0 << VAR_2));

 FUNC_2(VAR_6 + VAR_13,
        (VAR_11 << VAR_3));
 for (VAR_12 = 0; VAR_12 < VAR_7->usec_timeout; VAR_12++) {
  if (FUNC_1(VAR_6 + VAR_13) &
      VAR_4)
   break;
  FUNC_3(1);
 }

 if (VAR_8->base.enabled && VAR_9) {
  switch (VAR_10) {
  case 0:
  default:
   return 4096 * 2;
  case 1:
   return 1920 * 2;
  case 2:
   return 2560 * 2;
  }
 }


 return 0;
}
