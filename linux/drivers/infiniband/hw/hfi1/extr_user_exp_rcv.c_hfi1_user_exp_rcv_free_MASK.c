
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_filedata {int * entry_to_rb; int * invalid_tids; scalar_t__ handler; struct hfi1_ctxtdata* uctxt; } ;
struct hfi1_ctxtdata {int tid_used_list; int tid_full_list; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct hfi1_ctxtdata*,int *,struct hfi1_filedata*) ;

void FUNC_4(struct hfi1_filedata *VAR_0)
{
 struct hfi1_ctxtdata *VAR_1 = VAR_0->uctxt;





 if (VAR_0->handler) {
  FUNC_1(VAR_0->handler);
 } else {
  if (!FUNC_0(VAR_1->tid_full_list))
   FUNC_3(VAR_1, &VAR_1->tid_full_list, VAR_0);
  if (!FUNC_0(VAR_1->tid_used_list))
   FUNC_3(VAR_1, &VAR_1->tid_used_list, VAR_0);
 }

 FUNC_2(VAR_0->invalid_tids);
 VAR_0->invalid_tids = ((void*)0);

 FUNC_2(VAR_0->entry_to_rb);
 VAR_0->entry_to_rb = ((void*)0);
}
