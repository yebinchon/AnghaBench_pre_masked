
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int node_guid; } ;
struct hns_roce_caps {int idx_entry_sz; int reserved_mrws; int pbl_ba_pg_sz; int wqe_sq_hop_num; int wqe_sge_hop_num; int wqe_rq_hop_num; int cqe_ba_pg_sz; int flags; int* pkey_table_len; int sccc_hop_num; scalar_t__ sccc_buf_pg_sz; scalar_t__ sccc_ba_pg_sz; int sccc_entry_sz; void* cqc_timer_hop_num; scalar_t__ cqc_timer_buf_pg_sz; scalar_t__ cqc_timer_ba_pg_sz; int cqc_timer_entry_sz; int num_cqc_timer; void* qpc_timer_hop_num; scalar_t__ qpc_timer_buf_pg_sz; scalar_t__ qpc_timer_ba_pg_sz; int qpc_timer_entry_sz; int num_qpc_timer; int max_srq_sges; int max_srq_wrs; int max_srqs; int max_mtu; scalar_t__ local_ca_ack_delay; int aeqe_depth; int ceqe_depth; int * gid_table_len; int chunk_sz; scalar_t__ tsq_buf_pg_sz; int eqe_hop_num; scalar_t__ eqe_buf_pg_sz; scalar_t__ eqe_ba_pg_sz; int idx_hop_num; scalar_t__ idx_buf_pg_sz; scalar_t__ idx_ba_pg_sz; int srqwqe_hop_num; scalar_t__ srqwqe_buf_pg_sz; scalar_t__ srqwqe_ba_pg_sz; int cqe_hop_num; scalar_t__ cqe_buf_pg_sz; int mtt_hop_num; scalar_t__ mtt_buf_pg_sz; scalar_t__ mtt_ba_pg_sz; int pbl_hop_num; scalar_t__ pbl_buf_pg_sz; void* mpt_hop_num; scalar_t__ mpt_buf_pg_sz; scalar_t__ mpt_ba_pg_sz; void* cqc_hop_num; scalar_t__ cqc_buf_pg_sz; scalar_t__ cqc_ba_pg_sz; void* srqc_hop_num; scalar_t__ srqc_buf_pg_sz; scalar_t__ srqc_ba_pg_sz; void* qpc_hop_num; scalar_t__ qpc_buf_pg_sz; scalar_t__ qpc_ba_pg_sz; int reserved_qps; scalar_t__ reserved_srqs; scalar_t__ reserved_cqs; scalar_t__ reserved_uars; scalar_t__ reserved_pds; scalar_t__ reserved_lkey; int page_size_cap; int cq_entry_sz; int mtt_entry_sz; int mtpt_entry_sz; int srqc_entry_sz; int cqc_entry_sz; int trrl_entry_sz; int irrl_entry_sz; int qpc_entry_sz; int max_srq_desc_sz; int max_rq_desc_sz; int max_sq_desc_sz; int max_qp_dest_rdma; int max_qp_init_rdma; int num_pds; int num_idx_segs; int num_srqwqe_segs; int num_cqe_segs; int num_mtt_segs; int num_mtpts; int num_other_vectors; int num_comp_vectors; int num_aeq_vectors; int phy_num_uars; int num_uars; int max_srq_sg; int max_sq_inline; int max_rq_sg; int max_extend_sg; int max_sq_sg; int max_srqwqes; int max_cqes; int min_cqes; int num_srqs; int num_cqs; int max_wqes; int num_qps; } ;
struct hns_roce_dev {int dev; TYPE_1__* pci_dev; TYPE_2__ ib_dev; int sys_image_guid; int vendor_part_id; struct hns_roce_caps caps; } ;
struct TYPE_3__ {int revision; int device; } ;


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
 void* VAR_10 ;
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
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*) ;
 int FUNC_6 (struct hns_roce_dev*) ;
 int FUNC_7 (struct hns_roce_dev*) ;
 int FUNC_8 (struct hns_roce_dev*,int ) ;
 int FUNC_9 (struct hns_roce_dev*) ;

