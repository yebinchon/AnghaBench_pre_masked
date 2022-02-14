
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; int aspm_enabled; int aspm_supported; int aspm_lock; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (struct hfi1_devdata*) ;
 int FUNC_2 (struct hfi1_devdata*) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int FUNC_4 (struct hfi1_devdata*) ;
 struct hfi1_ctxtdata* FUNC_5 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_6 (struct hfi1_ctxtdata*) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct hfi1_devdata *VAR_0)
{
 struct hfi1_ctxtdata *VAR_1;
 u16 VAR_2;

 FUNC_7(&VAR_0->aspm_lock);
 VAR_0->aspm_supported = FUNC_3(VAR_0);

 for (VAR_2 = 0; VAR_2 < VAR_0->first_dyn_alloc_ctxt; VAR_2++) {
  VAR_1 = FUNC_5(VAR_0, VAR_2);
  if (VAR_1)
   FUNC_0(VAR_1);
  FUNC_6(VAR_1);
 }


 FUNC_4(VAR_0);
 VAR_0->aspm_enabled = 0;
 FUNC_2(VAR_0);


 FUNC_1(VAR_0);
}
