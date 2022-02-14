
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int dummy; } ;
struct hfi1_devdata {int num_sdma; struct sdma_engine* per_sdma; } ;


 int FUNC_0 (struct sdma_engine*,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sdma; VAR_1++) {
  struct sdma_engine *VAR_2 = &VAR_0->per_sdma[VAR_1];

  FUNC_0(VAR_2, 0);
 }
}
