
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ start; scalar_t__ size; int allocated; } ;
struct i915_vma {TYPE_1__ node; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct i915_vma const*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static inline u32 FUNC_4(const struct i915_vma *VAR_0)
{
 FUNC_0(!FUNC_1(VAR_0));
 FUNC_0(!VAR_0->node.allocated);
 FUNC_0(FUNC_3(VAR_0->node.start));
 FUNC_0(FUNC_3(VAR_0->node.start + VAR_0->node.size - 1));
 return FUNC_2(VAR_0->node.start);
}
