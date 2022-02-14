
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int dummy; } ;
struct hfi1_devdata {unsigned int num_sdma; struct sdma_engine* per_sdma; } ;


 int VAR_0 ;
 int FUNC_0 (struct sdma_engine*,int ) ;

void FUNC_1(struct hfi1_devdata *VAR_1)
{
 unsigned VAR_2;
 struct sdma_engine *VAR_3;


 for (VAR_2 = 0; VAR_2 < VAR_1->num_sdma; ++VAR_2) {
  VAR_3 = &VAR_1->per_sdma[VAR_2];
  FUNC_0(VAR_3, VAR_0);
 }
}
