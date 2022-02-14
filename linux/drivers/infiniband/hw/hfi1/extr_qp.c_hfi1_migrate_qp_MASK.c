
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {TYPE_2__ ibqp; int remote_ah_attr; int s_flags; int s_alt_pkey_index; int s_pkey_index; int alt_ah_attr; int port_num; int s_mig_state; struct hfi1_qp_priv* priv; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;
struct hfi1_qp_priv {int s_sc; int s_sde; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (struct rvt_qp*) ;
 int FUNC_2 (struct rvt_qp*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ib_event*,int ) ;

void FUNC_5(struct rvt_qp *VAR_3)
{
 struct hfi1_qp_priv *VAR_4 = VAR_3->priv;
 struct ib_event VAR_5;

 VAR_3->s_mig_state = VAR_2;
 VAR_3->remote_ah_attr = VAR_3->alt_ah_attr;
 VAR_3->port_num = FUNC_3(&VAR_3->alt_ah_attr);
 VAR_3->s_pkey_index = VAR_3->s_alt_pkey_index;
 VAR_3->s_flags |= VAR_0;
 VAR_4->s_sc = FUNC_0(VAR_3->ibqp.device, &VAR_3->remote_ah_attr);
 VAR_4->s_sde = FUNC_2(VAR_3, VAR_4->s_sc);
 FUNC_1(VAR_3);

 VAR_5.device = VAR_3->ibqp.device;
 VAR_5.element.qp = &VAR_3->ibqp;
 VAR_5.event = VAR_1;
 VAR_3->ibqp.event_handler(&VAR_5, VAR_3->ibqp.qp_context);
}
