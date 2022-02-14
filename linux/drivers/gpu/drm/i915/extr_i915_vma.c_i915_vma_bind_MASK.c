
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_6__ {scalar_t__ size; int start; } ;
struct i915_vma {scalar_t__ size; int flags; TYPE_2__* ops; int pages; TYPE_1__* vm; TYPE_3__ node; } ;
typedef enum i915_cache_level { ____Placeholder_i915_cache_level } i915_cache_level ;
struct TYPE_5__ {int (* bind_vma ) (struct i915_vma*,int,int) ;} ;
struct TYPE_4__ {int total; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int ,scalar_t__,int ) ;
 int FUNC_4 (struct i915_vma*,int,int) ;
 int FUNC_5 (struct i915_vma*,int) ;

int FUNC_6(struct i915_vma *VAR_7, enum i915_cache_level VAR_8,
    u32 VAR_9)
{
 u32 VAR_10;
 u32 VAR_11;
 int VAR_12;

 FUNC_0(!FUNC_2(&VAR_7->node));
 FUNC_0(VAR_7->size > VAR_7->node.size);

 if (FUNC_1(FUNC_3(VAR_7->node.start,
           VAR_7->node.size,
           VAR_7->vm->total)))
  return -VAR_1;

 if (FUNC_1(!VAR_9))
  return -VAR_0;

 VAR_10 = 0;
 if (VAR_9 & VAR_4)
  VAR_10 |= VAR_2;
 if (VAR_9 & VAR_6)
  VAR_10 |= VAR_3;

 VAR_11 = VAR_7->flags & (VAR_2 | VAR_3);
 if (VAR_9 & VAR_5)
  VAR_10 |= VAR_11;
 else
  VAR_10 &= ~VAR_11;
 if (VAR_10 == 0)
  return 0;

 FUNC_0(!VAR_7->pages);

 FUNC_5(VAR_7, VAR_10);
 VAR_12 = VAR_7->ops->bind_vma(VAR_7, VAR_8, VAR_10);
 if (VAR_12)
  return VAR_12;

 VAR_7->flags |= VAR_10;
 return 0;
}
