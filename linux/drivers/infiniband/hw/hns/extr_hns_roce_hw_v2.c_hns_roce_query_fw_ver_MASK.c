
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct hns_roce_query_fw_info {int fw_ver; } ;
struct TYPE_2__ {scalar_t__ fw_ver; } ;
struct hns_roce_dev {TYPE_1__ caps; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_cmq_desc*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_query_fw_info *VAR_2;
 struct hns_roce_cmq_desc VAR_3;
 int VAR_4;

 FUNC_1(&VAR_3, VAR_0, 1);
 VAR_4 = FUNC_0(VAR_1, &VAR_3, 1);
 if (VAR_4)
  return VAR_4;

 VAR_2 = (struct hns_roce_query_fw_info *)VAR_3.data;
 VAR_1->caps.fw_ver = (u64)(FUNC_2(VAR_2->fw_ver));

 return 0;
}
