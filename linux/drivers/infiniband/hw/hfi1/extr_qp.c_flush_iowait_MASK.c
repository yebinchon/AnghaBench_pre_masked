
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int * lock; int list; } ;
struct hfi1_qp_priv {TYPE_1__ s_iowait; } ;
typedef int seqlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct rvt_qp*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct rvt_qp *VAR_0)
{
 struct hfi1_qp_priv *VAR_1 = VAR_0->priv;
 unsigned long VAR_2;
 seqlock_t *VAR_3 = VAR_1->s_iowait.lock;

 if (!VAR_3)
  return;
 FUNC_3(VAR_3, VAR_2);
 if (!FUNC_1(&VAR_1->s_iowait.list)) {
  FUNC_0(&VAR_1->s_iowait.list);
  VAR_1->s_iowait.lock = ((void*)0);
  FUNC_2(VAR_0);
 }
 FUNC_4(VAR_3, VAR_2);
}
