
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct TYPE_2__ {int lock; int pvec; } ;
struct i915_address_space {TYPE_1__ free_pages; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,struct page*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct i915_address_space*,int) ;

__attribute__((used)) static void FUNC_8(struct i915_address_space *VAR_1, struct page *VAR_2)
{







 FUNC_1();
 FUNC_5(&VAR_1->free_pages.lock);
 while (!FUNC_4(&VAR_1->free_pages.pvec))
  FUNC_7(VAR_1, 0);
 FUNC_0(FUNC_3(&VAR_1->free_pages.pvec) >= VAR_0);
 FUNC_2(&VAR_1->free_pages.pvec, VAR_2);
 FUNC_6(&VAR_1->free_pages.lock);
}
