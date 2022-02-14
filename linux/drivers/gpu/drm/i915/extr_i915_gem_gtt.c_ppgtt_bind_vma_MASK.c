
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int start; } ;
struct i915_vma {int flags; TYPE_2__* vm; int obj; int size; TYPE_1__ node; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
struct TYPE_5__ {int (* allocate_va_range ) (TYPE_2__*,int ,int ) ;int (* insert_entries ) (TYPE_2__*,struct i915_vma*,int,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*,struct i915_vma*,int,int ) ;

__attribute__((used)) static int FUNC_3(struct i915_vma *VAR_2,
     enum i915_cache_level VAR_3,
     u32 VAR_4)
{
 u32 VAR_5;
 int VAR_6;

 if (!(VAR_2->flags & VAR_0)) {
  VAR_6 = VAR_2->vm->allocate_va_range(VAR_2->vm,
       VAR_2->node.start, VAR_2->size);
  if (VAR_6)
   return VAR_6;
 }


 VAR_5 = 0;
 if (FUNC_0(VAR_2->obj))
  VAR_5 |= VAR_1;

 VAR_2->vm->insert_entries(VAR_2->vm, VAR_2, VAR_3, VAR_5);

 return 0;
}
