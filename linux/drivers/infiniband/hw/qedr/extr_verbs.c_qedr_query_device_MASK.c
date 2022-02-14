
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qedr_device_attr {int max_mr; int max_ah; int dev_ack_delay; int max_srq_wr; int max_srq_sge; int max_srq; int max_qp_resp_rd_atomic_resc; int max_qp_req_rd_atomic_resc; int max_fmr; int max_pd; int max_mw; int max_cqe; int max_cq; int max_sge; int max_rqe; int max_sqe; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_caps; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct qedr_dev {int atomic_cap; int rdma_ctx; struct qedr_device_attr attr; } ;
struct ib_udata {int dummy; } ;
struct ib_device_attr {int device_cap_flags; int max_mr; int max_map_per_fmr; int max_qp_init_rd_atom; int max_fast_reg_page_list_len; int max_ah; int max_pkeys; int local_ca_ack_delay; int max_srq_wr; int max_srq_sge; int max_srq; int max_qp_rd_atom; int max_fmr; int atomic_cap; int max_pd; int max_mw; int max_cqe; int max_cq; int max_sge_rd; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct qedr_dev*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 struct qedr_dev* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct ib_device_attr*,int ,int) ;
 int FUNC_5 (int,int) ;
 int VAR_6 ;

int FUNC_6(struct ib_device *VAR_7,
        struct ib_device_attr *VAR_8, struct ib_udata *VAR_9)
{
 struct qedr_dev *VAR_10 = FUNC_2(VAR_7);
 struct qedr_device_attr *VAR_11 = &VAR_10->attr;

 if (!VAR_10->rdma_ctx) {
  FUNC_0(VAR_10,
         "qedr_query_device called with invalid params rdma_ctx=%p\n",
         VAR_10->rdma_ctx);
  return -VAR_0;
 }

 FUNC_4(VAR_8, 0, sizeof(*VAR_8));

 VAR_8->fw_ver = VAR_11->fw_ver;
 VAR_8->sys_image_guid = VAR_11->sys_image_guid;
 VAR_8->max_mr_size = VAR_11->max_mr_size;
 VAR_8->page_size_cap = VAR_11->page_size_caps;
 VAR_8->vendor_id = VAR_11->vendor_id;
 VAR_8->vendor_part_id = VAR_11->vendor_part_id;
 VAR_8->hw_ver = VAR_11->hw_ver;
 VAR_8->max_qp = VAR_11->max_qp;
 VAR_8->max_qp_wr = FUNC_3(VAR_6, VAR_11->max_sqe, VAR_11->max_rqe);
 VAR_8->device_cap_flags = VAR_1 |
     VAR_4 |
     VAR_2 | VAR_3;

 VAR_8->max_send_sge = VAR_11->max_sge;
 VAR_8->max_recv_sge = VAR_11->max_sge;
 VAR_8->max_sge_rd = VAR_11->max_sge;
 VAR_8->max_cq = VAR_11->max_cq;
 VAR_8->max_cqe = VAR_11->max_cqe;
 VAR_8->max_mr = VAR_11->max_mr;
 VAR_8->max_mw = VAR_11->max_mw;
 VAR_8->max_pd = VAR_11->max_pd;
 VAR_8->atomic_cap = VAR_10->atomic_cap;
 VAR_8->max_fmr = VAR_11->max_fmr;
 VAR_8->max_map_per_fmr = 16;
 VAR_8->max_qp_init_rd_atom =
     1 << (FUNC_1(VAR_11->max_qp_req_rd_atomic_resc) - 1);
 VAR_8->max_qp_rd_atom =
     FUNC_5(1 << (FUNC_1(VAR_11->max_qp_resp_rd_atomic_resc) - 1),
  VAR_8->max_qp_init_rd_atom);

 VAR_8->max_srq = VAR_11->max_srq;
 VAR_8->max_srq_sge = VAR_11->max_srq_sge;
 VAR_8->max_srq_wr = VAR_11->max_srq_wr;

 VAR_8->local_ca_ack_delay = VAR_11->dev_ack_delay;
 VAR_8->max_fast_reg_page_list_len = VAR_11->max_mr / 8;
 VAR_8->max_pkeys = VAR_5;
 VAR_8->max_ah = VAR_11->max_ah;

 return 0;
}
