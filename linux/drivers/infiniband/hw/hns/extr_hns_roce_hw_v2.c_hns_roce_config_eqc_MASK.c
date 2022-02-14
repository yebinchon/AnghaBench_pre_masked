
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct hns_roce_eq_context {int nxt_eqe_ba1; int nxt_eqe_ba0; int byte_36; int byte_32; int byte_28; int eqe_ba1; int eqe_ba0; int eqe_report_timer; int byte_12; int byte_8; int byte_4; } ;
struct hns_roce_eq {int hop_num; int over_ignore; int coalesce; int arm_st; int eqe_ba_pg_sz; int eqe_buf_pg_sz; int shift; int eqe_ba; int l0_dma; int eqn; int eq_max_cnt; int eq_period; int cur_eqe_ba; int nxt_eqe_ba; TYPE_2__* buf_list; scalar_t__ entries; scalar_t__ cons_index; scalar_t__ doorbell; } ;
struct TYPE_3__ {int eqe_hop_num; int eqe_ba_pg_sz; int eqe_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; scalar_t__ reg_base; } ;
struct TYPE_4__ {int map; } ;


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
 scalar_t__ VAR_56 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct hns_roce_eq_context*,int ,int) ;
 int FUNC_2 (int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct hns_roce_dev *VAR_57,
    struct hns_roce_eq *VAR_58,
    void *VAR_59)
{
 struct hns_roce_eq_context *VAR_60;

 VAR_60 = VAR_59;
 FUNC_1(VAR_60, 0, sizeof(struct hns_roce_eq_context));


 VAR_58->doorbell = VAR_57->reg_base + VAR_56;
 VAR_58->hop_num = VAR_57->caps.eqe_hop_num;
 VAR_58->cons_index = 0;
 VAR_58->over_ignore = VAR_53;
 VAR_58->coalesce = VAR_52;
 VAR_58->arm_st = VAR_51;
 VAR_58->eqe_ba_pg_sz = VAR_57->caps.eqe_ba_pg_sz;
 VAR_58->eqe_buf_pg_sz = VAR_57->caps.eqe_buf_pg_sz;
 VAR_58->shift = FUNC_0((unsigned int)VAR_58->entries);

 if (!VAR_58->hop_num)
  VAR_58->eqe_ba = VAR_58->buf_list->map;
 else
  VAR_58->eqe_ba = VAR_58->l0_dma;


 FUNC_2(VAR_60->byte_4,
         VAR_24,
         VAR_25,
         VAR_54);


 FUNC_2(VAR_60->byte_4,
         VAR_26,
         VAR_27, VAR_58->hop_num);


 FUNC_2(VAR_60->byte_4,
         VAR_36,
         VAR_37, VAR_58->over_ignore);


 FUNC_2(VAR_60->byte_4,
         VAR_6,
         VAR_7, VAR_58->coalesce);


 FUNC_2(VAR_60->byte_4,
         VAR_0,
         VAR_1, VAR_58->arm_st);


 FUNC_2(VAR_60->byte_4,
         VAR_22,
         VAR_23, VAR_58->eqn);


 FUNC_2(VAR_60->byte_4,
         VAR_20,
         VAR_21,
         VAR_47);


 FUNC_2(VAR_60->byte_8,
         VAR_2,
         VAR_3,
         VAR_58->eqe_ba_pg_sz + VAR_55);


 FUNC_2(VAR_60->byte_8,
         VAR_4,
         VAR_5,
         VAR_58->eqe_buf_pg_sz + VAR_55);


 FUNC_2(VAR_60->byte_8,
         VAR_40,
         VAR_41,
         VAR_49);


 FUNC_2(VAR_60->byte_12,
         VAR_28,
         VAR_29, VAR_58->eq_max_cnt);


 FUNC_2(VAR_60->byte_12,
         VAR_38,
         VAR_39, VAR_58->eq_period);


 FUNC_2(VAR_60->eqe_report_timer,
         VAR_42,
         VAR_43,
         VAR_50);


 FUNC_2(VAR_60->eqe_ba0,
         VAR_18,
         VAR_19, VAR_58->eqe_ba >> 3);


 FUNC_2(VAR_60->eqe_ba1,
         VAR_16,
         VAR_17, VAR_58->eqe_ba >> 35);


 FUNC_2(VAR_60->byte_28,
         VAR_44,
         VAR_45, VAR_58->shift);


 FUNC_2(VAR_60->byte_28,
         VAR_30,
         VAR_31,
         VAR_48);


 FUNC_2(VAR_60->byte_28,
         VAR_12,
         VAR_13, VAR_58->cur_eqe_ba >> 12);


 FUNC_2(VAR_60->byte_32,
         VAR_14,
         VAR_15, VAR_58->cur_eqe_ba >> 28);


 FUNC_2(VAR_60->byte_36,
         VAR_10,
         VAR_11, VAR_58->cur_eqe_ba >> 60);


 FUNC_2(VAR_60->byte_36,
         VAR_8,
         VAR_9,
         VAR_46);


 FUNC_2(VAR_60->nxt_eqe_ba0,
         VAR_34,
         VAR_35, VAR_58->nxt_eqe_ba >> 12);


 FUNC_2(VAR_60->nxt_eqe_ba1,
         VAR_32,
         VAR_33, VAR_58->nxt_eqe_ba >> 44);
}
