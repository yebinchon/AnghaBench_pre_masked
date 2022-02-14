
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct hns_roce_v2_cq_context {int byte_56_cqe_period_maxcnt; void* db_record_addr; int byte_44_db_record; int byte_40_cqe_ba; void* cqe_ba; int byte_24_pgsz_addr; void* cqe_nxt_blk_addr; int byte_16_hop_addr; void* cqe_cur_blk_addr; int byte_8_cqn; int byte_4_pg_ceqn; } ;
struct TYPE_3__ {scalar_t__ cqe_hop_num; int cqe_ba_pg_sz; int cqe_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct TYPE_4__ {int dma; } ;
struct hns_roce_cq {int cqn; TYPE_2__ db; scalar_t__ db_en; } ;
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
 void* FUNC_0 (int) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (struct hns_roce_v2_cq_context*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_5(struct hns_roce_dev *VAR_36,
      struct hns_roce_cq *VAR_37, void *VAR_38,
      u64 *VAR_39, dma_addr_t VAR_40, int VAR_41,
      u32 VAR_42)
{
 struct hns_roce_v2_cq_context *VAR_43;

 VAR_43 = VAR_38;
 FUNC_2(VAR_43, 0, sizeof(*VAR_43));

 FUNC_4(VAR_43->byte_4_pg_ceqn, VAR_25,
         VAR_26, VAR_35);
 FUNC_4(VAR_43->byte_4_pg_ceqn, VAR_21,
         VAR_22, VAR_5);
 FUNC_4(VAR_43->byte_4_pg_ceqn, VAR_27,
         VAR_28, FUNC_1((unsigned int)VAR_41));
 FUNC_4(VAR_43->byte_4_pg_ceqn, VAR_23,
         VAR_24, VAR_42);

 FUNC_4(VAR_43->byte_8_cqn, VAR_33,
         VAR_34, VAR_37->cqn);

 VAR_43->cqe_cur_blk_addr = FUNC_0(VAR_39[0] >> VAR_3);

 FUNC_4(VAR_43->byte_16_hop_addr,
         VAR_6,
         VAR_7,
         VAR_39[0] >> (32 + VAR_3));
 FUNC_4(VAR_43->byte_16_hop_addr,
         VAR_8,
         VAR_9, VAR_36->caps.cqe_hop_num ==
         VAR_0 ? 0 : VAR_36->caps.cqe_hop_num);

 VAR_43->cqe_nxt_blk_addr = FUNC_0(VAR_39[1] >> VAR_3);
 FUNC_4(VAR_43->byte_24_pgsz_addr,
         VAR_14,
         VAR_15,
         VAR_39[1] >> (32 + VAR_3));
 FUNC_4(VAR_43->byte_24_pgsz_addr,
         VAR_10,
         VAR_11,
         VAR_36->caps.cqe_ba_pg_sz + VAR_4);
 FUNC_4(VAR_43->byte_24_pgsz_addr,
         VAR_12,
         VAR_13,
         VAR_36->caps.cqe_buf_pg_sz + VAR_4);

 VAR_43->cqe_ba = FUNC_0(VAR_40 >> 3);

 FUNC_4(VAR_43->byte_40_cqe_ba, VAR_16,
         VAR_17, (VAR_40 >> (32 + 3)));

 if (VAR_37->db_en)
  FUNC_3(VAR_43->byte_44_db_record,
        VAR_20, 1);

 FUNC_4(VAR_43->byte_44_db_record,
         VAR_18,
         VAR_19,
         ((u32)VAR_37->db.dma) >> 1);
 VAR_43->db_record_addr = FUNC_0(VAR_37->db.dma >> 32);

 FUNC_4(VAR_43->byte_56_cqe_period_maxcnt,
         VAR_29,
         VAR_30,
         VAR_1);
 FUNC_4(VAR_43->byte_56_cqe_period_maxcnt,
         VAR_31,
         VAR_32,
         VAR_2);
}
