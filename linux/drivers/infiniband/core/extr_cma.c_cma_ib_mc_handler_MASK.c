
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rdma_dev_addr {int bound_dev_if; int net; } ;
struct TYPE_9__ {struct rdma_dev_addr dev_addr; } ;
struct TYPE_10__ {TYPE_1__ addr; } ;
struct TYPE_14__ {size_t port_num; int (* event_handler ) (TYPE_6__*,struct rdma_cm_event*) ;int device; TYPE_2__ route; scalar_t__ qp; } ;
struct rdma_id_private {scalar_t__ state; int handler_mutex; TYPE_6__ id; TYPE_3__* cma_dev; int qp_mutex; } ;
struct TYPE_12__ {int qp_num; int ah_attr; int qkey; int private_data; } ;
struct TYPE_13__ {TYPE_4__ ud; } ;
struct rdma_cm_event {int status; TYPE_5__ param; void* event; } ;
struct net_device {int dummy; } ;
struct TYPE_15__ {int qkey; int mlid; int mgid; } ;
struct ib_sa_multicast {TYPE_8__ rec; struct cma_multicast* context; } ;
struct cma_multicast {int context; struct rdma_id_private* id_priv; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_11__ {int* default_gid_type; int device; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_id_private*,int ) ;
 int FUNC_3 (struct rdma_id_private*,int ) ;
 struct net_device* FUNC_4 (int ,int ) ;
 int FUNC_5 (struct net_device*) ;
 int FUNC_6 (scalar_t__,int *,int ) ;
 int FUNC_7 (int ,size_t,TYPE_8__*,struct net_device*,int,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (char*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (TYPE_6__*) ;
 size_t FUNC_13 (int ) ;
 int FUNC_14 (TYPE_6__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_15(int VAR_5, struct ib_sa_multicast *VAR_6)
{
 struct rdma_id_private *VAR_7;
 struct cma_multicast *VAR_8 = VAR_6->context;
 struct rdma_cm_event VAR_9 = {};
 int VAR_10 = 0;

 VAR_7 = VAR_8->id_priv;
 FUNC_8(&VAR_7->handler_mutex);
 if (VAR_7->state != VAR_0 &&
     VAR_7->state != VAR_1)
  goto out;

 if (!VAR_5)
  VAR_5 = FUNC_3(VAR_7, FUNC_1(VAR_6->rec.qkey));
 else
  FUNC_10("RDMA CM: MULTICAST_ERROR: failed to join multicast. status %d\n",
         VAR_5);
 FUNC_8(&VAR_7->qp_mutex);
 if (!VAR_5 && VAR_7->id.qp) {
  VAR_5 = FUNC_6(VAR_7->id.qp, &VAR_6->rec.mgid,
      FUNC_0(VAR_6->rec.mlid));
  if (VAR_5)
   FUNC_10("RDMA CM: MULTICAST_ERROR: failed to attach QP. status %d\n",
          VAR_5);
 }
 FUNC_9(&VAR_7->qp_mutex);

 VAR_9.status = VAR_5;
 VAR_9.param.ud.private_data = VAR_8->context;
 if (!VAR_5) {
  struct rdma_dev_addr *VAR_11 =
   &VAR_7->id.route.addr.dev_addr;
  struct net_device *VAR_12 =
   FUNC_4(VAR_11->net, VAR_11->bound_dev_if);
  enum ib_gid_type VAR_13 =
   VAR_7->cma_dev->default_gid_type[VAR_7->id.port_num -
   FUNC_13(VAR_7->cma_dev->device)];

  VAR_9.event = VAR_4;
  VAR_10 = FUNC_7(VAR_7->id.device,
            VAR_7->id.port_num,
            &VAR_6->rec,
            VAR_12, VAR_13,
            &VAR_9.param.ud.ah_attr);
  if (VAR_10)
   VAR_9.event = VAR_3;

  VAR_9.param.ud.qp_num = 0xFFFFFF;
  VAR_9.param.ud.qkey = FUNC_1(VAR_6->rec.qkey);
  if (VAR_12)
   FUNC_5(VAR_12);
 } else
  VAR_9.event = VAR_3;

 VAR_10 = VAR_7->id.event_handler(&VAR_7->id, &VAR_9);

 FUNC_11(&VAR_9.param.ud.ah_attr);
 if (VAR_10) {
  FUNC_2(VAR_7, VAR_2);
  FUNC_9(&VAR_7->handler_mutex);
  FUNC_12(&VAR_7->id);
  return 0;
 }

out:
 FUNC_9(&VAR_7->handler_mutex);
 return 0;
}
