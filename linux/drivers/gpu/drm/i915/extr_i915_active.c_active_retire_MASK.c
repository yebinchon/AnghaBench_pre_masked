
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_active {int mutex; int count; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct i915_active*) ;
 scalar_t__ FUNC_2 (int *,int,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static void
FUNC_5(struct i915_active *VAR_1)
{
 FUNC_0(!FUNC_3(&VAR_1->count));
 if (FUNC_2(&VAR_1->count, -1, 1))
  return;


 FUNC_4(&VAR_1->mutex, VAR_0);
 FUNC_1(VAR_1);
}
