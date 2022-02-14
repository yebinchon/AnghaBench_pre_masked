
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ib_gid {int * raw; } ;
typedef int u32 ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
struct hns_roce_cfg_sgid_tb {void* vf_sgid_h; void* vf_sgid_mh; void* vf_sgid_ml; void* vf_sgid_l; int vf_sgid_type_rsv; int table_idx_rsv; } ;
typedef enum hns_roce_sgid_type { ____Placeholder_hns_roce_sgid_type } hns_roce_sgid_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (int ) ;
 int FUNC_1 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_2 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_3 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_4(struct hns_roce_dev *VAR_5,
          int VAR_6, const union ib_gid *VAR_7,
          enum hns_roce_sgid_type VAR_8)
{
 struct hns_roce_cmq_desc VAR_9;
 struct hns_roce_cfg_sgid_tb *VAR_10 =
        (struct hns_roce_cfg_sgid_tb *)VAR_9.data;
 u32 *VAR_11;

 FUNC_2(&VAR_9, VAR_4, 0);

 FUNC_3(VAR_10->table_idx_rsv,
         VAR_0,
         VAR_1, VAR_6);
 FUNC_3(VAR_10->vf_sgid_type_rsv,
         VAR_2,
         VAR_3, VAR_8);

 VAR_11 = (u32 *)&VAR_7->raw[0];
 VAR_10->vf_sgid_l = FUNC_0(*VAR_11);

 VAR_11 = (u32 *)&VAR_7->raw[4];
 VAR_10->vf_sgid_ml = FUNC_0(*VAR_11);

 VAR_11 = (u32 *)&VAR_7->raw[8];
 VAR_10->vf_sgid_mh = FUNC_0(*VAR_11);

 VAR_11 = (u32 *)&VAR_7->raw[0xc];
 VAR_10->vf_sgid_h = FUNC_0(*VAR_11);

 return FUNC_1(VAR_5, &VAR_9, 1);
}
