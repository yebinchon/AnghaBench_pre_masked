
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vnet {int dummy; } ;
struct TYPE_4__ {struct vnet* net; } ;
struct TYPE_5__ {TYPE_1__ dev_addr; } ;
struct TYPE_6__ {TYPE_2__ addr; } ;
struct rdma_cm_id {int ps; int qp_type; TYPE_3__ route; int event_handler; void* context; } ;
struct rdma_id_private {struct rdma_cm_id id; int seq_num; int mc_list; int listen_list; int handler_mutex; int refcount; int comp; int qp_mutex; int lock; int state; int owner; } ;
typedef int rdma_cm_event_handler ;
typedef enum rdma_port_space { ____Placeholder_rdma_port_space } rdma_port_space ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct rdma_cm_id* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *,int) ;
 int VAR_4 ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 struct rdma_id_private* FUNC_5 (int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;

struct rdma_cm_id *FUNC_9(struct vnet *VAR_5,
      rdma_cm_event_handler VAR_6,
      void *VAR_7, enum rdma_port_space VAR_8,
      enum ib_qp_type VAR_9)
{
 struct rdma_id_private *VAR_10;





 VAR_10 = FUNC_5(sizeof *VAR_10, VAR_2);
 if (!VAR_10)
  return FUNC_0(-VAR_1);

 VAR_10->owner = FUNC_8(VAR_4);
 VAR_10->state = VAR_3;
 VAR_10->id.context = VAR_7;
 VAR_10->id.event_handler = VAR_6;
 VAR_10->id.ps = VAR_8;
 VAR_10->id.qp_type = VAR_9;
 FUNC_7(&VAR_10->lock);
 FUNC_6(&VAR_10->qp_mutex);
 FUNC_4(&VAR_10->comp);
 FUNC_2(&VAR_10->refcount, 1);
 FUNC_6(&VAR_10->handler_mutex);
 FUNC_1(&VAR_10->listen_list);
 FUNC_1(&VAR_10->mc_list);
 FUNC_3(&VAR_10->seq_num, sizeof VAR_10->seq_num);
 VAR_10->id.route.addr.dev_addr.net = VAR_5;

 return &VAR_10->id;
}
