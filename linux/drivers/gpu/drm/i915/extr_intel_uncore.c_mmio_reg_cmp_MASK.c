
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef int i915_reg_t ;


 scalar_t__ FUNC_0 (int const) ;

__attribute__((used)) static int FUNC_1(u32 VAR_0, const i915_reg_t *VAR_1)
{
 u32 VAR_2 = FUNC_0(*VAR_1);

 if (VAR_0 < VAR_2)
  return -1;
 else if (VAR_0 > VAR_2)
  return 1;
 else
  return 0;
}
