
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int i915; } ;
struct i915_vma {int dummy; } ;


 int FUNC_0 (int ) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_1 (struct i915_vma*,int ,int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct intel_engine_cs *VAR_3,
    struct i915_vma *VAR_4)
{
 unsigned int VAR_5;

 VAR_5 = VAR_0;
 if (!FUNC_0(VAR_3->i915))
  VAR_5 |= VAR_2;
 else
  VAR_5 |= VAR_1;

 return FUNC_1(VAR_4, 0, 0, VAR_5);
}
