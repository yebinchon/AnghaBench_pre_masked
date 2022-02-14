
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {int (* event_handler ) (TYPE_5__*,struct rdma_cm_event*) ;scalar_t__ qp_type; } ;
struct TYPE_13__ {struct ib_cm_id* ib; } ;
struct rdma_id_private {scalar_t__ state; TYPE_5__ id; int handler_mutex; TYPE_4__ cm_id; int refcount; } ;
struct TYPE_10__ {char* private_data; scalar_t__ private_data_len; } ;
struct TYPE_11__ {TYPE_1__ ud; } ;
struct rdma_cm_event {TYPE_2__ param; int event; } ;
struct net_device {int dummy; } ;
struct ib_cm_id {int cm_handler; struct rdma_id_private* context; } ;
struct TYPE_12__ {int req_rcvd; } ;
struct ib_cm_event {scalar_t__ event; scalar_t__ private_data; TYPE_3__ param; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_0 (struct rdma_id_private*) ;
 int FUNC_1 (struct rdma_id_private*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct rdma_id_private*,struct rdma_id_private*) ;
 int FUNC_4 (TYPE_5__*,struct ib_cm_event*) ;
 scalar_t__ FUNC_5 (struct rdma_id_private*,int ) ;
 int FUNC_6 (struct rdma_id_private*) ;
 int FUNC_7 (struct rdma_id_private*,int ) ;
 int VAR_12 ;
 struct rdma_id_private* FUNC_8 (struct ib_cm_id*,struct ib_cm_event*,struct net_device**) ;
 struct rdma_id_private* FUNC_9 (TYPE_5__*,struct ib_cm_event*,struct net_device*) ;
 struct rdma_id_private* FUNC_10 (TYPE_5__*,struct ib_cm_event*,struct net_device*) ;
 int FUNC_11 (struct rdma_cm_event*,int *,scalar_t__,int) ;
 int FUNC_12 (struct rdma_id_private*) ;
 int FUNC_13 (struct net_device*) ;
 int FUNC_14 (struct ib_cm_id*,int ,int *,int ) ;
 int VAR_13 ;
 int FUNC_15 (struct rdma_cm_event*,int ,int) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (TYPE_5__*) ;
 int FUNC_20 (TYPE_5__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_21(struct ib_cm_id *VAR_14, struct ib_cm_event *VAR_15)
{
 struct rdma_id_private *VAR_16, *VAR_17 = ((void*)0);
 struct rdma_cm_event VAR_18;
 struct net_device *VAR_19;
 int VAR_20, VAR_21;

 VAR_16 = FUNC_8(VAR_14, VAR_15, &VAR_19);
 if (FUNC_0(VAR_16))
  return FUNC_1(VAR_16);

 if (!FUNC_4(&VAR_16->id, VAR_15)) {
  VAR_21 = -VAR_2;
  goto net_dev_put;
 }

 FUNC_16(&VAR_16->handler_mutex);
 if (VAR_16->state != VAR_10) {
  VAR_21 = -VAR_1;
  goto err1;
 }

 FUNC_15(&VAR_18, 0, sizeof VAR_18);
 VAR_20 = FUNC_12(VAR_16);
 VAR_18.event = VAR_9;
 if (VAR_15->event == VAR_5) {
  VAR_17 = FUNC_10(&VAR_16->id, VAR_15, VAR_19);
  VAR_18.param.ud.private_data = (char *)VAR_15->private_data + VAR_20;
  VAR_18.param.ud.private_data_len =
    VAR_4 - VAR_20;
 } else {
  VAR_17 = FUNC_9(&VAR_16->id, VAR_15, VAR_19);
  FUNC_11(&VAR_18, &VAR_15->param.req_rcvd,
           VAR_15->private_data, VAR_20);
 }
 if (!VAR_17) {
  VAR_21 = -VAR_3;
  goto err1;
 }

 FUNC_17(&VAR_17->handler_mutex, VAR_11);
 VAR_21 = FUNC_3(VAR_17, VAR_16);
 if (VAR_21)
  goto err2;

 VAR_17->cm_id.ib = VAR_14;
 VAR_14->context = VAR_17;
 VAR_14->cm_handler = VAR_12;





 FUNC_2(&VAR_17->refcount);
 VAR_21 = VAR_17->id.event_handler(&VAR_17->id, &VAR_18);
 if (VAR_21)
  goto err3;




 FUNC_16(&VAR_13);
 if (FUNC_5(VAR_17, VAR_7) &&
     (VAR_17->id.qp_type != VAR_6))
  FUNC_14(VAR_14, VAR_0, ((void*)0), 0);
 FUNC_18(&VAR_13);
 FUNC_18(&VAR_17->handler_mutex);
 FUNC_18(&VAR_16->handler_mutex);
 FUNC_6(VAR_17);
 if (VAR_19)
  FUNC_13(VAR_19);
 return 0;

err3:
 FUNC_6(VAR_17);

 VAR_17->cm_id.ib = ((void*)0);
err2:
 FUNC_7(VAR_17, VAR_8);
 FUNC_18(&VAR_17->handler_mutex);
err1:
 FUNC_18(&VAR_16->handler_mutex);
 if (VAR_17)
  FUNC_19(&VAR_17->id);

net_dev_put:
 if (VAR_19)
  FUNC_13(VAR_19);

 return VAR_21;
}
