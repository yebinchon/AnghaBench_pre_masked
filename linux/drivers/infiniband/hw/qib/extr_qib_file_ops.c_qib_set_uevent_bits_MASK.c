
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qib_pportdata {TYPE_1__* dd; } ;
struct qib_ctxtdata {int subctxt_cnt; int * user_event_mask; } ;
struct TYPE_2__ {unsigned int first_user_ctxt; unsigned int cfgctxts; int uctxt_lock; struct qib_ctxtdata** rcd; } ;


 int FUNC_0 (int const,int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct qib_pportdata *VAR_0, const int VAR_1)
{
 struct qib_ctxtdata *VAR_2;
 unsigned VAR_3;
 int VAR_4 = 0;
 unsigned long VAR_5;

 FUNC_1(&VAR_0->dd->uctxt_lock, VAR_5);
 for (VAR_3 = VAR_0->dd->first_user_ctxt; VAR_3 < VAR_0->dd->cfgctxts;
      VAR_3++) {
  VAR_2 = VAR_0->dd->rcd[VAR_3];
  if (!VAR_2)
   continue;
  if (VAR_2->user_event_mask) {
   int VAR_6;




   FUNC_0(VAR_1, &VAR_2->user_event_mask[0]);
   for (VAR_6 = 1; VAR_6 < VAR_2->subctxt_cnt; VAR_6++)
    FUNC_0(VAR_1, &VAR_2->user_event_mask[VAR_6]);
  }
  VAR_4 = 1;
  break;
 }
 FUNC_2(&VAR_0->dd->uctxt_lock, VAR_5);

 return VAR_4;
}
