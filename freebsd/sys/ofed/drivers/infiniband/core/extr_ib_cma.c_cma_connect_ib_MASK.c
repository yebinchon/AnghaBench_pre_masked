
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_route {int num_paths; int * path_rec; } ;
struct TYPE_3__ {struct ib_cm_id* ib; } ;
struct TYPE_4__ {int qp_type; struct rdma_route route; int device; } ;
struct rdma_id_private {TYPE_1__ cm_id; scalar_t__ srq; int seq_num; TYPE_2__ id; int qp_num; } ;
struct rdma_conn_param {scalar_t__ private_data_len; int rnr_retry_count; int retry_count; int flow_control; int initiator_depth; int responder_resources; int private_data; } ;
struct ib_cm_req_param {scalar_t__ private_data_len; int srq; int max_cm_retries; void* local_cm_response_timeout; void* remote_cm_response_timeout; void* rnr_retry_count; void* retry_count; int flow_control; int initiator_depth; int responder_resources; int starting_psn; int qp_type; int qp_num; int service_id; int * alternate_path; int * primary_path; void* private_data; } ;
struct ib_cm_id {int dummy; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ib_cm_id*) ;
 int FUNC_1 (struct ib_cm_id*) ;
 int FUNC_2 (struct rdma_id_private*) ;
 int FUNC_3 (void*,struct rdma_id_private*) ;
 int VAR_5 ;
 int FUNC_4 (struct rdma_id_private*) ;
 struct ib_cm_id* FUNC_5 (int ,int ,struct rdma_id_private*) ;
 int FUNC_6 (struct ib_cm_id*) ;
 int FUNC_7 (struct ib_cm_id*,struct ib_cm_req_param*) ;
 int FUNC_8 (void*) ;
 void* FUNC_9 (scalar_t__,int ) ;
 int FUNC_10 (char*,int ,scalar_t__) ;
 int FUNC_11 (struct ib_cm_req_param*,int ,int) ;
 void* FUNC_12 (int ,int,int ) ;
 int FUNC_13 (TYPE_2__*,int ) ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_14(struct rdma_id_private *VAR_7,
     struct rdma_conn_param *VAR_8)
{
 struct ib_cm_req_param VAR_9;
 struct rdma_route *VAR_10;
 void *VAR_11;
 struct ib_cm_id *VAR_12;
 int VAR_13, VAR_14;

 FUNC_11(&VAR_9, 0, sizeof VAR_9);
 VAR_13 = FUNC_4(VAR_7);
 VAR_9.private_data_len = VAR_13 + VAR_8->private_data_len;
 if (VAR_9.private_data_len < VAR_8->private_data_len)
  return -VAR_2;

 if (VAR_9.private_data_len) {
  VAR_11 = FUNC_9(VAR_9.private_data_len, VAR_4);
  if (!VAR_11)
   return -VAR_3;
 } else {
  VAR_11 = ((void*)0);
 }

 if (VAR_8->private_data && VAR_8->private_data_len)
  FUNC_10((char *)VAR_11 + VAR_13, VAR_8->private_data,
         VAR_8->private_data_len);

 VAR_12 = FUNC_5(VAR_7->id.device, VAR_5, VAR_7);
 if (FUNC_0(VAR_12)) {
  VAR_14 = FUNC_1(VAR_12);
  goto out;
 }
 VAR_7->cm_id.ib = VAR_12;

 VAR_10 = &VAR_7->id.route;
 if (VAR_11) {
  VAR_14 = FUNC_3(VAR_11, VAR_7);
  if (VAR_14)
   goto out;
  VAR_9.private_data = VAR_11;
 }

 VAR_9.primary_path = &VAR_10->path_rec[0];
 if (VAR_10->num_paths == 2)
  VAR_9.alternate_path = &VAR_10->path_rec[1];

 VAR_9.service_id = FUNC_13(&VAR_7->id, FUNC_2(VAR_7));
 VAR_9.qp_num = VAR_7->qp_num;
 VAR_9.qp_type = VAR_7->id.qp_type;
 VAR_9.starting_psn = VAR_7->seq_num;
 VAR_9.responder_resources = VAR_8->responder_resources;
 VAR_9.initiator_depth = VAR_8->initiator_depth;
 VAR_9.flow_control = VAR_8->flow_control;
 VAR_9.retry_count = FUNC_12(VAR_6, 7, VAR_8->retry_count);
 VAR_9.rnr_retry_count = FUNC_12(VAR_6, 7, VAR_8->rnr_retry_count);
 VAR_9.remote_cm_response_timeout = VAR_0;
 VAR_9.local_cm_response_timeout = VAR_0;
 VAR_9.max_cm_retries = VAR_1;
 VAR_9.srq = VAR_7->srq ? 1 : 0;

 VAR_14 = FUNC_7(VAR_7->cm_id.ib, &VAR_9);
out:
 if (VAR_14 && !FUNC_0(VAR_12)) {
  FUNC_6(VAR_12);
  VAR_7->cm_id.ib = ((void*)0);
 }

 FUNC_8(VAR_11);
 return VAR_14;
}
