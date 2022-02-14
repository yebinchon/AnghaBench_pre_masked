
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ num_rcv_contexts; scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {int * do_interrupt; scalar_t__ is_vnic; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hfi1_ctxtdata* FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_1 (struct hfi1_ctxtdata*) ;

void FUNC_2(struct hfi1_devdata *VAR_2)
{
 struct hfi1_ctxtdata *VAR_3;
 u16 VAR_4;


 for (VAR_4 = VAR_0 + 1; VAR_4 < VAR_2->num_rcv_contexts; VAR_4++) {
  VAR_3 = FUNC_0(VAR_2, VAR_4);
  if (!VAR_3)
   continue;
  if (VAR_4 < VAR_2->first_dyn_alloc_ctxt || VAR_3->is_vnic)
   VAR_3->do_interrupt = &VAR_1;

  FUNC_1(VAR_3);
 }
}
