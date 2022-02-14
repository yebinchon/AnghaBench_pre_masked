
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ u16 ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {int sb_lock; struct intel_uncore uncore; } ;
typedef enum intel_sbi_destination { ____Placeholder_intel_sbi_destination } intel_sbi_destination ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (struct intel_uncore*,int ,int,int ,int,int,int*) ;
 int FUNC_3 (struct intel_uncore*,int ) ;
 int FUNC_4 (struct intel_uncore*,int ,int) ;
 scalar_t__ FUNC_5 (struct intel_uncore*,int ,int,int ,int) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct drm_i915_private *VAR_13, u16 VAR_14,
   enum intel_sbi_destination VAR_15,
   u32 *VAR_16, bool VAR_17)
{
 struct intel_uncore *VAR_18 = &VAR_13->uncore;
 u32 VAR_19;

 FUNC_6(&VAR_13->sb_lock);

 if (FUNC_5(VAR_18,
           VAR_9, VAR_4, 0,
           100)) {
  FUNC_1("timeout waiting for SBI to become ready\n");
  return -VAR_0;
 }

 FUNC_4(VAR_18, VAR_3, (u32)VAR_14 << 16);
 FUNC_4(VAR_18, VAR_10, VAR_17 ? 0 : *VAR_16);

 if (VAR_15 == VAR_11)
  VAR_19 = VAR_5 | VAR_7;
 else
  VAR_19 = VAR_6 | VAR_8;
 if (!VAR_17)
  VAR_19 |= FUNC_0(8);
 FUNC_4(VAR_18, VAR_9, VAR_19 | VAR_4);

 if (FUNC_2(VAR_18,
      VAR_9, VAR_4, 0,
      100, 100, &VAR_19)) {
  FUNC_1("timeout waiting for SBI to complete read\n");
  return -VAR_2;
 }

 if (VAR_19 & VAR_12) {
  FUNC_1("error during SBI read of reg %x\n", VAR_14);
  return -VAR_1;
 }

 if (VAR_17)
  *VAR_16 = FUNC_3(VAR_18, VAR_10);

 return 0;
}
