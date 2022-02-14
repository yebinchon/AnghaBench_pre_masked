
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_v2_mpt_entry {void* va_h; void* va_l; void* lkey; void* len_h; void* len_l; int byte_12_mw_pa; int byte_8_mw_cnt_en; int byte_4_pd_hop_st; } ;
struct hns_roce_mr {scalar_t__ pbl_hop_num; scalar_t__ pbl_ba_pg_sz; scalar_t__ pd; int access; scalar_t__ type; int iova; int key; int size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
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
 scalar_t__ VAR_27 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_v2_mpt_entry*,int ,int) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ,int ,scalar_t__) ;
 int FUNC_5 (struct hns_roce_v2_mpt_entry*,struct hns_roce_mr*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(void *VAR_28, struct hns_roce_mr *VAR_29,
      unsigned long VAR_30)
{
 struct hns_roce_v2_mpt_entry *VAR_31;
 int VAR_32;

 VAR_31 = VAR_28;
 FUNC_2(VAR_31, 0, sizeof(*VAR_31));

 FUNC_4(VAR_31->byte_4_pd_hop_st, VAR_11,
         VAR_12, VAR_27);
 FUNC_4(VAR_31->byte_4_pd_hop_st, VAR_15,
         VAR_16, VAR_29->pbl_hop_num ==
         VAR_0 ? 0 : VAR_29->pbl_hop_num);
 FUNC_4(VAR_31->byte_4_pd_hop_st,
         VAR_13,
         VAR_14,
         VAR_29->pbl_ba_pg_sz + VAR_8);
 FUNC_4(VAR_31->byte_4_pd_hop_st, VAR_17,
         VAR_18, VAR_29->pd);

 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_23, 0);
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_26, 0);
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_22, 1);
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_20,
       (VAR_29->access & VAR_2 ? 1 : 0));
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_19,
       VAR_29->access & VAR_3 ? 1 : 0);
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_24,
       (VAR_29->access & VAR_4 ? 1 : 0));
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_25,
       (VAR_29->access & VAR_5 ? 1 : 0));
 FUNC_3(VAR_31->byte_8_mw_cnt_en, VAR_21,
       (VAR_29->access & VAR_1 ? 1 : 0));

 FUNC_3(VAR_31->byte_12_mw_pa, VAR_10,
       VAR_29->type == VAR_7 ? 0 : 1);
 FUNC_3(VAR_31->byte_12_mw_pa, VAR_9,
       1);

 VAR_31->len_l = FUNC_0(FUNC_1(VAR_29->size));
 VAR_31->len_h = FUNC_0(FUNC_6(VAR_29->size));
 VAR_31->lkey = FUNC_0(VAR_29->key);
 VAR_31->va_l = FUNC_0(FUNC_1(VAR_29->iova));
 VAR_31->va_h = FUNC_0(FUNC_6(VAR_29->iova));

 if (VAR_29->type == VAR_6)
  return 0;

 VAR_32 = FUNC_5(VAR_31, VAR_29);

 return VAR_32;
}
