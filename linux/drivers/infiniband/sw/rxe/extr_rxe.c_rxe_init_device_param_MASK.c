
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int max_cqe; int local_ca_ack_delay; int max_pkeys; int max_fast_reg_page_list_len; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_total_mcast_qp_attach; int max_mcast_qp_attach; int max_mcast_grp; int max_raw_ethy_qp; int max_raw_ipv6_qp; int max_mw; int max_rdd; int max_ee; int atomic_cap; int max_ee_init_rd_atom; int max_qp_init_rd_atom; int max_res_rd_atom; int max_ee_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cq; int max_sge_rd; void* max_recv_sge; void* max_send_sge; int device_cap_flags; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int fw_ver; } ;
struct rxe_dev {int max_ucontext; TYPE_1__ attr; int max_inline_data; } ;


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
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 void* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;

__attribute__((used)) static void FUNC_0(struct rxe_dev *VAR_40)
{
 VAR_40->max_inline_data = VAR_12;

 VAR_40->attr.fw_ver = VAR_2;
 VAR_40->attr.max_mr_size = VAR_18;
 VAR_40->attr.page_size_cap = VAR_37;
 VAR_40->attr.vendor_id = VAR_38;
 VAR_40->attr.vendor_part_id = VAR_39;
 VAR_40->attr.hw_ver = VAR_3;
 VAR_40->attr.max_qp = VAR_22;
 VAR_40->attr.max_qp_wr = VAR_25;
 VAR_40->attr.device_cap_flags = VAR_1;
 VAR_40->attr.max_send_sge = VAR_30;
 VAR_40->attr.max_recv_sge = VAR_30;
 VAR_40->attr.max_sge_rd = VAR_31;
 VAR_40->attr.max_cq = VAR_6;
 VAR_40->attr.max_cqe = (1 << VAR_13) - 1;
 VAR_40->attr.max_mr = VAR_17;
 VAR_40->attr.max_pd = VAR_20;
 VAR_40->attr.max_qp_rd_atom = VAR_24;
 VAR_40->attr.max_ee_rd_atom = VAR_9;
 VAR_40->attr.max_res_rd_atom = VAR_29;
 VAR_40->attr.max_qp_init_rd_atom = VAR_23;
 VAR_40->attr.max_ee_init_rd_atom = VAR_8;
 VAR_40->attr.atomic_cap = VAR_0;
 VAR_40->attr.max_ee = VAR_7;
 VAR_40->attr.max_rdd = VAR_28;
 VAR_40->attr.max_mw = VAR_19;
 VAR_40->attr.max_raw_ipv6_qp = VAR_27;
 VAR_40->attr.max_raw_ethy_qp = VAR_26;
 VAR_40->attr.max_mcast_grp = VAR_15;
 VAR_40->attr.max_mcast_qp_attach = VAR_16;
 VAR_40->attr.max_total_mcast_qp_attach = VAR_35;
 VAR_40->attr.max_ah = VAR_5;
 VAR_40->attr.max_fmr = VAR_10;
 VAR_40->attr.max_map_per_fmr = VAR_14;
 VAR_40->attr.max_srq = VAR_32;
 VAR_40->attr.max_srq_wr = VAR_34;
 VAR_40->attr.max_srq_sge = VAR_33;
 VAR_40->attr.max_fast_reg_page_list_len = VAR_11;
 VAR_40->attr.max_pkeys = VAR_21;
 VAR_40->attr.local_ca_ack_delay = VAR_4;

 VAR_40->max_ucontext = VAR_36;
}
