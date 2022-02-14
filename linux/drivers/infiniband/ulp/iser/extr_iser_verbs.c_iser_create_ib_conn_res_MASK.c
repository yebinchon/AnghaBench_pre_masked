
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct iser_device {int comps_used; int pd; struct ib_device* ib_device; TYPE_3__* comps; } ;
struct iser_conn {void* max_cmds; } ;
struct TYPE_6__ {int max_send_sge; int max_recv_sge; scalar_t__ max_send_wr; int max_recv_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; int create_flags; int qp_type; int sq_sig_type; int recv_cq; int send_cq; void* qp_context; int event_handler; } ;
struct TYPE_7__ {scalar_t__ max_qp_wr; } ;
struct ib_device {TYPE_2__ attrs; int dev; } ;
struct ib_conn {TYPE_3__* comp; TYPE_4__* cma_id; int qp; scalar_t__ pi_support; struct iser_device* device; } ;
struct TYPE_10__ {int connlist_mutex; } ;
struct TYPE_9__ {int qp; } ;
struct TYPE_8__ {scalar_t__ active_qps; int cq; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_1 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int *) ;
 TYPE_5__ VAR_7 ;
 int FUNC_3 (char*,int ,scalar_t__) ;
 int FUNC_4 (char*,int) ;
 int FUNC_5 (char*,...) ;
 int VAR_8 ;
 int FUNC_6 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_4__*,int ,struct ib_qp_init_attr*) ;
 struct iser_conn* FUNC_10 (struct ib_conn*) ;

__attribute__((used)) static int FUNC_11(struct ib_conn *VAR_9)
{
 struct iser_conn *VAR_10 = FUNC_10(VAR_9);
 struct iser_device *VAR_11;
 struct ib_device *VAR_12;
 struct ib_qp_init_attr VAR_13;
 int VAR_14 = -VAR_0;
 int VAR_15, VAR_16 = 0;

 FUNC_0(VAR_9->device == ((void*)0));

 VAR_11 = VAR_9->device;
 VAR_12 = VAR_11->ib_device;

 FUNC_6(&VAR_13, 0, sizeof VAR_13);

 FUNC_7(&VAR_7.connlist_mutex);

 for (VAR_15 = 0; VAR_15 < VAR_11->comps_used; VAR_15++) {
  if (VAR_11->comps[VAR_15].active_qps <
      VAR_11->comps[VAR_16].active_qps)
   VAR_16 = VAR_15;
 }
 VAR_9->comp = &VAR_11->comps[VAR_16];
 VAR_9->comp->active_qps++;
 FUNC_8(&VAR_7.connlist_mutex);
 FUNC_5("cq index %d used for ib_conn %p\n", VAR_16, VAR_9);

 VAR_13.event_handler = VAR_8;
 VAR_13.qp_context = (void *)VAR_9;
 VAR_13.send_cq = VAR_9->comp->cq;
 VAR_13.recv_cq = VAR_9->comp->cq;
 VAR_13.cap.max_recv_wr = VAR_4;
 VAR_13.cap.max_send_sge = 2;
 VAR_13.cap.max_recv_sge = 1;
 VAR_13.sq_sig_type = VAR_3;
 VAR_13.qp_type = VAR_1;
 if (VAR_9->pi_support) {
  VAR_13.cap.max_send_wr = VAR_6 + 1;
  VAR_13.create_flags |= VAR_2;
  VAR_10->max_cmds =
   FUNC_1(VAR_6);
 } else {
  if (VAR_12->attrs.max_qp_wr > VAR_5) {
   VAR_13.cap.max_send_wr = VAR_5 + 1;
   VAR_10->max_cmds =
    FUNC_1(VAR_5);
  } else {
   VAR_13.cap.max_send_wr = VAR_12->attrs.max_qp_wr;
   VAR_10->max_cmds =
    FUNC_1(VAR_12->attrs.max_qp_wr);
   FUNC_3("device %s supports max_send_wr %d\n",
     FUNC_2(&VAR_11->ib_device->dev),
     VAR_12->attrs.max_qp_wr);
  }
 }

 VAR_14 = FUNC_9(VAR_9->cma_id, VAR_11->pd, &VAR_13);
 if (VAR_14)
  goto out_err;

 VAR_9->qp = VAR_9->cma_id->qp;
 FUNC_5("setting conn %p cma_id %p qp %p\n",
    VAR_9, VAR_9->cma_id,
    VAR_9->cma_id->qp);
 return VAR_14;

out_err:
 FUNC_7(&VAR_7.connlist_mutex);
 VAR_9->comp->active_qps--;
 FUNC_8(&VAR_7.connlist_mutex);
 FUNC_4("unable to alloc mem or create resource, err %d\n", VAR_14);

 return VAR_14;
}
