
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct hns_roce_dev {TYPE_1__* pdev; } ;
struct device {int dummy; } ;
typedef int __le32 ;
struct TYPE_2__ {struct device dev; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (struct device*,char*) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 int FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*) ;
 int FUNC_5 (struct hns_roce_dev*) ;
 int FUNC_6 (struct hns_roce_dev*) ;
 int FUNC_7 (struct hns_roce_dev*,int ) ;
 int FUNC_8 (struct hns_roce_dev*) ;
 int FUNC_9 (struct hns_roce_dev*) ;
 int FUNC_10 (struct hns_roce_dev*) ;
 int FUNC_11 (struct hns_roce_dev*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct hns_roce_dev*,int ) ;
 int FUNC_14 (int ,int ,int ,int) ;
 int FUNC_15 (struct hns_roce_dev*,int ,int ) ;

__attribute__((used)) static int FUNC_16(struct hns_roce_dev *VAR_12)
{
 int VAR_13;
 u32 VAR_14;
 __le32 VAR_15;
 struct device *VAR_16 = &VAR_12->pdev->dev;


 VAR_14 = FUNC_13(VAR_12, VAR_2);
 VAR_15 = FUNC_0(VAR_14);
 FUNC_14(VAR_15, VAR_3,
         VAR_4, 0xf);
 FUNC_14(VAR_15, VAR_5,
         VAR_6,
         1 << VAR_1);
 VAR_14 = FUNC_12(VAR_15);
 FUNC_15(VAR_12, VAR_2, VAR_14);

 VAR_14 = FUNC_13(VAR_12, VAR_7);
 VAR_15 = FUNC_0(VAR_14);
 FUNC_14(VAR_15, VAR_8,
         VAR_9, 0xf);
 FUNC_14(VAR_15, VAR_10,
         VAR_11,
         1 << VAR_1);

 VAR_13 = FUNC_5(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_16, "doorbell init failed!\n");
  return VAR_13;
 }

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_16, "raq init failed!\n");
  goto error_failed_raq_init;
 }

 VAR_13 = FUNC_3(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_16, "bt init failed!\n");
  goto error_failed_bt_init;
 }

 VAR_13 = FUNC_11(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_16, "tptr init failed!\n");
  goto error_failed_tptr_init;
 }

 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13) {
  FUNC_1(VAR_16, "free mr init failed!\n");
  goto error_failed_free_mr_init;
 }

 FUNC_7(VAR_12, VAR_0);

 return 0;

error_failed_free_mr_init:
 FUNC_10(VAR_12);

error_failed_tptr_init:
 FUNC_2(VAR_12);

error_failed_bt_init:
 FUNC_8(VAR_12);

error_failed_raq_init:
 FUNC_4(VAR_12);
 return VAR_13;
}
