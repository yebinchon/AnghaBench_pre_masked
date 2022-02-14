
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct intel_gt {int i915; struct intel_uncore* uncore; } ;
typedef int i915_reg_t ;


 int FUNC_0 (char*,int ,int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_8 ;
 int FUNC_5 (struct intel_uncore*,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct intel_gt *VAR_9)
{
 struct intel_uncore *VAR_10 = VAR_9->uncore;
 i915_reg_t VAR_11, VAR_12, VAR_13;
 u32 VAR_14;

 if (FUNC_2(VAR_9->i915) >= 12) {
  VAR_11 = VAR_4;
  VAR_12 = VAR_2;
  VAR_13 = VAR_3;
 } else {
  VAR_11 = VAR_7;
  VAR_12 = VAR_5;
  VAR_13 = VAR_6;
 }

 VAR_14 = FUNC_5(VAR_10, VAR_11);
 if (VAR_14 & VAR_8) {
  u32 VAR_15, VAR_16;
  u64 VAR_17;

  VAR_15 = FUNC_5(VAR_10, VAR_12);
  VAR_16 = FUNC_5(VAR_10, VAR_13);

  VAR_17 = ((u64)(VAR_16 & VAR_1) << 44) |
        ((u64)VAR_15 << 12);

  FUNC_0("Unexpected fault\n"
     "\tAddr: 0x%08x_%08x\n"
     "\tAddress space: %s\n"
     "\tEngine ID: %d\n"
     "\tSource ID: %d\n"
     "\tType: %d\n",
     FUNC_7(VAR_17),
     FUNC_6(VAR_17),
     VAR_16 & VAR_0 ? "GGTT" : "PPGTT",
     FUNC_1(VAR_14),
     FUNC_4(VAR_14),
     FUNC_3(VAR_14));
 }
}
