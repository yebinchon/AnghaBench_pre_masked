
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_conn_param {int initiator_depth; int retry_count; int rnr_retry_count; int private_data_len; void* private_data; int flags; int responder_resources; } ;
struct rdma_cm_id {scalar_t__ context; } ;
struct iser_device {int remote_inv_sup; TYPE_2__* ib_device; } ;
struct ib_conn {struct iser_device* device; } ;
struct iser_conn {scalar_t__ state; struct ib_conn ib_conn; } ;
struct iser_cm_hdr {int initiator_depth; int retry_count; int rnr_retry_count; int private_data_len; void* private_data; int flags; int responder_resources; } ;
typedef int req_hdr ;
struct TYPE_3__ {int max_qp_rd_atom; } ;
struct TYPE_4__ {TYPE_1__ attrs; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct rdma_cm_id*) ;
 int FUNC_1 (struct ib_conn*) ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (struct rdma_conn_param*,int ,int) ;
 int FUNC_4 (struct rdma_cm_id*,struct rdma_conn_param*) ;

__attribute__((used)) static void FUNC_5(struct rdma_cm_id *VAR_3)
{
 struct rdma_conn_param VAR_4;
 int VAR_5;
 struct iser_cm_hdr VAR_6;
 struct iser_conn *VAR_7 = (struct iser_conn *)VAR_3->context;
 struct ib_conn *VAR_8 = &VAR_7->ib_conn;
 struct iser_device *VAR_9 = VAR_8->device;

 if (VAR_7->state != VAR_0)

  return;

 VAR_5 = FUNC_1(VAR_8);
 if (VAR_5)
  goto failure;

 FUNC_3(&VAR_4, 0, sizeof VAR_4);
 VAR_4.responder_resources = VAR_9->ib_device->attrs.max_qp_rd_atom;
 VAR_4.initiator_depth = 1;
 VAR_4.retry_count = 7;
 VAR_4.rnr_retry_count = 6;

 FUNC_3(&VAR_6, 0, sizeof(VAR_6));
 VAR_6.flags = VAR_2;
 if (!VAR_9->remote_inv_sup)
  VAR_6.flags |= VAR_1;
 VAR_4.private_data = (void *)&VAR_6;
 VAR_4.private_data_len = sizeof(struct iser_cm_hdr);

 VAR_5 = FUNC_4(VAR_3, &VAR_4);
 if (VAR_5) {
  FUNC_2("failure connecting: %d\n", VAR_5);
  goto failure;
 }

 return;
failure:
 FUNC_0(VAR_3);
}
