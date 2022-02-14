
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ qp_type; int device; } ;
struct rvt_qp {int s_lock; int s_hdrwords; int s_cur_size; int s_cur_sge; int s_flags; TYPE_1__ ibqp; int remote_ah_attr; int port_num; struct qib_qp_priv* priv; } ;
struct qib_qp_priv {int s_hdr; } ;
struct qib_pportdata {int lmc; int lid; } ;
struct qib_ibport {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct qib_pportdata* FUNC_0 (struct qib_ibport*) ;
 int FUNC_1 (struct rvt_qp*,unsigned long*) ;
 int FUNC_2 (struct rvt_qp*,unsigned long*) ;
 int FUNC_3 (struct rvt_qp*,unsigned long*) ;
 int FUNC_4 (struct rvt_qp*) ;
 scalar_t__ FUNC_5 (struct rvt_qp*,int ,int ,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct rvt_qp*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 struct qib_ibport* FUNC_10 (int ,int ) ;

void FUNC_11(struct rvt_qp *VAR_3)
{
 struct qib_qp_priv *VAR_4 = VAR_3->priv;
 struct qib_ibport *VAR_5 = FUNC_10(VAR_3->ibqp.device, VAR_3->port_num);
 struct qib_pportdata *VAR_6 = FUNC_0(VAR_5);
 int (*VAR_7)(struct rvt_qp *VAR_8, unsigned long *VAR_9);
 unsigned long VAR_10;

 if ((VAR_3->ibqp.qp_type == VAR_0 ||
      VAR_3->ibqp.qp_type == VAR_1) &&
     (FUNC_6(&VAR_3->remote_ah_attr) &
      ~((1 << VAR_6->lmc) - 1)) == VAR_6->lid) {
  FUNC_7(VAR_3);
  return;
 }

 if (VAR_3->ibqp.qp_type == VAR_0)
  VAR_7 = FUNC_1;
 else if (VAR_3->ibqp.qp_type == VAR_1)
  VAR_7 = FUNC_2;
 else
  VAR_7 = FUNC_3;

 FUNC_8(&VAR_3->s_lock, VAR_10);


 if (!FUNC_4(VAR_3)) {
  FUNC_9(&VAR_3->s_lock, VAR_10);
  return;
 }

 VAR_3->s_flags |= VAR_2;

 do {

  if (VAR_3->s_hdrwords != 0) {
   FUNC_9(&VAR_3->s_lock, VAR_10);




   if (FUNC_5(VAR_3, VAR_4->s_hdr, VAR_3->s_hdrwords,
        VAR_3->s_cur_sge, VAR_3->s_cur_size))
    return;

   VAR_3->s_hdrwords = 0;
   FUNC_8(&VAR_3->s_lock, VAR_10);
  }
 } while (VAR_7(VAR_3, &VAR_10));

 FUNC_9(&VAR_3->s_lock, VAR_10);
}
