
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u32 ;
struct TYPE_6__ {int qp_num; } ;
struct TYPE_5__ {int path_mtu; int port_num; } ;
struct TYPE_4__ {void* index; } ;
struct rxe_qp {int skb_out; int ssn; int state_lock; int grp_lock; int send_pkts; int grp_list; TYPE_3__ ibqp; TYPE_2__ attr; TYPE_1__ pelem; int mtu; int sq_sig_type; } ;
struct rxe_port {void* qp_gsi_index; void* qp_smi_index; } ;
struct rxe_dev {struct rxe_port port; } ;
struct ib_qp_init_attr {int qp_type; int port_num; int sq_sig_type; } ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct rxe_dev *VAR_0, struct rxe_qp *VAR_1,
        struct ib_qp_init_attr *VAR_2)
{
 struct rxe_port *VAR_3;
 u32 VAR_4;

 VAR_1->sq_sig_type = VAR_2->sq_sig_type;
 VAR_1->attr.path_mtu = 1;
 VAR_1->mtu = FUNC_2(VAR_1->attr.path_mtu);

 VAR_4 = VAR_1->pelem.index;
 VAR_3 = &VAR_0->port;

 switch (VAR_2->qp_type) {
 case 128:
  VAR_1->ibqp.qp_num = 0;
  VAR_3->qp_smi_index = VAR_4;
  VAR_1->attr.port_num = VAR_2->port_num;
  break;

 case 129:
  VAR_1->ibqp.qp_num = 1;
  VAR_3->qp_gsi_index = VAR_4;
  VAR_1->attr.port_num = VAR_2->port_num;
  break;

 default:
  VAR_1->ibqp.qp_num = VAR_4;
  break;
 }

 FUNC_0(&VAR_1->grp_list);

 FUNC_3(&VAR_1->send_pkts);

 FUNC_4(&VAR_1->grp_lock);
 FUNC_4(&VAR_1->state_lock);

 FUNC_1(&VAR_1->ssn, 0);
 FUNC_1(&VAR_1->skb_out, 0);
}
