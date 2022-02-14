
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; int page_flags; TYPE_1__* func; int * swap_storage; } ;
struct TYPE_2__ {int (* destroy ) (struct ttm_tt*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ttm_tt*) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (struct ttm_tt*) ;
 int FUNC_3 (struct ttm_tt*) ;

void FUNC_4(struct ttm_tt *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return;

 FUNC_2(VAR_2);

 if (VAR_2->state == VAR_1)
  FUNC_3(VAR_2);

 if (!(VAR_2->page_flags & VAR_0) &&
     VAR_2->swap_storage)
  FUNC_0(VAR_2->swap_storage);

 VAR_2->swap_storage = ((void*)0);
 VAR_2->func->destroy(VAR_2);
}
