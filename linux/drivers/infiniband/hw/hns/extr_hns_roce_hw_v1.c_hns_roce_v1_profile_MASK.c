
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct hns_roce_caps {int reserved_mrws; int reserved_qps; int num_ports; int* pkey_table_len; int* gid_table_len; int local_ca_ack_delay; int max_mtu; int aeqe_depth; int ceqe_depth; int chunk_sz; scalar_t__ reserved_cqs; scalar_t__ reserved_uars; scalar_t__ reserved_pds; scalar_t__ reserved_lkey; int page_size_cap; int cq_entry_sz; int mtt_entry_sz; int mtpt_entry_sz; int cqc_entry_sz; int irrl_entry_sz; int qpc_entry_sz; int max_rq_desc_sz; int max_sq_desc_sz; int max_qp_dest_rdma; int max_qp_init_rdma; int num_pds; int num_mtt_segs; int num_mtpts; int num_other_vectors; int num_comp_vectors; int num_aeq_vectors; int phy_num_uars; int num_uars; int max_sq_inline; void* max_rq_sg; void* max_sq_sg; int max_cqes; int min_cqes; int num_cqs; int min_wqes; int max_wqes; int num_qps; } ;
struct hns_roce_dev {int vendor_id; int vendor_part_id; int sys_image_guid; int hw_rev; struct hns_roce_caps caps; } ;


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
 void* VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int FUNC_0 (struct hns_roce_dev*,int ) ;

__attribute__((used)) static int FUNC_1(struct hns_roce_dev *VAR_38)
{
 int VAR_39 = 0;
 struct hns_roce_caps *VAR_40 = &VAR_38->caps;

 VAR_38->vendor_id = FUNC_0(VAR_38, VAR_36);
 VAR_38->vendor_part_id = FUNC_0(VAR_38, VAR_37);
 VAR_38->sys_image_guid = FUNC_0(VAR_38, VAR_35) |
    ((u64)FUNC_0(VAR_38,
         VAR_34) << 32);
 VAR_38->hw_rev = VAR_0;

 VAR_40->num_qps = VAR_20;
 VAR_40->max_wqes = VAR_23;
 VAR_40->min_wqes = VAR_2;
 VAR_40->num_cqs = VAR_14;
 VAR_40->min_cqes = VAR_1;
 VAR_40->max_cqes = VAR_13;
 VAR_40->max_sq_sg = VAR_29;
 VAR_40->max_rq_sg = VAR_29;
 VAR_40->max_sq_inline = VAR_11;
 VAR_40->num_uars = VAR_31;
 VAR_40->phy_num_uars = VAR_27;
 VAR_40->num_aeq_vectors = VAR_4;
 VAR_40->num_comp_vectors = VAR_7;
 VAR_40->num_other_vectors = VAR_3;
 VAR_40->num_mtpts = VAR_15;
 VAR_40->num_mtt_segs = VAR_16;
 VAR_40->num_pds = VAR_17;
 VAR_40->max_qp_init_rdma = VAR_19;
 VAR_40->max_qp_dest_rdma = VAR_18;
 VAR_40->max_sq_desc_sz = VAR_22;
 VAR_40->max_rq_desc_sz = VAR_21;
 VAR_40->qpc_entry_sz = VAR_28;
 VAR_40->irrl_entry_sz = VAR_12;
 VAR_40->cqc_entry_sz = VAR_8;
 VAR_40->mtpt_entry_sz = VAR_24;
 VAR_40->mtt_entry_sz = VAR_25;
 VAR_40->cq_entry_sz = VAR_9;
 VAR_40->page_size_cap = VAR_26;
 VAR_40->reserved_lkey = 0;
 VAR_40->reserved_pds = 0;
 VAR_40->reserved_mrws = 1;
 VAR_40->reserved_uars = 0;
 VAR_40->reserved_cqs = 0;
 VAR_40->reserved_qps = 12;
 VAR_40->chunk_sz = VAR_30;

 for (VAR_39 = 0; VAR_39 < VAR_40->num_ports; VAR_39++)
  VAR_40->pkey_table_len[VAR_39] = 1;

 for (VAR_39 = 0; VAR_39 < VAR_40->num_ports; VAR_39++) {

  if (VAR_39 >= (VAR_10 % VAR_40->num_ports))
   VAR_40->gid_table_len[VAR_39] = VAR_10 /
       VAR_40->num_ports;
  else
   VAR_40->gid_table_len[VAR_39] = VAR_10 /
       VAR_40->num_ports + 1;
 }

 VAR_40->ceqe_depth = VAR_6;
 VAR_40->aeqe_depth = VAR_5;
 VAR_40->local_ca_ack_delay = FUNC_0(VAR_38, VAR_33);
 VAR_40->max_mtu = VAR_32;

 return 0;
}
