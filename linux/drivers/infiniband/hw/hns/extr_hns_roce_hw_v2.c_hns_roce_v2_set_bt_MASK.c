
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {scalar_t__ srqc_hop_num; scalar_t__ qpc_hop_num; scalar_t__ cqc_hop_num; scalar_t__ mpt_hop_num; scalar_t__ sccc_hop_num; scalar_t__ qpc_ba_pg_sz; scalar_t__ qpc_buf_pg_sz; scalar_t__ srqc_ba_pg_sz; scalar_t__ srqc_buf_pg_sz; scalar_t__ cqc_ba_pg_sz; scalar_t__ cqc_buf_pg_sz; scalar_t__ mpt_ba_pg_sz; scalar_t__ mpt_buf_pg_sz; scalar_t__ sccc_ba_pg_sz; scalar_t__ sccc_buf_pg_sz; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
struct hns_roce_cfg_bt_attr {int vf_sccc_cfg; int vf_mpt_cfg; int vf_cqc_cfg; int vf_srqc_cfg; int vf_qpc_cfg; } ;


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
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_2 (struct hns_roce_cfg_bt_attr*,int ,int) ;
 int FUNC_3 (int ,int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_33)
{
 u8 VAR_34 = VAR_33->caps.srqc_hop_num;
 u8 VAR_35 = VAR_33->caps.qpc_hop_num;
 u8 VAR_36 = VAR_33->caps.cqc_hop_num;
 u8 VAR_37 = VAR_33->caps.mpt_hop_num;
 u8 VAR_38 = VAR_33->caps.sccc_hop_num;
 struct hns_roce_cfg_bt_attr *VAR_39;
 struct hns_roce_cmq_desc VAR_40;

 FUNC_1(&VAR_40, VAR_31, 0);
 VAR_39 = (struct hns_roce_cfg_bt_attr *)VAR_40.data;
 FUNC_2(VAR_39, 0, sizeof(*VAR_39));

 FUNC_3(VAR_39->vf_qpc_cfg, VAR_0,
         VAR_1,
         VAR_33->caps.qpc_ba_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_qpc_cfg, VAR_2,
         VAR_3,
         VAR_33->caps.qpc_buf_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_qpc_cfg, VAR_4,
         VAR_5,
         VAR_35 == VAR_30 ? 0 : VAR_35);

 FUNC_3(VAR_39->vf_srqc_cfg, VAR_6,
         VAR_7,
         VAR_33->caps.srqc_ba_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_srqc_cfg, VAR_8,
         VAR_9,
         VAR_33->caps.srqc_buf_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_srqc_cfg, VAR_10,
         VAR_11,
         VAR_34 == VAR_30 ? 0 : VAR_34);

 FUNC_3(VAR_39->vf_cqc_cfg, VAR_12,
         VAR_13,
         VAR_33->caps.cqc_ba_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_cqc_cfg, VAR_14,
         VAR_15,
         VAR_33->caps.cqc_buf_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_cqc_cfg, VAR_16,
         VAR_17,
         VAR_36 == VAR_30 ? 0 : VAR_36);

 FUNC_3(VAR_39->vf_mpt_cfg, VAR_18,
         VAR_19,
         VAR_33->caps.mpt_ba_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_mpt_cfg, VAR_20,
         VAR_21,
         VAR_33->caps.mpt_buf_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_mpt_cfg, VAR_22,
         VAR_23,
         VAR_37 == VAR_30 ? 0 : VAR_37);

 FUNC_3(VAR_39->vf_sccc_cfg,
         VAR_24,
         VAR_25,
         VAR_33->caps.sccc_ba_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_sccc_cfg,
         VAR_26,
         VAR_27,
         VAR_33->caps.sccc_buf_pg_sz + VAR_32);
 FUNC_3(VAR_39->vf_sccc_cfg,
         VAR_28,
         VAR_29,
         VAR_38 ==
         VAR_30 ? 0 : VAR_38);

 return FUNC_0(VAR_33, &VAR_40, 1);
}
