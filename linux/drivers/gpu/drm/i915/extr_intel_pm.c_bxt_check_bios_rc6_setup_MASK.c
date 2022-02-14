
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {unsigned long start; scalar_t__ end; } ;
struct drm_i915_private {TYPE_1__ dsm_reserved; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_2 (int) ;

__attribute__((used)) static bool FUNC_3(struct drm_i915_private *VAR_21)
{
 bool VAR_22 = 1;
 unsigned long VAR_23;
 u32 VAR_24;
 int VAR_25;

 VAR_24 = FUNC_1(VAR_1);
 VAR_25 = (FUNC_1(VAR_4) & VAR_19) >>
         VAR_20;
 FUNC_0("BIOS enabled RC states: "
    "HW_CTRL %s HW_RC6 %s SW_TARGET_STATE %x\n",
    FUNC_2(VAR_24 & VAR_2),
    FUNC_2(VAR_24 & VAR_3),
    VAR_25);

 if (!(FUNC_1(VAR_18) & VAR_17)) {
  FUNC_0("RC6 Base location not set properly.\n");
  VAR_22 = 0;
 }





 VAR_23 = FUNC_1(VAR_15) & VAR_16;
 if (!((VAR_23 >= VAR_21->dsm_reserved.start) &&
       (VAR_23 + VAR_10 < VAR_21->dsm_reserved.end))) {
  FUNC_0("RC6 Base address not as expected.\n");
  VAR_22 = 0;
 }

 if (!(((FUNC_1(VAR_12) & VAR_9) > 1) &&
       ((FUNC_1(VAR_13) & VAR_9) > 1) &&
       ((FUNC_1(VAR_11) & VAR_9) > 1) &&
       ((FUNC_1(VAR_14) & VAR_9) > 1))) {
  FUNC_0("Engine Idle wait time not set properly.\n");
  VAR_22 = 0;
 }

 if (!FUNC_1(VAR_6) ||
     !FUNC_1(VAR_7) ||
     !FUNC_1(VAR_8)) {
  FUNC_0("Pushbus not setup properly.\n");
  VAR_22 = 0;
 }

 if (!FUNC_1(VAR_0)) {
  FUNC_0("GFX pause not setup properly.\n");
  VAR_22 = 0;
 }

 if (!FUNC_1(VAR_5)) {
  FUNC_0("GPM control not setup properly.\n");
  VAR_22 = 0;
 }

 return VAR_22;
}
