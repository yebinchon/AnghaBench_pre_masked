
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_2__ {struct radeon_crtc** crtcs; } ;
struct radeon_device {int usec_timeout; TYPE_1__ mode_info; } ;
struct radeon_crtc {scalar_t__ crtc_offset; scalar_t__ crtc_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (scalar_t__) ;

void FUNC_5(struct radeon_device *VAR_11, int VAR_12, u64 VAR_13, bool VAR_14)
{
 struct radeon_crtc *VAR_15 = VAR_11->mode_info.crtcs[VAR_12];
 u32 VAR_16 = FUNC_1(VAR_3 + VAR_15->crtc_offset);
 int VAR_17;


 VAR_16 |= VAR_4;
 FUNC_2(VAR_3 + VAR_15->crtc_offset, VAR_16);


 FUNC_2(VAR_0 + VAR_15->crtc_offset,
        VAR_14 ? VAR_1 : 0);
 if (VAR_15->crtc_id) {
  FUNC_2(VAR_10, FUNC_4(VAR_13));
  FUNC_2(VAR_9, FUNC_4(VAR_13));
 } else {
  FUNC_2(VAR_8, FUNC_4(VAR_13));
  FUNC_2(VAR_6, FUNC_4(VAR_13));
 }
 FUNC_2(VAR_7 + VAR_15->crtc_offset,
        (u32)VAR_13);
 FUNC_2(VAR_5 + VAR_15->crtc_offset,
        (u32)VAR_13);


 for (VAR_17 = 0; VAR_17 < VAR_11->usec_timeout; VAR_17++) {
  if (FUNC_1(VAR_3 + VAR_15->crtc_offset) & VAR_2)
   break;
  FUNC_3(1);
 }
 FUNC_0("Update pending now high. Unlocking vupdate_lock.\n");


 VAR_16 &= ~VAR_4;
 FUNC_2(VAR_3 + VAR_15->crtc_offset, VAR_16);
}
