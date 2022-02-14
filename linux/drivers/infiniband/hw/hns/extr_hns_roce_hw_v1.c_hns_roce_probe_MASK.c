
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct hns_roce_v1_priv {int dummy; } ;
struct hns_roce_dev {int ib_dev; int priv; struct device* dev; struct platform_device* pdev; } ;


 int FUNC_0 (unsigned long long) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct device*,char*) ;
 scalar_t__ FUNC_2 (struct device*,int ) ;
 int VAR_3 ;
 int FUNC_3 (struct hns_roce_dev*) ;
 int FUNC_4 (struct hns_roce_dev*) ;
 struct hns_roce_dev* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int VAR_4 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int,int ) ;
 int FUNC_9 (struct platform_device*,struct hns_roce_dev*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_5)
{
 int VAR_6;
 struct hns_roce_dev *VAR_7;
 struct device *VAR_8 = &VAR_5->dev;

 VAR_7 = FUNC_5(VAR_3, VAR_4);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->priv = FUNC_8(sizeof(struct hns_roce_v1_priv), VAR_2);
 if (!VAR_7->priv) {
  VAR_6 = -VAR_1;
  goto error_failed_kzalloc;
 }

 VAR_7->pdev = VAR_5;
 VAR_7->dev = VAR_8;
 FUNC_9(VAR_5, VAR_7);

 if (FUNC_2(VAR_8, FUNC_0(64ULL)) &&
     FUNC_2(VAR_8, FUNC_0(32ULL))) {
  FUNC_1(VAR_8, "Not usable DMA addressing mode\n");
  VAR_6 = -VAR_0;
  goto error_failed_get_cfg;
 }

 VAR_6 = FUNC_3(VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_8, "Get Configuration failed!\n");
  goto error_failed_get_cfg;
 }

 VAR_6 = FUNC_4(VAR_7);
 if (VAR_6) {
  FUNC_1(VAR_8, "RoCE engine init failed!\n");
  goto error_failed_get_cfg;
 }

 return 0;

error_failed_get_cfg:
 FUNC_7(VAR_7->priv);

error_failed_kzalloc:
 FUNC_6(&VAR_7->ib_dev);

 return VAR_6;
}
