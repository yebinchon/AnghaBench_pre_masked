
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {int aspm_intr_enable; int aspm_enabled; int aspm_lock; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct hfi1_devdata*) ;
 scalar_t__ VAR_1 ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

void FUNC_5(struct hfi1_devdata *VAR_2)
{
 struct hfi1_ctxtdata *VAR_3;
 unsigned long VAR_4;
 u16 VAR_5;

 FUNC_0(VAR_2);

 if (VAR_1 != VAR_0)
  return;

 for (VAR_5 = 0; VAR_5 < VAR_2->first_dyn_alloc_ctxt; VAR_5++) {
  VAR_3 = FUNC_1(VAR_2, VAR_5);
  if (VAR_3) {
   FUNC_3(&VAR_3->aspm_lock, VAR_4);
   VAR_3->aspm_intr_enable = 1;
   VAR_3->aspm_enabled = 1;
   FUNC_4(&VAR_3->aspm_lock, VAR_4);
   FUNC_2(VAR_3);
  }
 }
}
