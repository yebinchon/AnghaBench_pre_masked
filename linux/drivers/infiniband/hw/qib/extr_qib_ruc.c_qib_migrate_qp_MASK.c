
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int qp_context; int (* event_handler ) (struct ib_event*,int ) ;int device; } ;
struct rvt_qp {TYPE_2__ ibqp; int s_alt_pkey_index; int s_pkey_index; int alt_ah_attr; int port_num; int remote_ah_attr; int s_mig_state; } ;
struct TYPE_3__ {TYPE_2__* qp; } ;
struct ib_event {int event; TYPE_1__ element; int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct ib_event*,int ) ;

void FUNC_2(struct rvt_qp *VAR_2)
{
 struct ib_event VAR_3;

 VAR_2->s_mig_state = VAR_1;
 VAR_2->remote_ah_attr = VAR_2->alt_ah_attr;
 VAR_2->port_num = FUNC_0(&VAR_2->alt_ah_attr);
 VAR_2->s_pkey_index = VAR_2->s_alt_pkey_index;

 VAR_3.device = VAR_2->ibqp.device;
 VAR_3.element.qp = &VAR_2->ibqp;
 VAR_3.event = VAR_0;
 VAR_2->ibqp.event_handler(&VAR_3, VAR_2->ibqp.qp_context);
}
