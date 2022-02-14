
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int private; int obj; } ;
struct i915_request {int dummy; } ;


 int FUNC_0 (struct i915_request*,int ,int) ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_vma*,struct i915_request*,int ) ;
 int FUNC_3 (struct i915_vma*) ;
 int FUNC_4 (int ,struct i915_request*) ;
 scalar_t__ FUNC_5 (int) ;

int FUNC_6(struct i915_vma *VAR_0, struct i915_request *VAR_1)
{
 int VAR_2;

 FUNC_1(VAR_0);
 VAR_2 = FUNC_0(VAR_1, VAR_0->obj, 0);
 if (VAR_2 == 0)
  VAR_2 = FUNC_2(VAR_0, VAR_1, 0);
 FUNC_3(VAR_0);
 if (FUNC_5(VAR_2))
  return VAR_2;

 return FUNC_4(VAR_0->private, VAR_1);
}
