
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sdma_engine {int dd; } ;
struct hfi1_devdata {int num_sdma; int n_krcv_queues; struct sdma_engine* per_sdma; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int VAR_1 ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,int) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (struct hfi1_devdata*,struct hfi1_devdata*,int ,int *,int ,int ) ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (struct sdma_engine*) ;

int FUNC_6(struct hfi1_devdata *VAR_2)
{
 int VAR_3;
 int VAR_4;

 VAR_4 = FUNC_3(VAR_2, VAR_2, VAR_1, ((void*)0), 0, VAR_0);
 if (VAR_4 < 0)
  return VAR_4;

 for (VAR_3 = 0; VAR_3 < VAR_2->num_sdma; VAR_3++) {
  struct sdma_engine *VAR_5 = &VAR_2->per_sdma[VAR_3];

  VAR_4 = FUNC_5(VAR_5);
  if (VAR_4)
   return VAR_4;
  FUNC_0(VAR_5->dd, VAR_3);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->n_krcv_queues; VAR_3++) {
  struct hfi1_ctxtdata *VAR_6 = FUNC_1(VAR_2, VAR_3);

  if (VAR_6)
   VAR_4 = FUNC_4(VAR_6);
  FUNC_2(VAR_6);
  if (VAR_4)
   return VAR_4;
 }

 return 0;
}
