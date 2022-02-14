
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u64 ;
typedef int u32 ;
struct hns_roce_v2_mpt_entry {void* len_h; void* len_l; void* va_h; void* va_l; int byte_8_mw_cnt_en; int byte_4_pd_hop_st; } ;
struct hns_roce_mr {void* size; void* iova; int pd; } ;
struct hns_roce_dev {int dummy; } ;


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
 void* FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct hns_roce_v2_mpt_entry*,struct hns_roce_mr*) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_18,
     struct hns_roce_mr *VAR_19, int VAR_20,
     u32 VAR_21, int VAR_22, u64 VAR_23,
     u64 VAR_24, void *VAR_25)
{
 struct hns_roce_v2_mpt_entry *VAR_26 = VAR_25;
 int VAR_27 = 0;

 FUNC_3(VAR_26->byte_4_pd_hop_st, VAR_8,
         VAR_9, VAR_17);

 if (VAR_20 & VAR_6) {
  FUNC_3(VAR_26->byte_4_pd_hop_st, VAR_10,
          VAR_11, VAR_21);
  VAR_19->pd = VAR_21;
 }

 if (VAR_20 & VAR_5) {
  FUNC_2(VAR_26->byte_8_mw_cnt_en,
        VAR_13,
        (VAR_22 & VAR_1 ? 1 : 0));
  FUNC_2(VAR_26->byte_8_mw_cnt_en,
        VAR_12,
        VAR_22 & VAR_2 ? 1 : 0);
  FUNC_2(VAR_26->byte_8_mw_cnt_en, VAR_15,
        VAR_22 & VAR_3 ? 1 : 0);
  FUNC_2(VAR_26->byte_8_mw_cnt_en, VAR_16,
        VAR_22 & VAR_4 ? 1 : 0);
  FUNC_2(VAR_26->byte_8_mw_cnt_en, VAR_14,
        VAR_22 & VAR_0 ? 1 : 0);
 }

 if (VAR_20 & VAR_7) {
  VAR_26->va_l = FUNC_0(FUNC_1(VAR_23));
  VAR_26->va_h = FUNC_0(FUNC_5(VAR_23));
  VAR_26->len_l = FUNC_0(FUNC_1(VAR_24));
  VAR_26->len_h = FUNC_0(FUNC_5(VAR_24));

  VAR_19->iova = VAR_23;
  VAR_19->size = VAR_24;

  VAR_27 = FUNC_4(VAR_26, VAR_19);
 }

 return VAR_27;
}
