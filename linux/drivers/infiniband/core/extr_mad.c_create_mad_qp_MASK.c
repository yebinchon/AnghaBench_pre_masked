
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int max_recv_sge; int max_send_sge; void* max_recv_wr; void* max_send_wr; } ;
struct ib_qp_init_attr {int qp_type; int event_handler; struct ib_mad_qp_info* qp_context; int port_num; TYPE_1__ cap; int sq_sig_type; int recv_cq; int send_cq; } ;
struct TYPE_10__ {void* max_active; } ;
struct TYPE_9__ {void* max_active; } ;
struct ib_mad_qp_info {TYPE_5__ recv_queue; TYPE_4__ send_queue; int qp; TYPE_3__* port_priv; } ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;
struct TYPE_8__ {TYPE_2__* device; int pd; int port_num; int cq; } ;
struct TYPE_7__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,struct ib_qp_init_attr*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_5 (struct ib_qp_init_attr*,int ,int) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct ib_mad_qp_info *VAR_6,
    enum ib_qp_type VAR_7)
{
 struct ib_qp_init_attr VAR_8;
 int VAR_9;

 FUNC_5(&VAR_8, 0, sizeof VAR_8);
 VAR_8.send_cq = VAR_6->port_priv->cq;
 VAR_8.recv_cq = VAR_6->port_priv->cq;
 VAR_8.sq_sig_type = VAR_2;
 VAR_8.cap.max_send_wr = VAR_4;
 VAR_8.cap.max_recv_wr = VAR_3;
 VAR_8.cap.max_send_sge = VAR_1;
 VAR_8.cap.max_recv_sge = VAR_0;
 VAR_8.qp_type = VAR_7;
 VAR_8.port_num = VAR_6->port_priv->port_num;
 VAR_8.qp_context = VAR_6;
 VAR_8.event_handler = VAR_5;
 VAR_6->qp = FUNC_4(VAR_6->port_priv->pd, &VAR_8);
 if (FUNC_0(VAR_6->qp)) {
  FUNC_2(&VAR_6->port_priv->device->dev,
   "Couldn't create ib_mad QP%d\n",
   FUNC_3(VAR_7));
  VAR_9 = FUNC_1(VAR_6->qp);
  goto error;
 }

 VAR_6->send_queue.max_active = VAR_4;
 VAR_6->recv_queue.max_active = VAR_3;
 return 0;

error:
 return VAR_9;
}
