
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_address_space {int total; } ;



__attribute__((used)) static inline bool
FUNC_0(const struct i915_address_space *VAR_0)
{
 return (VAR_0->total - 1) >> 32;
}
