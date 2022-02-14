
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_active {int count; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct i915_active*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct i915_active*) ;
 scalar_t__ FUNC_3 (int ,int *) ;

bool FUNC_4(struct i915_active *VAR_1)
{
 FUNC_2(VAR_1);

 if (FUNC_3(VAR_0, &VAR_1->flags))
  return 0;

 if (!FUNC_1(&VAR_1->count, 1, 0)) {
  FUNC_0(VAR_1);
  return 0;
 }

 return 1;
}
