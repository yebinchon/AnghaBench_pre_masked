
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_mpt_entry {int lkey; int byte_64_buf_pa1; int byte_12_mw_pa; int byte_8_mw_cnt_en; int byte_4_pd_hop_st; } ;
struct TYPE_2__ {scalar_t__ type; } ;
struct hns_roce_mw {scalar_t__ pdn; scalar_t__ pbl_hop_num; scalar_t__ pbl_ba_pg_sz; scalar_t__ pbl_buf_pg_sz; int rkey; TYPE_1__ ibmw; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ VAR_19 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hns_roce_v2_mpt_entry*,int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(void *VAR_20, struct hns_roce_mw *VAR_21)
{
 struct hns_roce_v2_mpt_entry *VAR_22;

 VAR_22 = VAR_20;
 FUNC_1(VAR_22, 0, sizeof(*VAR_22));

 FUNC_3(VAR_22->byte_4_pd_hop_st, VAR_7,
         VAR_8, VAR_19);
 FUNC_3(VAR_22->byte_4_pd_hop_st, VAR_13,
         VAR_14, VAR_21->pdn);
 FUNC_3(VAR_22->byte_4_pd_hop_st,
         VAR_11,
         VAR_12,
         VAR_21->pbl_hop_num == VAR_0 ?
         0 : VAR_21->pbl_hop_num);
 FUNC_3(VAR_22->byte_4_pd_hop_st,
         VAR_9,
         VAR_10,
         VAR_21->pbl_ba_pg_sz + VAR_2);

 FUNC_2(VAR_22->byte_8_mw_cnt_en, VAR_18, 1);
 FUNC_2(VAR_22->byte_8_mw_cnt_en, VAR_17, 1);

 FUNC_2(VAR_22->byte_12_mw_pa, VAR_6, 0);
 FUNC_2(VAR_22->byte_12_mw_pa, VAR_5, 1);
 FUNC_2(VAR_22->byte_12_mw_pa, VAR_3, 1);
 FUNC_2(VAR_22->byte_12_mw_pa, VAR_4,
       VAR_21->ibmw.type == VAR_1 ? 0 : 1);

 FUNC_3(VAR_22->byte_64_buf_pa1,
         VAR_15,
         VAR_16,
         VAR_21->pbl_buf_pg_sz + VAR_2);

 VAR_22->lkey = FUNC_0(VAR_21->rkey);

 return 0;
}
