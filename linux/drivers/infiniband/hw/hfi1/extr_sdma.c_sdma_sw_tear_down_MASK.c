
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sdma_state {int dummy; } ;
struct sdma_engine {TYPE_1__* dd; struct sdma_state state; } ;
struct TYPE_2__ {int sdma_unfreeze_wq; int sdma_unfreeze_count; } ;


 int FUNC_0 (int *,int) ;
 int FUNC_1 (struct sdma_state*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct sdma_engine *VAR_0)
{
 struct sdma_state *VAR_1 = &VAR_0->state;


 FUNC_1(VAR_1);


 FUNC_0(&VAR_0->dd->sdma_unfreeze_count, -1);
 FUNC_2(&VAR_0->dd->sdma_unfreeze_wq);
}
