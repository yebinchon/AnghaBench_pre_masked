
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
struct hns_roce_cfg_smac_tb {int vf_smac_l; int vf_smac_h_rsv; int tb_idx_rsv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_2 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_3 (struct hns_roce_cfg_smac_tb*,int ,int) ;
 int FUNC_4 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_5(struct hns_roce_dev *VAR_5, u8 VAR_6,
          u8 *VAR_7)
{
 struct hns_roce_cmq_desc VAR_8;
 struct hns_roce_cfg_smac_tb *VAR_9 =
        (struct hns_roce_cfg_smac_tb *)VAR_8.data;
 u16 VAR_10;
 u32 VAR_11;

 FUNC_2(&VAR_8, VAR_4, 0);

 VAR_11 = *(u32 *)(&VAR_7[0]);
 VAR_10 = *(u16 *)(&VAR_7[4]);

 FUNC_3(VAR_9, 0, sizeof(*VAR_9));
 FUNC_4(VAR_9->tb_idx_rsv,
         VAR_0,
         VAR_1, VAR_6);
 FUNC_4(VAR_9->vf_smac_h_rsv,
         VAR_2,
         VAR_3, VAR_10);
 VAR_9->vf_smac_l = FUNC_0(VAR_11);

 return FUNC_1(VAR_5, &VAR_8, 1);
}
