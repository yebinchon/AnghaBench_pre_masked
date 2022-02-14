
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rvt_qp {int s_flags; scalar_t__ priv; int s_lock; } ;
struct hfi1_qp_priv {int s_iowait; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct rvt_qp*) ;
 scalar_t__ FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

bool FUNC_4(struct rvt_qp *VAR_2)
{
 FUNC_3(&VAR_2->s_lock);
 if (FUNC_1(VAR_2)) {
  FUNC_0(VAR_2);
  return 1;
 }
 if (VAR_2->s_flags & VAR_0)
  FUNC_2(&((struct hfi1_qp_priv *)VAR_2->priv)->s_iowait,
    VAR_1);
 return 0;
}
