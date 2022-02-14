
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint16_t ;
typedef int intmax_t ;
struct TYPE_2__ {void* tc_get_timecount; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;



 int FUNC_2 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (char*,int*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_4 (int*) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 void* VAR_15 ;
 void* VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 TYPE_1__ VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_11 (int,int ) ;

__attribute__((used)) static void
FUNC_12(void)
{
 uint64_t VAR_22, VAR_23;
 uint16_t VAR_24;

 if (VAR_12 & VAR_2) {




  FUNC_11(VAR_5, 0);
  FUNC_11(VAR_4, 0);
  FUNC_2(10);
  if (FUNC_6(VAR_5) > 0 && FUNC_6(VAR_4) > 0)
   VAR_18 = 1;
 }

 if (VAR_21 == VAR_7) {
  FUNC_10();
  return;
 }

 switch (VAR_13) {
 case 130:
  if ((VAR_8 & VAR_1) != 0 ||
      (VAR_21 == VAR_6 &&
      FUNC_0(VAR_11) >= 0x10))
   VAR_17 = 1;
  if (VAR_10 & VAR_3) {
   VAR_20.tc_get_timecount =
       VAR_16;
  }
  break;
 case 128:
  if ((VAR_8 & VAR_1) != 0 ||
      (VAR_21 == VAR_6 &&
      ((FUNC_0(VAR_11) == 0x6 &&
      FUNC_1(VAR_11) >= 0xe) ||
      (FUNC_0(VAR_11) == 0xf &&
      FUNC_1(VAR_11) >= 0x3))))
   VAR_17 = 1;
  if (VAR_10 & VAR_3) {
   VAR_20.tc_get_timecount =
       VAR_15;
  }
  break;
 case 129:
  if (VAR_21 == VAR_6 &&
      FUNC_0(VAR_11) == 0x6 &&
      FUNC_1(VAR_11) >= 0xf &&
      (FUNC_6(0x1203) & 0x100000000ULL) == 0)
   VAR_17 = 1;
  if (VAR_10 & VAR_3) {
   VAR_20.tc_get_timecount =
       VAR_15;
  }
  break;
 }

 if (!FUNC_3("machdep.disable_tsc_calibration",
     &VAR_19)) {
  if (FUNC_4(&VAR_24) &&
      (VAR_24 & VAR_0) == 0 &&
      FUNC_8()) {
   FUNC_5("Skipping TSC calibration since no legacy "
       "devices reported by FADT and CPUID works\n");
   VAR_19 = 1;
  }
 }
 if (VAR_19) {
  if (FUNC_8())
   ;
  else if (VAR_13 == 128)
   FUNC_9();
 } else {
  if (VAR_9)
   FUNC_5("Calibrating TSC clock ... ");
  VAR_22 = FUNC_7();
  FUNC_2(1000000);
  VAR_23 = FUNC_7();
  VAR_14 = VAR_23 - VAR_22;
 }
 if (VAR_9)
  FUNC_5("TSC clock: %ju Hz\n", (intmax_t)VAR_14);
}
