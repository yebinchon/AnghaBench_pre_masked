
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp {int device; } ;
struct rvt_qp {scalar_t__ s_mig_state; int remote_ah_attr; int s_flags; struct hfi1_qp_priv* priv; struct ib_qp ibqp; } ;
struct ib_udata {int dummy; } ;
struct ib_qp_attr {scalar_t__ path_mig_state; } ;
struct hfi1_qp_priv {void* s_sc; void* s_sendcontext; void* s_sde; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rvt_qp*,struct ib_qp_attr*,int) ;
 int FUNC_2 (struct rvt_qp*) ;
 void* FUNC_3 (struct rvt_qp*,void*) ;
 void* FUNC_4 (struct rvt_qp*,void*) ;

void FUNC_5(struct rvt_qp *VAR_5, struct ib_qp_attr *VAR_6,
      int VAR_7, struct ib_udata *VAR_8)
{
 struct ib_qp *VAR_9 = &VAR_5->ibqp;
 struct hfi1_qp_priv *VAR_10 = VAR_5->priv;

 if (VAR_7 & VAR_3) {
  VAR_10->s_sc = FUNC_0(VAR_9->device, &VAR_5->remote_ah_attr);
  VAR_10->s_sde = FUNC_3(VAR_5, VAR_10->s_sc);
  VAR_10->s_sendcontext = FUNC_4(VAR_5, VAR_10->s_sc);
  FUNC_2(VAR_5);
 }

 if (VAR_7 & VAR_4 &&
     VAR_6->path_mig_state == VAR_2 &&
     VAR_5->s_mig_state == VAR_1) {
  VAR_5->s_flags |= VAR_0;
  VAR_10->s_sc = FUNC_0(VAR_9->device, &VAR_5->remote_ah_attr);
  VAR_10->s_sde = FUNC_3(VAR_5, VAR_10->s_sc);
  VAR_10->s_sendcontext = FUNC_4(VAR_5, VAR_10->s_sc);
  FUNC_2(VAR_5);
 }

 FUNC_1(VAR_5, VAR_6, VAR_7);
}
