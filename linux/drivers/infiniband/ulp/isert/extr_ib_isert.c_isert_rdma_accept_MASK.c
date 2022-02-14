
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_conn_param {int retry_count; int rnr_retry_count; int flags; int private_data_len; void* private_data; int initiator_depth; } ;
struct rdma_cm_id {int dummy; } ;
struct isert_conn {int snd_w_inv; int initiator_depth; struct rdma_cm_id* cm_id; } ;
struct iser_cm_hdr {int retry_count; int rnr_retry_count; int flags; int private_data_len; void* private_data; int initiator_depth; } ;
typedef int rsp_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct rdma_conn_param*,int ,int) ;
 int FUNC_2 (struct rdma_cm_id*,struct rdma_conn_param*) ;

__attribute__((used)) static int
FUNC_3(struct isert_conn *VAR_2)
{
 struct rdma_cm_id *VAR_3 = VAR_2->cm_id;
 struct rdma_conn_param VAR_4;
 int VAR_5;
 struct iser_cm_hdr VAR_6;

 FUNC_1(&VAR_4, 0, sizeof(struct rdma_conn_param));
 VAR_4.initiator_depth = VAR_2->initiator_depth;
 VAR_4.retry_count = 7;
 VAR_4.rnr_retry_count = 7;

 FUNC_1(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.flags = VAR_1;
 if (!VAR_2->snd_w_inv)
  VAR_6.flags = VAR_6.flags | VAR_0;
 VAR_4.private_data = (void *)&VAR_6;
 VAR_4.private_data_len = sizeof(VAR_6);

 VAR_5 = FUNC_2(VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_0("rdma_accept() failed with: %d\n", VAR_5);
  return VAR_5;
 }

 return 0;
}