__attribute__((used)) static int FUNC_10(struct hns_roce_dev *VAR_70)
{
 struct hns_roce_caps *VAR_71 = &VAR_70->caps;
 int VAR_72;

 VAR_72 = FUNC_3(VAR_70);
 if (VAR_72) {
  FUNC_1(VAR_70->dev, "Query hardware version fail, ret = %d.\n",
   VAR_72);
  return VAR_72;
 }

 VAR_72 = FUNC_5(VAR_70);
 if (VAR_72) {
  FUNC_1(VAR_70->dev, "Query firmware version fail, ret = %d.\n",
   VAR_72);
  return VAR_72;
 }

 VAR_72 = FUNC_4(VAR_70);
 if (VAR_72) {
  FUNC_1(VAR_70->dev, "Configure global param fail, ret = %d.\n",
   VAR_72);
  return VAR_72;
 }


 VAR_72 = FUNC_6(VAR_70);
 if (VAR_72) {
  FUNC_1(VAR_70->dev, "Query pf resource fail, ret = %d.\n",
   VAR_72);
  return VAR_72;
 }

 if (VAR_70->pci_dev->revision == 0x21) {
  VAR_72 = FUNC_7(VAR_70);
  if (VAR_72) {
   FUNC_1(VAR_70->dev,
    "Query pf timer resource fail, ret = %d.\n",
    VAR_72);
   return VAR_72;
  }
 }

 VAR_72 = FUNC_2(VAR_70);
 if (VAR_72) {
  FUNC_1(VAR_70->dev, "Allocate vf resource fail, ret = %d.\n",
   VAR_72);
  return VAR_72;
 }

 if (VAR_70->pci_dev->revision == 0x21) {
  VAR_72 = FUNC_8(VAR_70, 0);
  if (VAR_72) {
   FUNC_1(VAR_70->dev,
    "Set function switch param fail, ret = %d.\n",
    VAR_72);
   return VAR_72;
  }
 }

 VAR_70->vendor_part_id = VAR_70->pci_dev->device;
 VAR_70->sys_image_guid = FUNC_0(VAR_70->ib_dev.node_guid);

 VAR_71->num_qps = VAR_42;
 VAR_71->max_wqes = VAR_56;
 VAR_71->num_cqs = VAR_33;
 VAR_71->num_srqs = VAR_52;
 VAR_71->min_cqes = VAR_15;
 VAR_71->max_cqes = VAR_31;
 VAR_71->max_srqwqes = VAR_49;
 VAR_71->max_sq_sg = VAR_47;
 VAR_71->max_extend_sg = VAR_34;
 VAR_71->max_rq_sg = VAR_44;
 VAR_71->max_sq_inline = VAR_46;
 VAR_71->max_srq_sg = VAR_54;
 VAR_71->num_uars = VAR_68;
 VAR_71->phy_num_uars = VAR_60;
 VAR_71->num_aeq_vectors = VAR_21;
 VAR_71->num_comp_vectors = VAR_24;
 VAR_71->num_other_vectors = VAR_20;
 VAR_71->num_mtpts = VAR_36;
 VAR_71->num_mtt_segs = VAR_37;
 VAR_71->num_cqe_segs = VAR_32;
 VAR_71->num_srqwqe_segs = VAR_50;
 VAR_71->num_idx_segs = VAR_35;
 VAR_71->num_pds = VAR_38;
 VAR_71->max_qp_init_rdma = VAR_41;
 VAR_71->max_qp_dest_rdma = VAR_40;
 VAR_71->max_sq_desc_sz = VAR_45;
 VAR_71->max_rq_desc_sz = VAR_43;
 VAR_71->max_srq_desc_sz = VAR_51;
 VAR_71->qpc_entry_sz = VAR_61;
 VAR_71->irrl_entry_sz = VAR_29;
 VAR_71->trrl_entry_sz = VAR_67;
 VAR_71->cqc_entry_sz = VAR_25;
 VAR_71->srqc_entry_sz = VAR_65;
 VAR_71->mtpt_entry_sz = VAR_57;
 VAR_71->mtt_entry_sz = VAR_58;
 VAR_71->idx_entry_sz = 4;
 VAR_71->cq_entry_sz = VAR_27;
 VAR_71->page_size_cap = VAR_59;
 VAR_71->reserved_lkey = 0;
 VAR_71->reserved_pds = 0;
 VAR_71->reserved_mrws = 1;
 VAR_71->reserved_uars = 0;
 VAR_71->reserved_cqs = 0;
 VAR_71->reserved_srqs = 0;
 VAR_71->reserved_qps = VAR_63;

 VAR_71->qpc_ba_pg_sz = 0;
 VAR_71->qpc_buf_pg_sz = 0;
 VAR_71->qpc_hop_num = VAR_10;
 VAR_71->srqc_ba_pg_sz = 0;
 VAR_71->srqc_buf_pg_sz = 0;
 VAR_71->srqc_hop_num = VAR_10;
 VAR_71->cqc_ba_pg_sz = 0;
 VAR_71->cqc_buf_pg_sz = 0;
 VAR_71->cqc_hop_num = VAR_10;
 VAR_71->mpt_ba_pg_sz = 0;
 VAR_71->mpt_buf_pg_sz = 0;
 VAR_71->mpt_hop_num = VAR_10;
 VAR_71->pbl_ba_pg_sz = 2;
 VAR_71->pbl_buf_pg_sz = 0;
 VAR_71->pbl_hop_num = VAR_17;
 VAR_71->mtt_ba_pg_sz = 0;
 VAR_71->mtt_buf_pg_sz = 0;
 VAR_71->mtt_hop_num = VAR_16;
 VAR_71->wqe_sq_hop_num = 2;
 VAR_71->wqe_sge_hop_num = 1;
 VAR_71->wqe_rq_hop_num = 2;
 VAR_71->cqe_ba_pg_sz = 6;
 VAR_71->cqe_buf_pg_sz = 0;
 VAR_71->cqe_hop_num = VAR_11;
 VAR_71->srqwqe_ba_pg_sz = 0;
 VAR_71->srqwqe_buf_pg_sz = 0;
 VAR_71->srqwqe_hop_num = VAR_19;
 VAR_71->idx_ba_pg_sz = 0;
 VAR_71->idx_buf_pg_sz = 0;
 VAR_71->idx_hop_num = VAR_14;
 VAR_71->eqe_ba_pg_sz = 0;
 VAR_71->eqe_buf_pg_sz = 0;
 VAR_71->eqe_hop_num = VAR_12;
 VAR_71->tsq_buf_pg_sz = 0;
 VAR_71->chunk_sz = VAR_66;

 VAR_71->flags = VAR_5 |
      VAR_6 |
      VAR_7 |
      VAR_4 |
      VAR_8;

 if (VAR_70->pci_dev->revision == 0x21)
  VAR_71->flags |= VAR_2 |
          VAR_1;

 VAR_71->pkey_table_len[0] = 1;
 VAR_71->gid_table_len[0] = VAR_28;
 VAR_71->ceqe_depth = VAR_23;
 VAR_71->aeqe_depth = VAR_22;
 VAR_71->local_ca_ack_delay = 0;
 VAR_71->max_mtu = VAR_69;

 VAR_71->max_srqs = VAR_48;
 VAR_71->max_srq_wrs = VAR_55;
 VAR_71->max_srq_sges = VAR_53;

 if (VAR_70->pci_dev->revision == 0x21) {
  VAR_71->flags |= VAR_0 |
          VAR_9 |
          VAR_3;

  VAR_71->num_qpc_timer = VAR_39;
  VAR_71->qpc_timer_entry_sz = VAR_62;
  VAR_71->qpc_timer_ba_pg_sz = 0;
  VAR_71->qpc_timer_buf_pg_sz = 0;
  VAR_71->qpc_timer_hop_num = VAR_13;
  VAR_71->num_cqc_timer = VAR_30;
  VAR_71->cqc_timer_entry_sz = VAR_26;
  VAR_71->cqc_timer_ba_pg_sz = 0;
  VAR_71->cqc_timer_buf_pg_sz = 0;
  VAR_71->cqc_timer_hop_num = VAR_13;

  VAR_71->sccc_entry_sz = VAR_64;
  VAR_71->sccc_ba_pg_sz = 0;
  VAR_71->sccc_buf_pg_sz = 0;
  VAR_71->sccc_hop_num = VAR_18;
 }

 VAR_72 = FUNC_9(VAR_70);
 if (VAR_72)
  FUNC_1(VAR_70->dev, "Configure bt attribute fail, ret = %d.\n",
   VAR_72);

 return VAR_72;
}
