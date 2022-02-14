
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mcif_wb {TYPE_3__* funcs; } ;
struct dwbc {TYPE_2__* funcs; } ;
struct dc {TYPE_1__* res_pool; } ;
struct TYPE_6__ {int (* disable_mcif ) (struct mcif_wb*) ;} ;
struct TYPE_5__ {int (* disable ) (struct dwbc*) ;} ;
struct TYPE_4__ {struct mcif_wb** mcif_wb; struct dwbc** dwbc; } ;


 int FUNC_0 (int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (struct dwbc*) ;
 int FUNC_2 (struct mcif_wb*) ;

void FUNC_3(
  struct dc *VAR_1,
  unsigned int VAR_2)
{
 struct dwbc *VAR_3;
 struct mcif_wb *VAR_4;

 FUNC_0(VAR_2 < VAR_0);
 VAR_3 = VAR_1->res_pool->dwbc[VAR_2];
 VAR_4 = VAR_1->res_pool->mcif_wb[VAR_2];

 VAR_3->funcs->disable(VAR_3);
 VAR_4->funcs->disable_mcif(VAR_4);
}
