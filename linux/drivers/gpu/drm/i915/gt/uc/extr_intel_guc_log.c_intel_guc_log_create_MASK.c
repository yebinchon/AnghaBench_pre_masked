
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_guc_log {int level; struct i915_vma* vma; } ;
struct intel_guc {int dummy; } ;
struct i915_vma {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,int ,int ,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_5 (struct i915_vma*) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (struct i915_vma*) ;
 int FUNC_7 (struct intel_guc_log*) ;
 int FUNC_8 (int ) ;
 struct i915_vma* FUNC_9 (struct intel_guc*,scalar_t__) ;
 struct intel_guc* FUNC_10 (struct intel_guc_log*) ;
 int FUNC_11 (int ) ;

int FUNC_12(struct intel_guc_log *VAR_4)
{
 struct intel_guc *VAR_5 = FUNC_10(VAR_4);
 struct i915_vma *VAR_6;
 u32 VAR_7;
 int VAR_8;

 FUNC_2(VAR_4->vma);
 VAR_7 = VAR_3 + VAR_0 + VAR_1 +
   VAR_2;

 VAR_6 = FUNC_9(VAR_5, VAR_7);
 if (FUNC_5(VAR_6)) {
  VAR_8 = FUNC_6(VAR_6);
  goto err;
 }

 VAR_4->vma = VAR_6;

 VAR_4->level = FUNC_7(VAR_4);
 FUNC_0("guc_log_level=%d (%s, verbose:%s, verbosity:%d)\n",
    VAR_4->level, FUNC_8(VAR_4->level),
    FUNC_11(FUNC_3(VAR_4->level)),
    FUNC_4(VAR_4->level));

 return 0;

err:
 FUNC_1("Failed to allocate GuC log buffer. %d\n", VAR_8);
 return VAR_8;
}
