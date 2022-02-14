
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct i915_vma {int obj; TYPE_1__* vm; } ;
struct TYPE_2__ {int gt; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i915_vma *VAR_2)
{
 u32 *VAR_3;

 VAR_3 = FUNC_2(VAR_2->obj, VAR_0);
 if (FUNC_0(VAR_3))
  return FUNC_1(VAR_3);

 *VAR_3 = VAR_1;
 FUNC_4(VAR_2->vm->gt);

 FUNC_3(VAR_2->obj);

 return 0;
}
