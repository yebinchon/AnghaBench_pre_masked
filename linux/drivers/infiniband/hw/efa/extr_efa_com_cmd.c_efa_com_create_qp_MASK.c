
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct efa_com_admin_queue {int dummy; } ;
struct efa_com_dev {int efa_dev; struct efa_com_admin_queue aq; } ;
struct efa_com_create_qp_result {int recv_sub_cq_idx; int send_sub_cq_idx; int llq_descriptors_offset; int rq_db_offset; int sq_db_offset; int qp_num; int qp_handle; } ;
struct efa_com_create_qp_params {int uarn; int rq_depth; int rq_ring_size_in_bytes; int sq_depth; int sq_ring_size_in_bytes; int recv_cq_idx; int send_cq_idx; int rq_base_addr; int qp_type; int pd; } ;
struct efa_admin_create_qp_resp {int recv_sub_cq_idx; int send_sub_cq_idx; int llq_descriptors_offset; int rq_db_offset; int sq_db_offset; int qp_num; int qp_handle; } ;
struct TYPE_4__ {int recv_queue_depth; int recv_queue_ring_size; int send_queue_depth; int send_queue_ring_size; } ;
struct TYPE_3__ {int opcode; } ;
struct efa_admin_create_qp_cmd {int uar; TYPE_2__ qp_alloc_size; int recv_cq_idx; int send_cq_idx; int rq_base_addr; int qp_type; int pd; TYPE_1__ aq_common_desc; } ;
struct efa_admin_aq_entry {int dummy; } ;
struct efa_admin_acq_entry {int dummy; } ;
typedef int create_qp_cmd ;
typedef int cmd_completion ;


 int VAR_0 ;
 int FUNC_0 (struct efa_com_admin_queue*,struct efa_admin_aq_entry*,int,struct efa_admin_acq_entry*,int) ;
 int FUNC_1 (int ,char*,int) ;

int FUNC_2(struct efa_com_dev *VAR_1,
        struct efa_com_create_qp_params *VAR_2,
        struct efa_com_create_qp_result *VAR_3)
{
 struct efa_admin_create_qp_cmd VAR_4 = {};
 struct efa_admin_create_qp_resp VAR_5;
 struct efa_com_admin_queue *VAR_6 = &VAR_1->aq;
 int VAR_7;

 VAR_4.aq_common_desc.opcode = VAR_0;

 VAR_4.pd = VAR_2->pd;
 VAR_4.qp_type = VAR_2->qp_type;
 VAR_4.rq_base_addr = VAR_2->rq_base_addr;
 VAR_4.send_cq_idx = VAR_2->send_cq_idx;
 VAR_4.recv_cq_idx = VAR_2->recv_cq_idx;
 VAR_4.qp_alloc_size.send_queue_ring_size =
  VAR_2->sq_ring_size_in_bytes;
 VAR_4.qp_alloc_size.send_queue_depth =
   VAR_2->sq_depth;
 VAR_4.qp_alloc_size.recv_queue_ring_size =
   VAR_2->rq_ring_size_in_bytes;
 VAR_4.qp_alloc_size.recv_queue_depth =
   VAR_2->rq_depth;
 VAR_4.uar = VAR_2->uarn;

 VAR_7 = FUNC_0(VAR_6,
          (struct efa_admin_aq_entry *)&VAR_4,
          sizeof(VAR_4),
          (struct efa_admin_acq_entry *)&VAR_5,
          sizeof(VAR_5));
 if (VAR_7) {
  FUNC_1(VAR_1->efa_dev,
          "Failed to create qp [%d]\n", VAR_7);
  return VAR_7;
 }

 VAR_3->qp_handle = VAR_5.qp_handle;
 VAR_3->qp_num = VAR_5.qp_num;
 VAR_3->sq_db_offset = VAR_5.sq_db_offset;
 VAR_3->rq_db_offset = VAR_5.rq_db_offset;
 VAR_3->llq_descriptors_offset = VAR_5.llq_descriptors_offset;
 VAR_3->send_sub_cq_idx = VAR_5.send_sub_cq_idx;
 VAR_3->recv_sub_cq_idx = VAR_5.recv_sub_cq_idx;

 return 0;
}
