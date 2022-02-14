
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct intel_guc {int dummy; } ;
struct i915_vma {int size; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct i915_vma*) ;
 scalar_t__ FUNC_2 (struct i915_vma*) ;
 int FUNC_3 (int ,scalar_t__,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static inline u32 FUNC_4(struct intel_guc *VAR_2,
     struct i915_vma *VAR_3)
{
 u32 VAR_4 = FUNC_1(VAR_3);

 FUNC_0(VAR_4 < FUNC_2(VAR_3));
 FUNC_0(FUNC_3(VAR_1, VAR_4, VAR_3->size, VAR_0));

 return VAR_4;
}
