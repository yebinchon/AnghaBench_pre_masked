
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rvt_qp {int s_flags; int * s_rdma_mr; scalar_t__ s_hdrwords; struct hfi1_qp_priv* priv; } ;
struct TYPE_2__ {int * lock; int list; } ;
struct hfi1_qp_priv {int s_flags; TYPE_1__ s_iowait; } ;
typedef int seqlock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct rvt_qp*) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rvt_qp*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct rvt_qp *VAR_4)
{
 struct hfi1_qp_priv *VAR_5 = VAR_4->priv;
 seqlock_t *VAR_6 = VAR_5->s_iowait.lock;

 if (VAR_6) {
  FUNC_6(VAR_6);
  if (!FUNC_3(&VAR_5->s_iowait.list) &&
      !(VAR_4->s_flags & VAR_3) &&
      !(VAR_5->s_flags & VAR_3)) {
   VAR_4->s_flags &= ~VAR_0;
   FUNC_1(&VAR_5->s_iowait, VAR_1);
   FUNC_1(&VAR_5->s_iowait, VAR_2);
   FUNC_2(&VAR_5->s_iowait.list);
   VAR_5->s_iowait.lock = ((void*)0);
   FUNC_5(VAR_4);
  }
  FUNC_7(VAR_6);
 }

 if (!(VAR_4->s_flags & VAR_3) && !(VAR_5->s_flags & VAR_3)) {
  VAR_4->s_hdrwords = 0;
  if (VAR_4->s_rdma_mr) {
   FUNC_4(VAR_4->s_rdma_mr);
   VAR_4->s_rdma_mr = ((void*)0);
  }
  FUNC_0(VAR_4);
 }
}
