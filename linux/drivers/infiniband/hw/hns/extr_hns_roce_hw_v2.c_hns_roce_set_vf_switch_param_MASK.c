
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_vf_switch {int cfg; int fun_id; int rocee_sel; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {int flag; scalar_t__ data; } ;


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
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_3 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_6(struct hns_roce_dev *VAR_10,
        int VAR_11)
{
 struct hns_roce_cmq_desc VAR_12;
 struct hns_roce_vf_switch *VAR_13;
 int VAR_14;

 VAR_13 = (struct hns_roce_vf_switch *)VAR_12.data;
 FUNC_3(&VAR_12, VAR_4, 1);
 VAR_13->rocee_sel |= FUNC_1(VAR_0);
 FUNC_5(VAR_13->fun_id,
   VAR_8,
   VAR_9,
   VAR_11);
 VAR_14 = FUNC_2(VAR_10, &VAR_12, 1);
 if (VAR_14)
  return VAR_14;
 VAR_12.flag =
  FUNC_0(VAR_2 | VAR_1);
 VAR_12.flag &= FUNC_0(~VAR_3);
 FUNC_4(VAR_13->cfg, VAR_7, 1);
 FUNC_4(VAR_13->cfg, VAR_6, 0);
 FUNC_4(VAR_13->cfg, VAR_5, 1);

 return FUNC_2(VAR_10, &VAR_12, 1);
}
