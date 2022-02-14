
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_pportdata {struct hfi1_devdata* dd; } ;
struct hfi1_devdata {unsigned long* events; scalar_t__ first_dyn_alloc_ctxt; scalar_t__ num_rcv_contexts; } ;
struct hfi1_ctxtdata {int subctxt_cnt; } ;


 int VAR_0 ;
 struct hfi1_ctxtdata* FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;
 int FUNC_2 (int const,unsigned long*) ;
 int FUNC_3 (struct hfi1_ctxtdata*) ;

int FUNC_4(struct hfi1_pportdata *VAR_1, const int VAR_2)
{
 struct hfi1_ctxtdata *VAR_3;
 struct hfi1_devdata *VAR_4 = VAR_1->dd;
 u16 VAR_5;

 if (!VAR_4->events)
  return -VAR_0;

 for (VAR_5 = VAR_4->first_dyn_alloc_ctxt; VAR_5 < VAR_4->num_rcv_contexts;
      VAR_5++) {
  VAR_3 = FUNC_0(VAR_4, VAR_5);
  if (VAR_3) {
   unsigned long *VAR_6;
   int VAR_7;




   VAR_6 = VAR_4->events + FUNC_3(VAR_3);
   FUNC_2(VAR_2, VAR_6);
   for (VAR_7 = 1; VAR_7 < VAR_3->subctxt_cnt; VAR_7++)
    FUNC_2(VAR_2, VAR_6 + VAR_7);
   FUNC_1(VAR_3);
  }
 }

 return 0;
}
