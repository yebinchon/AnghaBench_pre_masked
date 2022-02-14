
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_address_space {unsigned long long total; int top; } ;


 unsigned int FUNC_0 (int ) ;

__attribute__((used)) static inline unsigned int FUNC_1(const struct i915_address_space *VAR_0)
{
 unsigned int VAR_1 = FUNC_0(VAR_0->top);
 return (VAR_0->total + (1ull << VAR_1) - 1) >> VAR_1;
}
