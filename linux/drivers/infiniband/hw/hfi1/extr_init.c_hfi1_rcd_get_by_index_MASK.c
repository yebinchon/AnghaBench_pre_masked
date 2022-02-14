
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hfi1_devdata {int uctxt_lock; struct hfi1_ctxtdata** rcd; } ;
struct hfi1_ctxtdata {int dummy; } ;


 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

struct hfi1_ctxtdata *FUNC_3(struct hfi1_devdata *VAR_0, u16 VAR_1)
{
 unsigned long VAR_2;
 struct hfi1_ctxtdata *VAR_3 = ((void*)0);

 FUNC_1(&VAR_0->uctxt_lock, VAR_2);
 if (VAR_0->rcd[VAR_1]) {
  VAR_3 = VAR_0->rcd[VAR_1];
  if (!FUNC_0(VAR_3))
   VAR_3 = ((void*)0);
 }
 FUNC_2(&VAR_0->uctxt_lock, VAR_2);

 return VAR_3;
}
