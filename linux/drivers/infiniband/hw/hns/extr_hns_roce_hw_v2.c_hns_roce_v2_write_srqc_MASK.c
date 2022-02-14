
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_srq_context {int db_record_addr_record_en; int byte_56_xrc_cqn; int rsv_idxnxtblkaddr; void* idx_nxt_blk_addr; int byte_44_idxbufpgsz_addr; void* idx_cur_blk_addr; int rsv_idx_bt_ba; void* idx_bt_ba; int byte_28_rqws_pd; int byte_24_wqe_bt_ba; void* wqe_bt_ba; int byte_12_xrcd; int byte_8_limit_wl; int byte_4_srqn_srqst; } ;
struct hns_roce_srq {int srqn; scalar_t__ max_gs; int max; } ;
struct TYPE_2__ {scalar_t__ srqwqe_hop_num; scalar_t__ idx_hop_num; int idx_ba_pg_sz; int idx_buf_pg_sz; int srqwqe_ba_pg_sz; int srqwqe_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
typedef int dma_addr_t ;


 scalar_t__ VAR_0 ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct hns_roce_srq_context*,int ,int) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_6(struct hns_roce_dev *VAR_40,
       struct hns_roce_srq *VAR_41, u32 VAR_42, u16 VAR_43,
       u32 VAR_44, void *VAR_45, u64 *VAR_46,
       u64 *VAR_47, dma_addr_t VAR_48,
       dma_addr_t VAR_49)
{
 struct hns_roce_srq_context *VAR_50;

 VAR_50 = VAR_45;
 FUNC_3(VAR_50, 0, sizeof(*VAR_50));

 FUNC_5(VAR_50->byte_4_srqn_srqst, VAR_25,
         VAR_26, 1);

 FUNC_5(VAR_50->byte_4_srqn_srqst,
         VAR_27,
         VAR_28,
         (VAR_40->caps.srqwqe_hop_num == VAR_0 ? 0 :
         VAR_40->caps.srqwqe_hop_num));
 FUNC_5(VAR_50->byte_4_srqn_srqst,
         VAR_23, VAR_24,
         FUNC_2(VAR_41->max));

 FUNC_5(VAR_50->byte_4_srqn_srqst, VAR_21,
         VAR_22, VAR_41->srqn);

 FUNC_5(VAR_50->byte_8_limit_wl, VAR_38,
         VAR_39, 0);

 FUNC_5(VAR_50->byte_12_xrcd, VAR_3,
         VAR_4, VAR_43);

 VAR_50->wqe_bt_ba = FUNC_0((u32)(VAR_48 >> 3));

 FUNC_5(VAR_50->byte_24_wqe_bt_ba,
         VAR_5,
         VAR_6,
         VAR_48 >> 35);

 FUNC_5(VAR_50->byte_28_rqws_pd, VAR_7,
         VAR_8, VAR_42);
 FUNC_5(VAR_50->byte_28_rqws_pd, VAR_9,
         VAR_10, VAR_41->max_gs <= 0 ? 0 :
         FUNC_1(VAR_41->max_gs - 1));

 VAR_50->idx_bt_ba = FUNC_0(VAR_49 >> 3);
 FUNC_5(VAR_50->rsv_idx_bt_ba,
         VAR_11,
         VAR_12,
         VAR_49 >> 35);

 VAR_50->idx_cur_blk_addr =
  FUNC_0(VAR_47[0] >> VAR_1);
 FUNC_5(VAR_50->byte_44_idxbufpgsz_addr,
         VAR_17,
         VAR_18,
         VAR_47[0] >> (32 + VAR_1));
 FUNC_5(VAR_50->byte_44_idxbufpgsz_addr,
         VAR_19,
         VAR_20,
         VAR_40->caps.idx_hop_num == VAR_0 ? 0 :
         VAR_40->caps.idx_hop_num);

 FUNC_5(VAR_50->byte_44_idxbufpgsz_addr,
         VAR_13,
         VAR_14,
         VAR_40->caps.idx_ba_pg_sz);
 FUNC_5(VAR_50->byte_44_idxbufpgsz_addr,
         VAR_15,
         VAR_16,
         VAR_40->caps.idx_buf_pg_sz);

 VAR_50->idx_nxt_blk_addr =
  FUNC_0(VAR_47[1] >> VAR_1);
 FUNC_5(VAR_50->rsv_idxnxtblkaddr,
         VAR_29,
         VAR_30,
         VAR_47[1] >> (32 + VAR_1));
 FUNC_5(VAR_50->byte_56_xrc_cqn,
         VAR_35, VAR_36,
         VAR_44);
 FUNC_5(VAR_50->byte_56_xrc_cqn,
         VAR_31,
         VAR_32,
         VAR_40->caps.srqwqe_ba_pg_sz + VAR_2);
 FUNC_5(VAR_50->byte_56_xrc_cqn,
         VAR_33,
         VAR_34,
         VAR_40->caps.srqwqe_buf_pg_sz + VAR_2);

 FUNC_4(VAR_50->db_record_addr_record_en,
       VAR_37, 0);
}
