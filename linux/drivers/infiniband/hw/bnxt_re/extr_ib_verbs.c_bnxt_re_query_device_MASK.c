
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct ib_udata {int dummy; } ;
struct ib_device_attr {int page_size_cap; int device_cap_flags; int max_pkeys; int local_ca_ack_delay; int max_fast_reg_page_list_len; int max_srq_sge; int max_srq_wr; int max_srq; scalar_t__ max_map_per_fmr; scalar_t__ max_fmr; int max_ah; scalar_t__ max_total_mcast_qp_attach; scalar_t__ max_mcast_qp_attach; scalar_t__ max_mcast_grp; int max_raw_ethy_qp; scalar_t__ max_raw_ipv6_qp; int max_mw; scalar_t__ max_rdd; scalar_t__ max_ee; scalar_t__ max_ee_init_rd_atom; scalar_t__ max_res_rd_atom; scalar_t__ max_ee_rd_atom; void* masked_atomic_cap; void* atomic_cap; int max_qp_init_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_recv_sge; int max_send_sge; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int dummy; } ;
struct bnxt_qplib_dev_attr {int max_srq_sges; int max_srq_wqes; int max_srq; int max_ah; int max_raw_ethy_qp; int max_mw; int max_qp_init_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cq_wqes; int max_cq; int max_qp_sges; int max_qp_wqes; int max_qp; int fw_ver; } ;
struct bnxt_re_dev {TYPE_3__* en_dev; TYPE_1__* netdev; struct bnxt_qplib_dev_attr dev_attr; } ;
struct TYPE_6__ {TYPE_2__* pdev; } ;
struct TYPE_5__ {int subsystem_device; int device; int vendor; } ;
struct TYPE_4__ {int dev_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ib_device_attr*,int ,int) ;
 int FUNC_3 (int,int) ;
 struct bnxt_re_dev* FUNC_4 (struct ib_device*,struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_17,
    struct ib_device_attr *VAR_18,
    struct ib_udata *VAR_19)
{
 struct bnxt_re_dev *VAR_20 = FUNC_4(VAR_17, VAR_17);
 struct bnxt_qplib_dev_attr *VAR_21 = &VAR_20->dev_attr;

 FUNC_2(VAR_18, 0, sizeof(*VAR_18));
 FUNC_1(&VAR_18->fw_ver, VAR_21->fw_ver,
        FUNC_3(sizeof(VAR_21->fw_ver),
     sizeof(VAR_18->fw_ver)));
 FUNC_0(VAR_20->netdev->dev_addr,
       (u8 *)&VAR_18->sys_image_guid);
 VAR_18->max_mr_size = VAR_1;
 VAR_18->page_size_cap = VAR_3 | VAR_2;

 VAR_18->vendor_id = VAR_20->en_dev->pdev->vendor;
 VAR_18->vendor_part_id = VAR_20->en_dev->pdev->device;
 VAR_18->hw_ver = VAR_20->en_dev->pdev->subsystem_device;
 VAR_18->max_qp = VAR_21->max_qp;
 VAR_18->max_qp_wr = VAR_21->max_qp_wqes;
 VAR_18->device_cap_flags =
        VAR_5
        | VAR_12
        | VAR_14
        | VAR_15
        | VAR_6
        | VAR_13
        | VAR_11
        | VAR_10
        | VAR_8
        | VAR_9
        | VAR_7;
 VAR_18->max_send_sge = VAR_21->max_qp_sges;
 VAR_18->max_recv_sge = VAR_21->max_qp_sges;
 VAR_18->max_sge_rd = VAR_21->max_qp_sges;
 VAR_18->max_cq = VAR_21->max_cq;
 VAR_18->max_cqe = VAR_21->max_cq_wqes;
 VAR_18->max_mr = VAR_21->max_mr;
 VAR_18->max_pd = VAR_21->max_pd;
 VAR_18->max_qp_rd_atom = VAR_21->max_qp_rd_atom;
 VAR_18->max_qp_init_rd_atom = VAR_21->max_qp_init_rd_atom;
 VAR_18->atomic_cap = VAR_4;
 VAR_18->masked_atomic_cap = VAR_4;

 VAR_18->max_ee_rd_atom = 0;
 VAR_18->max_res_rd_atom = 0;
 VAR_18->max_ee_init_rd_atom = 0;
 VAR_18->max_ee = 0;
 VAR_18->max_rdd = 0;
 VAR_18->max_mw = VAR_21->max_mw;
 VAR_18->max_raw_ipv6_qp = 0;
 VAR_18->max_raw_ethy_qp = VAR_21->max_raw_ethy_qp;
 VAR_18->max_mcast_grp = 0;
 VAR_18->max_mcast_qp_attach = 0;
 VAR_18->max_total_mcast_qp_attach = 0;
 VAR_18->max_ah = VAR_21->max_ah;

 VAR_18->max_fmr = 0;
 VAR_18->max_map_per_fmr = 0;

 VAR_18->max_srq = VAR_21->max_srq;
 VAR_18->max_srq_wr = VAR_21->max_srq_wqes;
 VAR_18->max_srq_sge = VAR_21->max_srq_sges;

 VAR_18->max_fast_reg_page_list_len = VAR_16;

 VAR_18->max_pkeys = 1;
 VAR_18->local_ca_ack_delay = VAR_0;
 return 0;
}
