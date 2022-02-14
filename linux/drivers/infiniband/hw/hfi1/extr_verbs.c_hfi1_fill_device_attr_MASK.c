
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_8__ {int fw_ver; int device_cap_flags; int vendor_id; int max_map_per_fmr; int max_qp_init_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_pkeys; int atomic_cap; int max_srq_sge; int max_srq_wr; int max_srq; int max_qp_rd_atom; int max_pd; int max_cqe; int max_ah; int max_cq; void* max_sge_rd; void* max_recv_sge; void* max_send_sge; scalar_t__ max_qp_wr; int max_qp; int max_fast_reg_page_list_len; int max_mr_size; int sys_image_guid; int hw_ver; int vendor_part_id; int page_size_cap; } ;
struct TYPE_7__ {TYPE_4__ props; } ;
struct rvt_dev_info {TYPE_3__ dparms; } ;
struct TYPE_5__ {struct rvt_dev_info rdi; } ;
struct hfi1_devdata {int oui1; int oui2; int oui3; int minrev; TYPE_2__* pcidev; int dc8051_ver; TYPE_1__ verbs_dev; } ;
struct TYPE_6__ {int device; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
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
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hfi1_devdata*) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 void* VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int FUNC_4 (TYPE_4__*,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hfi1_devdata *VAR_28)
{
 struct rvt_dev_info *VAR_29 = &VAR_28->verbs_dev.rdi;
 u32 VAR_30 = VAR_28->dc8051_ver;

 FUNC_4(&VAR_29->dparms.props, 0, sizeof(VAR_29->dparms.props));

 VAR_29->dparms.props.fw_ver = ((u64)(FUNC_0(VAR_30)) << 32) |
  ((u64)(FUNC_1(VAR_30)) << 16) |
  (u64)FUNC_2(VAR_30);

 VAR_29->dparms.props.device_cap_flags = VAR_3 |
   VAR_4 | VAR_9 |
   VAR_11 | VAR_7 |
   VAR_6 | VAR_10 |
   VAR_5 |
   VAR_8;
 VAR_29->dparms.props.page_size_cap = VAR_12;
 VAR_29->dparms.props.vendor_id = VAR_28->oui1 << 16 | VAR_28->oui2 << 8 | VAR_28->oui3;
 VAR_29->dparms.props.vendor_part_id = VAR_28->pcidev->device;
 VAR_29->dparms.props.hw_ver = VAR_28->minrev;
 VAR_29->dparms.props.sys_image_guid = VAR_27;
 VAR_29->dparms.props.max_mr_size = VAR_13;
 VAR_29->dparms.props.max_fast_reg_page_list_len = VAR_14;
 VAR_29->dparms.props.max_qp = VAR_22;
 VAR_29->dparms.props.max_qp_wr =
  (VAR_21 >= VAR_1 ?
   VAR_1 - 1 : VAR_21);
 VAR_29->dparms.props.max_send_sge = VAR_23;
 VAR_29->dparms.props.max_recv_sge = VAR_23;
 VAR_29->dparms.props.max_sge_rd = VAR_23;
 VAR_29->dparms.props.max_cq = VAR_17;
 VAR_29->dparms.props.max_ah = VAR_15;
 VAR_29->dparms.props.max_cqe = VAR_16;
 VAR_29->dparms.props.max_map_per_fmr = 32767;
 VAR_29->dparms.props.max_pd = VAR_20;
 VAR_29->dparms.props.max_qp_rd_atom = VAR_0;
 VAR_29->dparms.props.max_qp_init_rd_atom = 255;
 VAR_29->dparms.props.max_srq = VAR_26;
 VAR_29->dparms.props.max_srq_wr = VAR_25;
 VAR_29->dparms.props.max_srq_sge = VAR_24;
 VAR_29->dparms.props.atomic_cap = VAR_2;
 VAR_29->dparms.props.max_pkeys = FUNC_3(VAR_28);
 VAR_29->dparms.props.max_mcast_grp = VAR_18;
 VAR_29->dparms.props.max_mcast_qp_attach = VAR_19;
 VAR_29->dparms.props.max_total_mcast_qp_attach =
     VAR_29->dparms.props.max_mcast_qp_attach *
     VAR_29->dparms.props.max_mcast_grp;
}
