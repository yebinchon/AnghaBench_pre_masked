
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hfi1_devdata {size_t first_dyn_alloc_ctxt; int * rcd; int pport; int node; int num_rcv_contexts; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct hfi1_devdata*,int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct hfi1_devdata *VAR_2)
{
 u16 VAR_3;
 int VAR_4;

 VAR_2->rcd = FUNC_2(VAR_2->num_rcv_contexts, sizeof(*VAR_2->rcd),
          VAR_1, VAR_2->node);
 if (!VAR_2->rcd)
  return -VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_2->first_dyn_alloc_ctxt; ++VAR_3) {
  VAR_4 = FUNC_0(VAR_2, VAR_2->pport);
  if (VAR_4)
   goto bail;
 }

 return 0;
bail:
 for (VAR_3 = 0; VAR_2->rcd && VAR_3 < VAR_2->first_dyn_alloc_ctxt; ++VAR_3)
  FUNC_1(VAR_2->rcd[VAR_3]);


 FUNC_3(VAR_2->rcd);
 VAR_2->rcd = ((void*)0);
 return VAR_4;
}
