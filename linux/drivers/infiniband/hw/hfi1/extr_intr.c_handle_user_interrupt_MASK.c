
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hfi1_devdata {int uctxt_lock; } ;
struct hfi1_ctxtdata {int wait; int urgent; int event_flags; int in_use_ctxts; struct hfi1_devdata* dd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct hfi1_devdata*,int ,struct hfi1_ctxtdata*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 scalar_t__ FUNC_4 (int ,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct hfi1_ctxtdata *VAR_4)
{
 struct hfi1_devdata *VAR_5 = VAR_4->dd;
 unsigned long VAR_6;

 FUNC_2(&VAR_5->uctxt_lock, VAR_6);
 if (FUNC_0(VAR_4->in_use_ctxts, VAR_2))
  goto done;

 if (FUNC_4(VAR_0, &VAR_4->event_flags)) {
  FUNC_5(&VAR_4->wait);
  FUNC_1(VAR_5, VAR_3, VAR_4);
 } else if (FUNC_4(VAR_1,
       &VAR_4->event_flags)) {
  VAR_4->urgent++;
  FUNC_5(&VAR_4->wait);
 }
done:
 FUNC_3(&VAR_5->uctxt_lock, VAR_6);
}
