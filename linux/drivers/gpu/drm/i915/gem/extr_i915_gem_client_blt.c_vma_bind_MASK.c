
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_vma {TYPE_2__* vm; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
struct TYPE_3__ {int (* bind_vma ) (struct i915_vma*,int,int ) ;} ;
struct TYPE_4__ {TYPE_1__ vma_ops; } ;


 int FUNC_0 (struct i915_vma*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct i915_vma *VAR_0,
      enum i915_cache_level VAR_1,
      u32 VAR_2)
{
 return VAR_0->vm->vma_ops.bind_vma(VAR_0, VAR_1, VAR_2);
}
