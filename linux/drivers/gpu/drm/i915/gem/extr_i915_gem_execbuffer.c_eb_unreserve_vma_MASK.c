
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_vma {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct i915_vma*,unsigned int) ;

__attribute__((used)) static inline void
FUNC_1(struct i915_vma *VAR_2, unsigned int *VAR_3)
{
 if (!(*VAR_3 & VAR_0))
  return;

 FUNC_0(VAR_2, *VAR_3);
 *VAR_3 &= ~VAR_1;
}
