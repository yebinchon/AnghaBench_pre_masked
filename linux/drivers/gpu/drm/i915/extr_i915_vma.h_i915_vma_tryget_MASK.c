
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct i915_vma {TYPE_2__* obj; } ;
struct TYPE_3__ {int refcount; } ;
struct TYPE_4__ {TYPE_1__ base; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static inline struct i915_vma *FUNC_2(struct i915_vma *VAR_0)
{
 if (FUNC_1(FUNC_0(&VAR_0->obj->base.refcount)))
  return VAR_0;

 return ((void*)0);
}
