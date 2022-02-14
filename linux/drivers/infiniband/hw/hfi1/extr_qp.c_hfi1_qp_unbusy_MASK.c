
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; struct hfi1_qp_priv* priv; } ;
struct iowait_work {int dummy; } ;
struct hfi1_qp_priv {int s_flags; int s_iowait; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (struct iowait_work*) ;

void FUNC_2(struct rvt_qp *VAR_4, struct iowait_work *VAR_5)
{
 struct hfi1_qp_priv *VAR_6 = VAR_4->priv;

 if (FUNC_1(VAR_5) == VAR_1) {
  VAR_4->s_flags &= ~VAR_3;
  if (VAR_6->s_flags & VAR_0) {
   VAR_6->s_flags &= ~(VAR_0 |
        VAR_3);
   FUNC_0(&VAR_6->s_iowait, VAR_2);
  }
 } else {
  VAR_6->s_flags &= ~VAR_3;
 }
}
