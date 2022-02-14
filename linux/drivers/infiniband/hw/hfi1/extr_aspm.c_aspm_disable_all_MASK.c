
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; int aspm_disabled_cnt; } ;
struct hfi1_ctxtdata {int aspm_intr_enable; int aspm_lock; int aspm_timer; } ;


 int FUNC_0 (struct hfi1_devdata*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 struct hfi1_ctxtdata* FUNC_3 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_4 (struct hfi1_ctxtdata*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;

void FUNC_7(struct hfi1_devdata *VAR_0)
{
 struct hfi1_ctxtdata *VAR_1;
 unsigned long VAR_2;
 u16 VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0->first_dyn_alloc_ctxt; VAR_3++) {
  VAR_1 = FUNC_3(VAR_0, VAR_3);
  if (VAR_1) {
   FUNC_2(&VAR_1->aspm_timer);
   FUNC_5(&VAR_1->aspm_lock, VAR_2);
   VAR_1->aspm_intr_enable = 0;
   FUNC_6(&VAR_1->aspm_lock, VAR_2);
   FUNC_4(VAR_1);
  }
 }

 FUNC_0(VAR_0);
 FUNC_1(&VAR_0->aspm_disabled_cnt, 0);
}
