
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_mpt_entry {int byte_64_buf_pa1; int byte_48_mode_ba; void* pbl_ba_l; void* pbl_size; int byte_12_mw_pa; int byte_8_mw_cnt_en; int byte_4_pd_hop_st; } ;
struct hns_roce_mr {int pbl_ba_pg_sz; int pd; int pbl_ba; int pbl_buf_pg_sz; int pbl_size; } ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct hns_roce_v2_mpt_entry*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,int) ;
 int FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(void *VAR_21, struct hns_roce_mr *VAR_22)
{
 struct hns_roce_v2_mpt_entry *VAR_23;

 VAR_23 = VAR_21;
 FUNC_2(VAR_23, 0, sizeof(*VAR_23));

 FUNC_4(VAR_23->byte_4_pd_hop_st, VAR_7,
         VAR_8, VAR_20);
 FUNC_4(VAR_23->byte_4_pd_hop_st, VAR_11,
         VAR_12, 1);
 FUNC_4(VAR_23->byte_4_pd_hop_st,
         VAR_9,
         VAR_10,
         VAR_22->pbl_ba_pg_sz + VAR_0);
 FUNC_4(VAR_23->byte_4_pd_hop_st, VAR_13,
         VAR_14, VAR_22->pd);

 FUNC_3(VAR_23->byte_8_mw_cnt_en, VAR_18, 1);
 FUNC_3(VAR_23->byte_8_mw_cnt_en, VAR_19, 1);
 FUNC_3(VAR_23->byte_8_mw_cnt_en, VAR_17, 1);

 FUNC_3(VAR_23->byte_12_mw_pa, VAR_2, 1);
 FUNC_3(VAR_23->byte_12_mw_pa, VAR_4, 0);
 FUNC_3(VAR_23->byte_12_mw_pa, VAR_3, 0);
 FUNC_3(VAR_23->byte_12_mw_pa, VAR_1, 1);

 VAR_23->pbl_size = FUNC_0(VAR_22->pbl_size);

 VAR_23->pbl_ba_l = FUNC_0(FUNC_1(VAR_22->pbl_ba >> 3));
 FUNC_4(VAR_23->byte_48_mode_ba, VAR_5,
         VAR_6,
         FUNC_5(VAR_22->pbl_ba >> 3));

 FUNC_4(VAR_23->byte_64_buf_pa1,
         VAR_15,
         VAR_16,
         VAR_22->pbl_buf_pg_sz + VAR_0);

 return 0;
}
