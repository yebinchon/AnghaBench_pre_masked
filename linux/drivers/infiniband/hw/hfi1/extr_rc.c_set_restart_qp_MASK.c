
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int r_flags; int rspwait; scalar_t__ s_last_psn; } ;
struct hfi1_ctxtdata {int qp_wait_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvt_qp*,scalar_t__,int ) ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (struct rvt_qp*) ;

__attribute__((used)) static void FUNC_4(struct rvt_qp *VAR_2, struct hfi1_ctxtdata *VAR_3)
{

 if (!(VAR_2->r_flags & VAR_0)) {
  VAR_2->r_flags |= VAR_0;
  FUNC_0(VAR_2, VAR_2->s_last_psn + 1, 0);
  if (FUNC_2(&VAR_2->rspwait)) {
   VAR_2->r_flags |= VAR_1;
   FUNC_3(VAR_2);
   FUNC_1(&VAR_2->rspwait, &VAR_3->qp_wait_list);
  }
 }
}
