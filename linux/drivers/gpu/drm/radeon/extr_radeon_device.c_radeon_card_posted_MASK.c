
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_device {scalar_t__ family; int num_crtc; TYPE_1__* pdev; } ;
struct TYPE_2__ {scalar_t__ subsystem_vendor; } ;


 scalar_t__ FUNC_0 (struct radeon_device*) ;
 scalar_t__ FUNC_1 (struct radeon_device*) ;
 scalar_t__ FUNC_2 (struct radeon_device*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 () ;

bool FUNC_6(struct radeon_device *VAR_20)
{
 uint32_t VAR_21;


 if (VAR_20->family >= VAR_3 &&
     FUNC_5())
  return 0;


 if (FUNC_4(VAR_5) &&
     (VAR_20->pdev->subsystem_vendor == VAR_14) &&
     (VAR_20->family < VAR_4))
  return 0;

 if (FUNC_2(VAR_20))
  goto check_memsize;


 if (FUNC_1(VAR_20)) {
  VAR_21 = FUNC_3(VAR_12 + VAR_6) |
   FUNC_3(VAR_12 + VAR_7);
   if (VAR_20->num_crtc >= 4) {
    VAR_21 |= FUNC_3(VAR_12 + VAR_8) |
     FUNC_3(VAR_12 + VAR_9);
   }
   if (VAR_20->num_crtc >= 6) {
    VAR_21 |= FUNC_3(VAR_12 + VAR_10) |
     FUNC_3(VAR_12 + VAR_11);
   }
  if (VAR_21 & VAR_13)
   return 1;
 } else if (FUNC_0(VAR_20)) {
  VAR_21 = FUNC_3(VAR_1) |
        FUNC_3(VAR_2);
  if (VAR_21 & VAR_0) {
   return 1;
  }
 } else {
  VAR_21 = FUNC_3(VAR_19) |
        FUNC_3(VAR_17);
  if (VAR_21 & VAR_18) {
   return 1;
  }
 }

check_memsize:

 if (VAR_20->family >= VAR_4)
  VAR_21 = FUNC_3(VAR_15);
 else
  VAR_21 = FUNC_3(VAR_16);

 if (VAR_21)
  return 1;

 return 0;

}
