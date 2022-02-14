
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int max_ord_per_qp; int max_ird_per_qp; int max_pages_per_frmr; int local_ca_ack_delay; int max_rqe; int max_srq_sge; int max_srq; int max_pd; int max_mw; int max_mr; int max_cqe; int max_cq; int max_rdma_sge; int max_recv_sge; int max_send_sge; int max_wqe; int max_qp; int max_mr_size; int * fw_ver; } ;
struct TYPE_5__ {TYPE_1__* pdev; } ;
struct ocrdma_dev {TYPE_3__ attr; int asic_id; TYPE_2__ nic_info; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int page_size_cap; int device_cap_flags; int max_qp_init_rd_atom; int max_pkeys; int max_fast_reg_page_list_len; int local_ca_ack_delay; int max_srq_wr; int max_srq_sge; int max_srq; int max_qp_rd_atom; scalar_t__ max_map_per_fmr; scalar_t__ max_fmr; scalar_t__ atomic_cap; int max_pd; int max_mw; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_ah; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int device; int vendor; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct ocrdma_dev* FUNC_0 (struct ib_device*) ;
 int FUNC_1 (int *,int *,int ) ;
 int FUNC_2 (struct ib_device_attr*,int ,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct ocrdma_dev*,int *) ;

int FUNC_5(struct ib_device *VAR_8, struct ib_device_attr *VAR_9,
   struct ib_udata *VAR_10)
{
 struct ocrdma_dev *VAR_11 = FUNC_0(VAR_8);

 if (VAR_10->inlen || VAR_10->outlen)
  return -VAR_0;

 FUNC_2(VAR_9, 0, sizeof *VAR_9);
 FUNC_1(&VAR_9->fw_ver, &VAR_11->attr.fw_ver[0],
        FUNC_3(sizeof(VAR_11->attr.fw_ver), sizeof(VAR_9->fw_ver)));
 FUNC_4(VAR_11, (u8 *)&VAR_9->sys_image_guid);
 VAR_9->max_mr_size = VAR_11->attr.max_mr_size;
 VAR_9->page_size_cap = 0xffff000;
 VAR_9->vendor_id = VAR_11->nic_info.pdev->vendor;
 VAR_9->vendor_part_id = VAR_11->nic_info.pdev->device;
 VAR_9->hw_ver = VAR_11->asic_id;
 VAR_9->max_qp = VAR_11->attr.max_qp;
 VAR_9->max_ah = VAR_7;
 VAR_9->max_qp_wr = VAR_11->attr.max_wqe;

 VAR_9->device_cap_flags = VAR_1 |
     VAR_4 |
     VAR_5 |
     VAR_6 |
     VAR_2 |
     VAR_3;
 VAR_9->max_send_sge = VAR_11->attr.max_send_sge;
 VAR_9->max_recv_sge = VAR_11->attr.max_recv_sge;
 VAR_9->max_sge_rd = VAR_11->attr.max_rdma_sge;
 VAR_9->max_cq = VAR_11->attr.max_cq;
 VAR_9->max_cqe = VAR_11->attr.max_cqe;
 VAR_9->max_mr = VAR_11->attr.max_mr;
 VAR_9->max_mw = VAR_11->attr.max_mw;
 VAR_9->max_pd = VAR_11->attr.max_pd;
 VAR_9->atomic_cap = 0;
 VAR_9->max_fmr = 0;
 VAR_9->max_map_per_fmr = 0;
 VAR_9->max_qp_rd_atom =
     FUNC_3(VAR_11->attr.max_ord_per_qp, VAR_11->attr.max_ird_per_qp);
 VAR_9->max_qp_init_rd_atom = VAR_11->attr.max_ord_per_qp;
 VAR_9->max_srq = VAR_11->attr.max_srq;
 VAR_9->max_srq_sge = VAR_11->attr.max_srq_sge;
 VAR_9->max_srq_wr = VAR_11->attr.max_rqe;
 VAR_9->local_ca_ack_delay = VAR_11->attr.local_ca_ack_delay;
 VAR_9->max_fast_reg_page_list_len = VAR_11->attr.max_pages_per_frmr;
 VAR_9->max_pkeys = 1;
 return 0;
}
