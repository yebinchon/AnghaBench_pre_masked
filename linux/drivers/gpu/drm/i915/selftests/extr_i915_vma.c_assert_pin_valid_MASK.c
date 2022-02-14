
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pin_mode {int flags; int size; } ;
struct i915_vma {int dummy; } ;


 scalar_t__ FUNC_0 (struct i915_vma const*,int ,int ,int ) ;

__attribute__((used)) static bool FUNC_1(const struct i915_vma *VAR_0,
        const struct pin_mode *VAR_1,
        int VAR_2)
{
 if (VAR_2)
  return 0;

 if (FUNC_0(VAR_0, VAR_1->size, 0, VAR_1->flags))
  return 0;

 return 1;
}
