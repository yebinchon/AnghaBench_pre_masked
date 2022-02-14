
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hns_roce_mbox_status {int mb_status_hw_run; } ;
struct hns_roce_dev {int dummy; } ;
struct hns_roce_cmq_desc {scalar_t__ data; } ;
typedef enum hns_roce_cmd_return_status { ____Placeholder_hns_roce_cmd_return_status } hns_roce_cmd_return_status ;


 int VAR_0 ;
 int FUNC_0 (struct hns_roce_dev*,struct hns_roce_cmq_desc*,int) ;
 int FUNC_1 (struct hns_roce_cmq_desc*,int ,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct hns_roce_dev *VAR_1)
{
 struct hns_roce_cmq_desc VAR_2;
 struct hns_roce_mbox_status *VAR_3 =
           (struct hns_roce_mbox_status *)VAR_2.data;
 enum hns_roce_cmd_return_status VAR_4;

 FUNC_1(&VAR_2, VAR_0, 1);

 VAR_4 = FUNC_0(VAR_1, &VAR_2, 1);
 if (VAR_4)
  return VAR_4;

 return FUNC_2(VAR_3->mb_status_hw_run);
}
