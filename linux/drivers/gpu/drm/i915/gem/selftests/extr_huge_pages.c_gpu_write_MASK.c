
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {int dummy; } ;
struct i915_vma {int size; int obj; } ;
struct i915_gem_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct i915_vma*,struct i915_gem_context*,struct intel_engine_cs*,int,int,int) ;

__attribute__((used)) static int FUNC_4(struct i915_vma *VAR_1,
       struct i915_gem_context *VAR_2,
       struct intel_engine_cs *VAR_3,
       u32 VAR_4,
       u32 VAR_5)
{
 int VAR_6;

 FUNC_0(VAR_1->obj);
 VAR_6 = FUNC_1(VAR_1->obj, 1);
 FUNC_2(VAR_1->obj);
 if (VAR_6)
  return VAR_6;

 return FUNC_3(VAR_1, VAR_2, VAR_3, VAR_4 * sizeof(u32),
          VAR_1->size >> VAR_0, VAR_5);
}
