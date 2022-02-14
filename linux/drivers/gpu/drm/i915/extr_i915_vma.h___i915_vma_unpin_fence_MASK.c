
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_vma {TYPE_1__* fence; } ;
struct TYPE_2__ {int pin_count; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct i915_vma *VAR_0)
{
 FUNC_0(FUNC_2(&VAR_0->fence->pin_count) <= 0);
 FUNC_1(&VAR_0->fence->pin_count);
}
