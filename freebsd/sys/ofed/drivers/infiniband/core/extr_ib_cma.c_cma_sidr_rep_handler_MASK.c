
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int path_rec; } ;
struct TYPE_13__ {int (* event_handler ) (TYPE_6__*,struct rdma_cm_event*) ;TYPE_2__ route; int port_num; int device; } ;
struct TYPE_12__ {int * ib; } ;
struct rdma_id_private {scalar_t__ state; int handler_mutex; TYPE_6__ id; TYPE_5__ cm_id; } ;
struct TYPE_10__ {int qkey; int qp_num; int ah_attr; int private_data_len; int private_data; } ;
struct TYPE_11__ {TYPE_3__ ud; } ;
struct rdma_cm_event {int status; void* event; TYPE_4__ param; } ;
struct ib_cm_sidr_rep_event_param {int status; int qkey; int qpn; } ;
struct ib_cm_id {struct rdma_id_private* context; } ;
struct TYPE_8__ {struct ib_cm_sidr_rep_event_param sidr_rep_rcvd; } ;
struct ib_cm_event {int event; TYPE_1__ param; int private_data; } ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int FUNC_0 (struct rdma_id_private*,int ) ;
 int FUNC_1 (struct rdma_id_private*,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct rdma_cm_event*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,struct rdma_cm_event*) ;

__attribute__((used)) static int FUNC_9(struct ib_cm_id *VAR_8,
    struct ib_cm_event *VAR_9)
{
 struct rdma_id_private *VAR_10 = VAR_8->context;
 struct rdma_cm_event VAR_11;
 struct ib_cm_sidr_rep_event_param *VAR_12 = &VAR_9->param.sidr_rep_rcvd;
 int VAR_13 = 0;

 FUNC_4(&VAR_10->handler_mutex);
 if (VAR_10->state != VAR_3)
  goto out;

 FUNC_3(&VAR_11, 0, sizeof VAR_11);
 switch (VAR_9->event) {
 case 128:
  VAR_11.event = VAR_7;
  VAR_11.status = -VAR_0;
  break;
 case 129:
  VAR_11.param.ud.private_data = VAR_9->private_data;
  VAR_11.param.ud.private_data_len = VAR_1;
  if (VAR_12->status != VAR_2) {
   VAR_11.event = VAR_7;
   VAR_11.status = VAR_9->param.sidr_rep_rcvd.status;
   break;
  }
  VAR_13 = FUNC_1(VAR_10, VAR_12->qkey);
  if (VAR_13) {
   VAR_11.event = VAR_5;
   VAR_11.status = VAR_13;
   break;
  }
  VAR_13 = FUNC_2(VAR_10->id.device,
        VAR_10->id.port_num,
        VAR_10->id.route.path_rec,
        &VAR_11.param.ud.ah_attr);
  if (VAR_13) {
   VAR_11.event = VAR_5;
   VAR_11.status = VAR_13;
   break;
  }
  VAR_11.param.ud.qp_num = VAR_12->qpn;
  VAR_11.param.ud.qkey = VAR_12->qkey;
  VAR_11.event = VAR_6;
  VAR_11.status = 0;
  break;
 default:
  FUNC_6("RDMA CMA: unexpected IB CM event: %d\n",
         VAR_9->event);
  goto out;
 }

 VAR_13 = VAR_10->id.event_handler(&VAR_10->id, &VAR_11);
 if (VAR_13) {

  VAR_10->cm_id.ib = ((void*)0);
  FUNC_0(VAR_10, VAR_4);
  FUNC_5(&VAR_10->handler_mutex);
  FUNC_7(&VAR_10->id);
  return VAR_13;
 }
out:
 FUNC_5(&VAR_10->handler_mutex);
 return VAR_13;
}
