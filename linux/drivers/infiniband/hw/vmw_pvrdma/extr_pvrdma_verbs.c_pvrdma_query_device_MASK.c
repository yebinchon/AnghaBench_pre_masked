
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct pvrdma_dev {TYPE_3__* dsr; TYPE_1__* pdev; } ;
struct ib_udata {scalar_t__ outlen; scalar_t__ inlen; } ;
struct ib_device_attr {int device_cap_flags; void* max_fast_reg_page_list_len; int local_ca_ack_delay; int max_pkeys; int max_ah; int atomic_cap; int masked_atomic_cap; int max_qp_init_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_srq_sge; int max_srq_wr; int max_srq; void* max_sge_rd; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;
struct TYPE_5__ {int device_cap_flags; int atomic_ops; int bmme_flags; int max_fast_reg_page_list_len; int local_ca_ack_delay; int max_pkeys; int max_ah; int max_qp_init_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_srq_sge; int max_srq_wr; int max_srq; int max_sge_rd; int max_sge; int max_qp_wr; int max_qp; int hw_ver; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct TYPE_6__ {TYPE_2__ caps; } ;
struct TYPE_4__ {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* FUNC_0 (struct pvrdma_dev*,int ,int ) ;
 int VAR_11 ;
 struct pvrdma_dev* FUNC_1 (struct ib_device*) ;

int FUNC_2(struct ib_device *VAR_12,
   struct ib_device_attr *VAR_13,
   struct ib_udata *VAR_14)
{
 struct pvrdma_dev *VAR_15 = FUNC_1(VAR_12);

 if (VAR_14->inlen || VAR_14->outlen)
  return -VAR_0;

 VAR_13->fw_ver = VAR_15->dsr->caps.fw_ver;
 VAR_13->sys_image_guid = VAR_15->dsr->caps.sys_image_guid;
 VAR_13->max_mr_size = VAR_15->dsr->caps.max_mr_size;
 VAR_13->page_size_cap = VAR_15->dsr->caps.page_size_cap;
 VAR_13->vendor_id = VAR_15->dsr->caps.vendor_id;
 VAR_13->vendor_part_id = VAR_15->pdev->device;
 VAR_13->hw_ver = VAR_15->dsr->caps.hw_ver;
 VAR_13->max_qp = VAR_15->dsr->caps.max_qp;
 VAR_13->max_qp_wr = VAR_15->dsr->caps.max_qp_wr;
 VAR_13->device_cap_flags = VAR_15->dsr->caps.device_cap_flags;
 VAR_13->max_send_sge = VAR_15->dsr->caps.max_sge;
 VAR_13->max_recv_sge = VAR_15->dsr->caps.max_sge;
 VAR_13->max_sge_rd = FUNC_0(VAR_15, VAR_15->dsr->caps.max_sge,
        VAR_15->dsr->caps.max_sge_rd);
 VAR_13->max_srq = VAR_15->dsr->caps.max_srq;
 VAR_13->max_srq_wr = VAR_15->dsr->caps.max_srq_wr;
 VAR_13->max_srq_sge = VAR_15->dsr->caps.max_srq_sge;
 VAR_13->max_cq = VAR_15->dsr->caps.max_cq;
 VAR_13->max_cqe = VAR_15->dsr->caps.max_cqe;
 VAR_13->max_mr = VAR_15->dsr->caps.max_mr;
 VAR_13->max_pd = VAR_15->dsr->caps.max_pd;
 VAR_13->max_qp_rd_atom = VAR_15->dsr->caps.max_qp_rd_atom;
 VAR_13->max_qp_init_rd_atom = VAR_15->dsr->caps.max_qp_init_rd_atom;
 VAR_13->atomic_cap =
  VAR_15->dsr->caps.atomic_ops &
  (VAR_6 | VAR_7) ?
  VAR_1 : VAR_2;
 VAR_13->masked_atomic_cap = VAR_13->atomic_cap;
 VAR_13->max_ah = VAR_15->dsr->caps.max_ah;
 VAR_13->max_pkeys = VAR_15->dsr->caps.max_pkeys;
 VAR_13->local_ca_ack_delay = VAR_15->dsr->caps.local_ca_ack_delay;
 if ((VAR_15->dsr->caps.bmme_flags & VAR_9) &&
     (VAR_15->dsr->caps.bmme_flags & VAR_10) &&
     (VAR_15->dsr->caps.bmme_flags & VAR_8)) {
  VAR_13->device_cap_flags |= VAR_3;
  VAR_13->max_fast_reg_page_list_len = FUNC_0(VAR_15,
    VAR_11,
    VAR_15->dsr->caps.max_fast_reg_page_list_len);
 }

 VAR_13->device_cap_flags |= VAR_4 |
       VAR_5;

 return 0;
}
