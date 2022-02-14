
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct ib_udata {int dummy; } ;
struct ib_device_attr {int device_cap_flags; int max_sge_rd; int max_pkeys; int max_fast_reg_page_list_len; int max_srq_sge; int max_srq_wr; int max_srq; int local_ca_ack_delay; int atomic_cap; int max_qp_init_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; scalar_t__ max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;
struct TYPE_2__ {int flags; int max_srq_sges; int max_srq_wrs; int max_srqs; int local_ca_ack_delay; int max_qp_init_rdma; int max_qp_dest_rdma; int num_pds; int num_mtpts; int max_cqes; int num_cqs; int max_rq_sg; int max_sq_sg; int max_wqes; int num_qps; int page_size_cap; int fw_ver; } ;
struct hns_roce_dev {TYPE_1__ caps; int hw_rev; int vendor_part_id; int vendor_id; int sys_image_guid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ib_device_attr*,int ,int) ;
 struct hns_roce_dev* FUNC_2 (struct ib_device*) ;

__attribute__((used)) static int FUNC_3(struct ib_device *VAR_9,
     struct ib_device_attr *VAR_10,
     struct ib_udata *VAR_11)
{
 struct hns_roce_dev *VAR_12 = FUNC_2(VAR_9);

 FUNC_1(VAR_10, 0, sizeof(*VAR_10));

 VAR_10->fw_ver = VAR_12->caps.fw_ver;
 VAR_10->sys_image_guid = FUNC_0(VAR_12->sys_image_guid);
 VAR_10->max_mr_size = (u64)(~(0ULL));
 VAR_10->page_size_cap = VAR_12->caps.page_size_cap;
 VAR_10->vendor_id = VAR_12->vendor_id;
 VAR_10->vendor_part_id = VAR_12->vendor_part_id;
 VAR_10->hw_ver = VAR_12->hw_rev;
 VAR_10->max_qp = VAR_12->caps.num_qps;
 VAR_10->max_qp_wr = VAR_12->caps.max_wqes;
 VAR_10->device_cap_flags = VAR_7 |
      VAR_8;
 VAR_10->max_send_sge = VAR_12->caps.max_sq_sg;
 VAR_10->max_recv_sge = VAR_12->caps.max_rq_sg;
 VAR_10->max_sge_rd = 1;
 VAR_10->max_cq = VAR_12->caps.num_cqs;
 VAR_10->max_cqe = VAR_12->caps.max_cqes;
 VAR_10->max_mr = VAR_12->caps.num_mtpts;
 VAR_10->max_pd = VAR_12->caps.num_pds;
 VAR_10->max_qp_rd_atom = VAR_12->caps.max_qp_dest_rdma;
 VAR_10->max_qp_init_rd_atom = VAR_12->caps.max_qp_init_rdma;
 VAR_10->atomic_cap = VAR_12->caps.flags & VAR_0 ?
       VAR_4 : VAR_5;
 VAR_10->max_pkeys = 1;
 VAR_10->local_ca_ack_delay = VAR_12->caps.local_ca_ack_delay;
 if (VAR_12->caps.flags & VAR_2) {
  VAR_10->max_srq = VAR_12->caps.max_srqs;
  VAR_10->max_srq_wr = VAR_12->caps.max_srq_wrs;
  VAR_10->max_srq_sge = VAR_12->caps.max_srq_sges;
 }

 if (VAR_12->caps.flags & VAR_1) {
  VAR_10->device_cap_flags |= VAR_6;
  VAR_10->max_fast_reg_page_list_len = VAR_3;
 }

 return 0;
}
