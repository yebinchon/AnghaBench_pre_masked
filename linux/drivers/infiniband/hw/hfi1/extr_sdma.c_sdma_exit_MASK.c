
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int state; int err_progress_check_timer; int this_idx; int dmawait; } ;
struct hfi1_devdata {unsigned int num_sdma; struct sdma_engine* per_sdma; } ;


 int FUNC_0 (struct hfi1_devdata*,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct sdma_engine*,int ) ;

void FUNC_5(struct hfi1_devdata *VAR_1)
{
 unsigned VAR_2;
 struct sdma_engine *VAR_3;

 for (VAR_2 = 0; VAR_1->per_sdma && VAR_2 < VAR_1->num_sdma;
   ++VAR_2) {
  VAR_3 = &VAR_1->per_sdma[VAR_2];
  if (!FUNC_2(&VAR_3->dmawait))
   FUNC_0(VAR_1, "sde %u: dmawait list not empty!\n",
       VAR_3->this_idx);
  FUNC_4(VAR_3, VAR_0);

  FUNC_1(&VAR_3->err_progress_check_timer);






  FUNC_3(&VAR_3->state);
 }
}
