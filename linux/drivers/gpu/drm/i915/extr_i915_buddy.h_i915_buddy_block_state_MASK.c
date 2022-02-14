
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_buddy_block {unsigned int header; } ;


 unsigned int VAR_0 ;

__attribute__((used)) static inline unsigned int
FUNC_0(struct i915_buddy_block *VAR_1)
{
 return VAR_1->header & VAR_0;
}
