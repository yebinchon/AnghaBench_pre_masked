
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct drm_display_mode {int crtc_hdisplay; } ;
struct amdgpu_device {int flags; scalar_t__ usec_timeout; } ;
struct TYPE_2__ {scalar_t__ enabled; } ;
struct amdgpu_crtc {scalar_t__ crtc_id; scalar_t__ crtc_offset; TYPE_1__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ,int ,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_5 (int) ;

__attribute__((used)) static u32 FUNC_6(struct amdgpu_device *VAR_8,
           struct amdgpu_crtc *VAR_9,
           struct drm_display_mode *VAR_10)
{
 u32 VAR_11, VAR_12, VAR_13, VAR_14;
 u32 VAR_15 = VAR_9->crtc_id;
 if (VAR_9->base.enabled && VAR_10) {
  if (VAR_10->crtc_hdisplay < 1920) {
   VAR_14 = 1;
   VAR_12 = 2;
  } else if (VAR_10->crtc_hdisplay < 2560) {
   VAR_14 = 2;
   VAR_12 = 2;
  } else if (VAR_10->crtc_hdisplay < 4096) {
   VAR_14 = 0;
   VAR_12 = (VAR_8->flags & VAR_0) ? 2 : 4;
  } else {
   FUNC_0("Mode too big for LB!\n");
   VAR_14 = 0;
   VAR_12 = (VAR_8->flags & VAR_0) ? 2 : 4;
  }
 } else {
  VAR_14 = 1;
  VAR_12 = 0;
 }

 VAR_11 = FUNC_3(VAR_6 + VAR_9->crtc_offset);
 VAR_11 = FUNC_2(VAR_11, VAR_4, VAR_3, VAR_14);
 FUNC_4(VAR_6 + VAR_9->crtc_offset, VAR_11);

 VAR_11 = FUNC_3(VAR_7 + VAR_15);
 VAR_11 = FUNC_2(VAR_11, VAR_5, VAR_1, VAR_12);
 FUNC_4(VAR_7 + VAR_15, VAR_11);

 for (VAR_13 = 0; VAR_13 < VAR_8->usec_timeout; VAR_13++) {
  VAR_11 = FUNC_3(VAR_7 + VAR_15);
  if (FUNC_1(VAR_11, VAR_5, VAR_2))
   break;
  FUNC_5(1);
 }

 if (VAR_9->base.enabled && VAR_10) {
  switch (VAR_14) {
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
