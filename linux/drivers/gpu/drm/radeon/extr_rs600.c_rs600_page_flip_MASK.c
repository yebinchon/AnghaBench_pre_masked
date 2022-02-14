
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {int usec_timeout; TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;

void FUNC_4(struct radeon_device *VAR_7, int VAR_8, u64 VAR_9, bool VAR_10)
{
 struct radeon_crtc *VAR_11 = VAR_7->mode_info.crtcs[VAR_8];
 u32 VAR_12 = FUNC_1(VAR_5 + VAR_11->crtc_offset);
 int VAR_13;


 VAR_12 |= VAR_6;
 FUNC_2(VAR_5 + VAR_11->crtc_offset, VAR_12);


 FUNC_2(VAR_0 + VAR_11->crtc_offset,
        VAR_10 ? VAR_3 : 0);
 FUNC_2(VAR_2 + VAR_11->crtc_offset,
        (u32)VAR_9);
 FUNC_2(VAR_1 + VAR_11->crtc_offset,
        (u32)VAR_9);


 for (VAR_13 = 0; VAR_13 < VAR_7->usec_timeout; VAR_13++) {
  if (FUNC_1(VAR_5 + VAR_11->crtc_offset) & VAR_4)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_12 &= ~VAR_6;
 FUNC_2(VAR_5 + VAR_11->crtc_offset, VAR_12);
}
