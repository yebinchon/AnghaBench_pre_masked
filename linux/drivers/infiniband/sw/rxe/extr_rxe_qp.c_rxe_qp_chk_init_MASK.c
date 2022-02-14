
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_port {scalar_t__ qp_gsi_index; scalar_t__ qp_smi_index; } ;
struct rxe_dev {struct rxe_port port; int ib_dev; } ;
struct ib_qp_cap {int dummy; } ;
struct ib_qp_init_attr {int port_num; scalar_t__ qp_type; int srq; int send_cq; int recv_cq; struct ib_qp_cap cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (struct rxe_dev*,struct ib_qp_cap*,int) ;

int FUNC_3(struct rxe_dev *VAR_3, struct ib_qp_init_attr *VAR_4)
{
 struct ib_qp_cap *VAR_5 = &VAR_4->cap;
 struct rxe_port *VAR_6;
 int VAR_7 = VAR_4->port_num;

 if (!VAR_4->recv_cq || !VAR_4->send_cq) {
  FUNC_0("missing cq\n");
  goto err1;
 }

 if (FUNC_2(VAR_3, VAR_5, !!VAR_4->srq))
  goto err1;

 if (VAR_4->qp_type == VAR_2 || VAR_4->qp_type == VAR_1) {
  if (!FUNC_1(&VAR_3->ib_dev, VAR_7)) {
   FUNC_0("invalid port = %d\n", VAR_7);
   goto err1;
  }

  VAR_6 = &VAR_3->port;

  if (VAR_4->qp_type == VAR_2 && VAR_6->qp_smi_index) {
   FUNC_0("SMI QP exists for port %d\n", VAR_7);
   goto err1;
  }

  if (VAR_4->qp_type == VAR_1 && VAR_6->qp_gsi_index) {
   FUNC_0("GSI QP exists for port %d\n", VAR_7);
   goto err1;
  }
 }

 return 0;

err1:
 return -VAR_0;
}
