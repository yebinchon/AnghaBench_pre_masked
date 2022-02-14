
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ib_uverbs_query_device_resp {int phys_port_cnt; int local_ca_ack_delay; int max_pkeys; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_total_mcast_qp_attach; int max_mcast_qp_attach; int max_mcast_grp; int max_raw_ethy_qp; int max_raw_ipv6_qp; int max_mw; int max_rdd; int max_ee; int atomic_cap; int max_ee_init_rd_atom; int max_qp_init_rd_atom; int max_res_rd_atom; int max_ee_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_sge; scalar_t__ device_cap_flags; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int node_guid; int fw_ver; } ;
struct ib_uverbs_file {int dummy; } ;
struct ib_device_attr {int local_ca_ack_delay; int max_pkeys; int max_srq_sge; int max_srq_wr; int max_srq; int max_map_per_fmr; int max_fmr; int max_ah; int max_total_mcast_qp_attach; int max_mcast_qp_attach; int max_mcast_grp; int max_raw_ethy_qp; int max_raw_ipv6_qp; int max_mw; int max_rdd; int max_ee; int atomic_cap; int max_ee_init_rd_atom; int max_qp_init_rd_atom; int max_res_rd_atom; int max_ee_rd_atom; int max_qp_rd_atom; int max_pd; int max_mr; int max_cqe; int max_cq; int max_sge_rd; int max_sge; scalar_t__ device_cap_flags; int max_qp_wr; int max_qp; int hw_ver; int vendor_part_id; int vendor_id; int page_size_cap; int max_mr_size; int sys_image_guid; int fw_ver; } ;
struct ib_device {int phys_port_cnt; int node_guid; } ;



__attribute__((used)) static void FUNC_0(struct ib_uverbs_file *VAR_0,
      struct ib_device *VAR_1,
      struct ib_uverbs_query_device_resp *VAR_2,
      struct ib_device_attr *VAR_3)
{
 VAR_2->fw_ver = VAR_3->fw_ver;
 VAR_2->node_guid = VAR_1->node_guid;
 VAR_2->sys_image_guid = VAR_3->sys_image_guid;
 VAR_2->max_mr_size = VAR_3->max_mr_size;
 VAR_2->page_size_cap = VAR_3->page_size_cap;
 VAR_2->vendor_id = VAR_3->vendor_id;
 VAR_2->vendor_part_id = VAR_3->vendor_part_id;
 VAR_2->hw_ver = VAR_3->hw_ver;
 VAR_2->max_qp = VAR_3->max_qp;
 VAR_2->max_qp_wr = VAR_3->max_qp_wr;
 VAR_2->device_cap_flags = (u32)(VAR_3->device_cap_flags);
 VAR_2->max_sge = VAR_3->max_sge;
 VAR_2->max_sge_rd = VAR_3->max_sge_rd;
 VAR_2->max_cq = VAR_3->max_cq;
 VAR_2->max_cqe = VAR_3->max_cqe;
 VAR_2->max_mr = VAR_3->max_mr;
 VAR_2->max_pd = VAR_3->max_pd;
 VAR_2->max_qp_rd_atom = VAR_3->max_qp_rd_atom;
 VAR_2->max_ee_rd_atom = VAR_3->max_ee_rd_atom;
 VAR_2->max_res_rd_atom = VAR_3->max_res_rd_atom;
 VAR_2->max_qp_init_rd_atom = VAR_3->max_qp_init_rd_atom;
 VAR_2->max_ee_init_rd_atom = VAR_3->max_ee_init_rd_atom;
 VAR_2->atomic_cap = VAR_3->atomic_cap;
 VAR_2->max_ee = VAR_3->max_ee;
 VAR_2->max_rdd = VAR_3->max_rdd;
 VAR_2->max_mw = VAR_3->max_mw;
 VAR_2->max_raw_ipv6_qp = VAR_3->max_raw_ipv6_qp;
 VAR_2->max_raw_ethy_qp = VAR_3->max_raw_ethy_qp;
 VAR_2->max_mcast_grp = VAR_3->max_mcast_grp;
 VAR_2->max_mcast_qp_attach = VAR_3->max_mcast_qp_attach;
 VAR_2->max_total_mcast_qp_attach = VAR_3->max_total_mcast_qp_attach;
 VAR_2->max_ah = VAR_3->max_ah;
 VAR_2->max_fmr = VAR_3->max_fmr;
 VAR_2->max_map_per_fmr = VAR_3->max_map_per_fmr;
 VAR_2->max_srq = VAR_3->max_srq;
 VAR_2->max_srq_wr = VAR_3->max_srq_wr;
 VAR_2->max_srq_sge = VAR_3->max_srq_sge;
 VAR_2->max_pkeys = VAR_3->max_pkeys;
 VAR_2->local_ca_ack_delay = VAR_3->local_ca_ack_delay;
 VAR_2->phys_port_cnt = VAR_1->phys_port_cnt;
}
