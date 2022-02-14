
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u16 ;
struct hfi1_devdata {size_t num_rcv_contexts; int uctxt_lock; struct hfi1_ctxtdata** rcd; } ;
struct hfi1_ctxtdata {size_t ctxt; } ;


 int VAR_0 ;
 int FUNC_0 (struct hfi1_ctxtdata*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct hfi1_devdata *VAR_1,
         struct hfi1_ctxtdata *VAR_2, u16 *VAR_3)
{
 unsigned long VAR_4;
 u16 VAR_5;

 FUNC_1(&VAR_1->uctxt_lock, VAR_4);
 for (VAR_5 = 0; VAR_5 < VAR_1->num_rcv_contexts; VAR_5++)
  if (!VAR_1->rcd[VAR_5])
   break;

 if (VAR_5 < VAR_1->num_rcv_contexts) {
  VAR_2->ctxt = VAR_5;
  VAR_1->rcd[VAR_5] = VAR_2;
  FUNC_0(VAR_2);
 }
 FUNC_2(&VAR_1->uctxt_lock, VAR_4);

 if (VAR_5 >= VAR_1->num_rcv_contexts)
  return -VAR_0;

 *VAR_3 = VAR_5;

 return 0;
}
