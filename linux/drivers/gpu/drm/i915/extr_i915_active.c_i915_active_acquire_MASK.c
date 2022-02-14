
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_active {int (* active ) (struct i915_active*) ;int mutex; int count; } ;


 scalar_t__ FUNC_0 (int *,int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct i915_active*) ;
 int FUNC_4 (struct i915_active*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i915_active*) ;

int FUNC_8(struct i915_active *VAR_0)
{
 int VAR_1;

 FUNC_4(VAR_0);
 if (FUNC_0(&VAR_0->count, 1, 0))
  return 0;

 VAR_1 = FUNC_5(&VAR_0->mutex);
 if (VAR_1)
  return VAR_1;

 if (!FUNC_2(&VAR_0->count) && VAR_0->active)
  VAR_1 = VAR_0->active(VAR_0);
 if (!VAR_1) {
  FUNC_3(VAR_0);
  FUNC_1(&VAR_0->count);
 }

 FUNC_6(&VAR_0->mutex);

 return VAR_1;
}
