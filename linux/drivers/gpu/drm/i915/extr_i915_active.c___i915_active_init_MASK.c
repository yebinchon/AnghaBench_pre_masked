
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct i915_active {int (* active ) (struct i915_active*) ;void (* retire ) (struct i915_active*) ;int mutex; int count; int preallocated_barriers; int * cache; int tree; scalar_t__ flags; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*,struct lock_class_key*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct i915_active*) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct drm_i915_private *VAR_1,
   struct i915_active *VAR_2,
   int (*VAR_3)(struct i915_active *VAR_4),
   void (*VAR_5)(struct i915_active *VAR_6),
   struct lock_class_key *VAR_7)
{
 FUNC_2(VAR_2);

 VAR_2->i915 = VAR_1;
 VAR_2->flags = 0;
 VAR_2->active = VAR_3;
 VAR_2->retire = VAR_5;
 VAR_2->tree = VAR_0;
 VAR_2->cache = ((void*)0);
 FUNC_3(&VAR_2->preallocated_barriers);
 FUNC_1(&VAR_2->count, 0);
 FUNC_0(&VAR_2->mutex, "i915_active", VAR_7);
}
