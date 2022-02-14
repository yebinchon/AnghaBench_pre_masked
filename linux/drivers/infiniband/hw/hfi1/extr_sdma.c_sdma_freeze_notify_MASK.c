
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int num_sdma; int * per_sdma; int sdma_unfreeze_count; } ;
typedef enum sdma_events { ____Placeholder_sdma_events } sdma_events ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int) ;

void FUNC_2(struct hfi1_devdata *VAR_2, int VAR_3)
{
 int VAR_4;
 enum sdma_events VAR_5 = VAR_3 ? VAR_1 :
          VAR_0;


 FUNC_0(&VAR_2->sdma_unfreeze_count, VAR_2->num_sdma);


 for (VAR_4 = 0; VAR_4 < VAR_2->num_sdma; VAR_4++)
  FUNC_1(&VAR_2->per_sdma[VAR_4], VAR_5);


}
