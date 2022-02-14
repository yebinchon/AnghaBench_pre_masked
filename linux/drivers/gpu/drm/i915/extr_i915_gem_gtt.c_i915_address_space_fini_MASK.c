
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; int pvec; } ;
struct i915_address_space {int mutex; int mm; TYPE_1__ free_pages; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct i915_address_space*,int) ;

__attribute__((used)) static void FUNC_7(struct i915_address_space *VAR_0)
{
 FUNC_4(&VAR_0->free_pages.lock);
 if (FUNC_3(&VAR_0->free_pages.pvec))
  FUNC_6(VAR_0, 1);
 FUNC_0(FUNC_3(&VAR_0->free_pages.pvec));
 FUNC_5(&VAR_0->free_pages.lock);

 FUNC_1(&VAR_0->mm);

 FUNC_2(&VAR_0->mutex);
}
