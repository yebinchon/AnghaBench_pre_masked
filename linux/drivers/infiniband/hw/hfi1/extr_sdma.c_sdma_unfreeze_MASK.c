
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int num_sdma; int * per_sdma; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_1)
{
 int VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_1->num_sdma; VAR_2++)
  FUNC_0(&VAR_1->per_sdma[VAR_2],
       VAR_0);
}
