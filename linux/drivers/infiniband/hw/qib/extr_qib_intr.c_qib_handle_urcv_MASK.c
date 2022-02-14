
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct qib_devdata {int first_user_ctxt; int cfgctxts; int uctxt_lock; int (* f_rcvctrl ) (int ,int ,int ) ;struct qib_ctxtdata** rcd; } ;
struct qib_ctxtdata {int wait; int urgent; int flag; int ctxt; int ppd; int cnt; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct qib_devdata *VAR_3, u64 VAR_4)
{
 struct qib_ctxtdata *VAR_5;
 unsigned long VAR_6;
 int VAR_7;

 FUNC_0(&VAR_3->uctxt_lock, VAR_6);
 for (VAR_7 = VAR_3->first_user_ctxt; VAR_3->rcd && VAR_7 < VAR_3->cfgctxts; VAR_7++) {
  if (!(VAR_4 & (1ULL << VAR_7)))
   continue;
  VAR_5 = VAR_3->rcd[VAR_7];
  if (!VAR_5 || !VAR_5->cnt)
   continue;

  if (FUNC_3(VAR_0, &VAR_5->flag)) {
   FUNC_4(&VAR_5->wait);
   VAR_3->f_rcvctrl(VAR_5->ppd, VAR_2,
          VAR_5->ctxt);
  } else if (FUNC_3(VAR_1,
           &VAR_5->flag)) {
   VAR_5->urgent++;
   FUNC_4(&VAR_5->wait);
  }
 }
 FUNC_1(&VAR_3->uctxt_lock, VAR_6);
}
