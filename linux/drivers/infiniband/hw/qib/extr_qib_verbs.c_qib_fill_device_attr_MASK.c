
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int device_cap_flags; int vendor_id; unsigned long long max_mr_size; int max_map_per_fmr; int max_qp_init_rd_atom; int max_mcast_grp; int max_mcast_qp_attach; int max_total_mcast_qp_attach; int max_pkeys; int atomic_cap; int max_srq_sge; int max_srq_wr; int max_srq; int max_qp_rd_atom; void* max_ah; int max_cqe; int max_cq; void* max_sge_rd; void* max_recv_sge; void* max_send_sge; int max_qp_wr; int max_qp; int sys_image_guid; int hw_ver; int vendor_part_id; int page_size_cap; int max_pd; } ;
struct TYPE_4__ {TYPE_3__ props; } ;
struct rvt_dev_info {int wc_opcode; int post_parms; TYPE_1__ dparms; } ;
struct TYPE_5__ {struct rvt_dev_info rdi; } ;
struct qib_devdata {TYPE_2__ verbs_dev; int minrev; int deviceid; } ;


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
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 void* VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;
 int FUNC_1 (struct qib_devdata*) ;
 int VAR_27 ;

__attribute__((used)) static void FUNC_2(struct qib_devdata *VAR_28)
{
 struct rvt_dev_info *VAR_29 = &VAR_28->verbs_dev.rdi;

 FUNC_0(&VAR_29->dparms.props, 0, sizeof(VAR_29->dparms.props));

 VAR_29->dparms.props.max_pd = VAR_18;
 VAR_29->dparms.props.max_ah = VAR_13;
 VAR_29->dparms.props.device_cap_flags = VAR_1 |
  VAR_2 | VAR_5 |
  VAR_7 | VAR_4 |
  VAR_3 | VAR_6;
 VAR_29->dparms.props.page_size_cap = VAR_8;
 VAR_29->dparms.props.vendor_id =
  VAR_10 << 16 | VAR_11 << 8 | VAR_12;
 VAR_29->dparms.props.vendor_part_id = VAR_28->deviceid;
 VAR_29->dparms.props.hw_ver = VAR_28->minrev;
 VAR_29->dparms.props.sys_image_guid = VAR_25;
 VAR_29->dparms.props.max_mr_size = ~0ULL;
 VAR_29->dparms.props.max_qp = VAR_20;
 VAR_29->dparms.props.max_qp_wr = VAR_19;
 VAR_29->dparms.props.max_send_sge = VAR_21;
 VAR_29->dparms.props.max_recv_sge = VAR_21;
 VAR_29->dparms.props.max_sge_rd = VAR_21;
 VAR_29->dparms.props.max_cq = VAR_15;
 VAR_29->dparms.props.max_cqe = VAR_14;
 VAR_29->dparms.props.max_ah = VAR_13;
 VAR_29->dparms.props.max_map_per_fmr = 32767;
 VAR_29->dparms.props.max_qp_rd_atom = VAR_9;
 VAR_29->dparms.props.max_qp_init_rd_atom = 255;
 VAR_29->dparms.props.max_srq = VAR_24;
 VAR_29->dparms.props.max_srq_wr = VAR_23;
 VAR_29->dparms.props.max_srq_sge = VAR_22;
 VAR_29->dparms.props.atomic_cap = VAR_0;
 VAR_29->dparms.props.max_pkeys = FUNC_1(VAR_28);
 VAR_29->dparms.props.max_mcast_grp = VAR_16;
 VAR_29->dparms.props.max_mcast_qp_attach = VAR_17;
 VAR_29->dparms.props.max_total_mcast_qp_attach =
     VAR_29->dparms.props.max_mcast_qp_attach *
     VAR_29->dparms.props.max_mcast_grp;

 VAR_28->verbs_dev.rdi.post_parms = VAR_27;


 VAR_28->verbs_dev.rdi.wc_opcode = VAR_26;
}
