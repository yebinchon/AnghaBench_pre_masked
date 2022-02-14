
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int obj; } ;
struct i915_request {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (struct i915_request*,int ,unsigned int) ;
 int FUNC_1 (struct i915_vma*) ;
 int FUNC_2 (struct i915_vma*,struct i915_request*,unsigned int) ;
 int FUNC_3 (struct i915_vma*) ;

__attribute__((used)) static int FUNC_4(struct i915_vma *VAR_1,
     struct i915_request *VAR_2,
     unsigned int VAR_3)
{
 int VAR_4;

 FUNC_1(VAR_1);
 VAR_4 = FUNC_0(VAR_2, VAR_1->obj,
     VAR_3 & VAR_0);
 if (VAR_4 == 0)
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_3);
 FUNC_3(VAR_1);

 return VAR_4;
}
