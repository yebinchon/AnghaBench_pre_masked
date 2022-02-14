
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int num_sdma; int sdma_unfreeze_count; int sdma_unfreeze_wq; int * per_sdma; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int) ;

void FUNC_4(struct hfi1_devdata *VAR_1)
{
 int VAR_2;
 int VAR_3;





 VAR_3 = FUNC_3(VAR_1->sdma_unfreeze_wq,
           FUNC_0(&VAR_1->sdma_unfreeze_count) <=
           0);

 if (VAR_3 || FUNC_0(&VAR_1->sdma_unfreeze_count) < 0)
  return;


 FUNC_1(&VAR_1->sdma_unfreeze_count, VAR_1->num_sdma);


 for (VAR_2 = 0; VAR_2 < VAR_1->num_sdma; VAR_2++)
  FUNC_2(&VAR_1->per_sdma[VAR_2], VAR_0);






 (void)FUNC_3(VAR_1->sdma_unfreeze_wq,
    FUNC_0(&VAR_1->sdma_unfreeze_count) <= 0);

}
