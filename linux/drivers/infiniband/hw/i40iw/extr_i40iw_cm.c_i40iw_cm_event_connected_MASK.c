
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct iw_cm_id {int (* rem_ref ) (struct iw_cm_id*) ;int * provider_data; } ;
struct ib_qp_attr {int qp_state; } ;
struct i40iw_sc_dev {TYPE_2__* iw_priv_qp_ops; } ;
struct TYPE_8__ {int device; } ;
struct TYPE_5__ {int sq_base; } ;
struct TYPE_7__ {TYPE_1__ qp_uk; } ;
struct i40iw_qp {int * cm_id; TYPE_4__ ibqp; scalar_t__ page; TYPE_3__ sc_qp; scalar_t__ destroyed; } ;
struct i40iw_cm_core {int ht_lock; int accelerated_list; } ;
struct i40iw_device {struct i40iw_cm_core cm_core; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_cm_node {scalar_t__ send_rdma0_op; int qhash_set; int accelerated; int list; struct iw_cm_id* cm_id; } ;
struct i40iw_cm_event {struct i40iw_cm_node* cm_node; } ;
typedef int attr ;
struct TYPE_6__ {int (* qp_send_rtt ) (TYPE_3__*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct i40iw_qp*,struct i40iw_cm_node*) ;
 int FUNC_1 (struct i40iw_sc_dev*,int ,char*) ;
 int FUNC_2 (TYPE_4__*,struct ib_qp_attr*,int ,int *) ;
 int FUNC_3 (struct i40iw_cm_node*) ;
 int FUNC_4 (struct i40iw_cm_node*,struct iw_cm_id*,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (struct ib_qp_attr*,int ,int) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;
 int FUNC_11 (TYPE_3__*,int) ;
 int FUNC_12 (struct iw_cm_id*) ;
 struct i40iw_device* FUNC_13 (int ) ;

__attribute__((used)) static void FUNC_14(struct i40iw_cm_event *VAR_6)
{
 struct i40iw_qp *VAR_7;
 struct i40iw_device *VAR_8;
 struct i40iw_cm_core *VAR_9;
 struct i40iw_cm_node *VAR_10;
 struct i40iw_sc_dev *VAR_11;
 struct ib_qp_attr VAR_12;
 struct iw_cm_id *VAR_13;
 unsigned long VAR_14;
 int VAR_15;
 bool VAR_16;

 VAR_10 = VAR_6->cm_node;
 VAR_13 = VAR_10->cm_id;
 VAR_7 = (struct i40iw_qp *)VAR_13->provider_data;
 VAR_8 = FUNC_13(VAR_7->ibqp.device);
 VAR_11 = &VAR_8->sc_dev;
 VAR_9 = &VAR_8->cm_core;

 if (VAR_7->destroyed) {
  VAR_15 = -VAR_0;
  goto error;
 }
 FUNC_0(VAR_7, VAR_10);
 VAR_16 = (VAR_10->send_rdma0_op == VAR_5);
 if (VAR_7->page)
  VAR_7->sc_qp.qp_uk.sq_base = FUNC_5(VAR_7->page);
 VAR_11->iw_priv_qp_ops->qp_send_rtt(&VAR_7->sc_qp, VAR_16);
 if (VAR_7->page)
  FUNC_6(VAR_7->page);

 FUNC_8(&VAR_12, 0, sizeof(VAR_12));
 VAR_12.qp_state = VAR_2;
 VAR_10->qhash_set = 0;
 FUNC_2(&VAR_7->ibqp, &VAR_12, VAR_3, ((void*)0));

 VAR_10->accelerated = 1;
 FUNC_9(&VAR_9->ht_lock, VAR_14);
 FUNC_7(&VAR_10->list, &VAR_9->accelerated_list);
 FUNC_10(&VAR_9->ht_lock, VAR_14);
 VAR_15 = FUNC_4(VAR_10, VAR_13, VAR_4,
         0);
 if (VAR_15)
  FUNC_1(VAR_11, VAR_1, "error sending cm event - CONNECT_REPLY\n");

 return;

error:
 VAR_7->cm_id = ((void*)0);
 VAR_13->provider_data = ((void*)0);
 FUNC_4(VAR_6->cm_node,
       VAR_13,
       VAR_4,
       VAR_15);
 VAR_13->rem_ref(VAR_13);
 FUNC_3(VAR_6->cm_node);
}
