
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_syncmap {struct i915_syncmap* parent; } ;


 int FUNC_0 (struct i915_syncmap*) ;

void FUNC_1(struct i915_syncmap **VAR_0)
{
 struct i915_syncmap *VAR_1;

 VAR_1 = *VAR_0;
 if (!VAR_1)
  return;

 while (VAR_1->parent)
  VAR_1 = VAR_1->parent;

 FUNC_0(VAR_1);
 *VAR_0 = ((void*)0);
}
