
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct hfi1_devdata {scalar_t__ first_dyn_alloc_ctxt; } ;
struct hfi1_ctxtdata {int * do_interrupt; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct hfi1_ctxtdata* FUNC_0 (struct hfi1_devdata*,scalar_t__) ;
 struct hfi1_ctxtdata* FUNC_1 (struct hfi1_devdata*,scalar_t__) ;
 int FUNC_2 (struct hfi1_ctxtdata*) ;

__attribute__((used)) static inline void FUNC_3(struct hfi1_devdata *VAR_2, u16 VAR_3)
{
 struct hfi1_ctxtdata *VAR_4;
 u16 VAR_5;






 if (VAR_3 >= VAR_2->first_dyn_alloc_ctxt) {
  VAR_4 = FUNC_1(VAR_2, VAR_3);
  if (VAR_4) {
   VAR_4->do_interrupt =
    &VAR_1;
   FUNC_2(VAR_4);
  }
  return;
 }

 for (VAR_5 = VAR_0 + 1; VAR_5 < VAR_2->first_dyn_alloc_ctxt; VAR_5++) {
  VAR_4 = FUNC_0(VAR_2, VAR_5);
  if (VAR_4)
   VAR_4->do_interrupt =
    &VAR_1;
  FUNC_2(VAR_4);
 }
}
