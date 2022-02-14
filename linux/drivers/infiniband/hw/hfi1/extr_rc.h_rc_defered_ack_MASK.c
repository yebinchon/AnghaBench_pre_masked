
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int rspwait; int r_flags; } ;
struct hfi1_ctxtdata {int qp_wait_list; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct rvt_qp*) ;

__attribute__((used)) static inline void FUNC_3(struct hfi1_ctxtdata *VAR_1,
      struct rvt_qp *VAR_2)
{
 if (FUNC_1(&VAR_2->rspwait)) {
  VAR_2->r_flags |= VAR_0;
  FUNC_2(VAR_2);
  FUNC_0(&VAR_2->rspwait, &VAR_1->qp_wait_list);
 }
}
