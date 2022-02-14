
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int net; } ;
struct TYPE_6__ {TYPE_1__ dev_addr; } ;
struct TYPE_7__ {TYPE_2__ addr; } ;
struct rdma_cm_id {int ps; int qp_type; TYPE_3__ route; int event_handler; void* context; } ;
struct TYPE_8__ {int type; } ;
struct rdma_id_private {int tos_set; int timeout_set; int seq_num; struct rdma_cm_id id; int mc_list; int listen_list; int handler_mutex; int refcount; int comp; int qp_mutex; int lock; int gid_type; int state; TYPE_4__ res; } ;
struct net {int dummy; } ;
typedef int rdma_cm_event_handler ;
typedef enum rdma_ucm_port_space { ____Placeholder_rdma_ucm_port_space } rdma_ucm_port_space ;
typedef enum ib_qp_type { ____Placeholder_ib_qp_type } ib_qp_type ;


 int VAR_0 ;
 struct rdma_cm_id* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct net*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int *) ;
 struct rdma_id_private* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*,char const*) ;
 int FUNC_9 (int *) ;

struct rdma_cm_id *FUNC_10(struct net *VAR_5,
        rdma_cm_event_handler VAR_6,
        void *VAR_7, enum rdma_ucm_port_space VAR_8,
        enum ib_qp_type VAR_9, const char *VAR_10)
{
 struct rdma_id_private *VAR_11;

 VAR_11 = FUNC_6(sizeof *VAR_11, VAR_1);
 if (!VAR_11)
  return FUNC_0(-VAR_0);

 FUNC_8(&VAR_11->res, VAR_10);
 VAR_11->res.type = VAR_4;
 VAR_11->state = VAR_3;
 VAR_11->id.context = VAR_7;
 VAR_11->id.event_handler = VAR_6;
 VAR_11->id.ps = VAR_8;
 VAR_11->id.qp_type = VAR_9;
 VAR_11->tos_set = 0;
 VAR_11->timeout_set = 0;
 VAR_11->gid_type = VAR_2;
 FUNC_9(&VAR_11->lock);
 FUNC_7(&VAR_11->qp_mutex);
 FUNC_5(&VAR_11->comp);
 FUNC_2(&VAR_11->refcount, 1);
 FUNC_7(&VAR_11->handler_mutex);
 FUNC_1(&VAR_11->listen_list);
 FUNC_1(&VAR_11->mc_list);
 FUNC_4(&VAR_11->seq_num, sizeof VAR_11->seq_num);
 VAR_11->id.route.addr.dev_addr.net = FUNC_3(VAR_5);
 VAR_11->seq_num &= 0x00ffffff;

 return &VAR_11->id;
}
