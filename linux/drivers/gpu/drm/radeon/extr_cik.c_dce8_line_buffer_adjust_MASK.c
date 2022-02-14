
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct radeon_device {int flags; scalar_t__ usec_timeout; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct radeon_crtc {int crtc_id; scalar_t__ crtc_offset; TYPE_1__ base; } ;
struct drm_display_mode {int crtc_hdisplay; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,int) ;
 int FUNC_6 (int) ;

__attribute__((used)) static u32 FUNC_7(struct radeon_device *VAR_4,
       struct radeon_crtc *VAR_5,
       struct drm_display_mode *VAR_6)
{
 u32 VAR_7, VAR_8, VAR_9;
 u32 VAR_10 = VAR_5->crtc_id * 0x20;
 if (VAR_5->base.enabled && VAR_6) {
  if (VAR_6->crtc_hdisplay < 1920) {
   VAR_7 = 1;
   VAR_8 = 2;
  } else if (VAR_6->crtc_hdisplay < 2560) {
   VAR_7 = 2;
   VAR_8 = 2;
  } else if (VAR_6->crtc_hdisplay < 4096) {
   VAR_7 = 0;
   VAR_8 = (VAR_4->flags & VAR_3) ? 2 : 4;
  } else {
   FUNC_1("Mode too big for LB!\n");
   VAR_7 = 0;
   VAR_8 = (VAR_4->flags & VAR_3) ? 2 : 4;
  }
 } else {
  VAR_7 = 1;
  VAR_8 = 0;
 }

 FUNC_5(VAR_1 + VAR_5->crtc_offset,
        FUNC_2(VAR_7) | FUNC_3(0x6B0));

 FUNC_5(VAR_2 + VAR_10,
        FUNC_0(VAR_8));
 for (VAR_9 = 0; VAR_9 < VAR_4->usec_timeout; VAR_9++) {
  if (FUNC_4(VAR_2 + VAR_10) &
      VAR_0)
   break;
  FUNC_6(1);
 }

 if (VAR_5->base.enabled && VAR_6) {
  switch (VAR_7) {
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
