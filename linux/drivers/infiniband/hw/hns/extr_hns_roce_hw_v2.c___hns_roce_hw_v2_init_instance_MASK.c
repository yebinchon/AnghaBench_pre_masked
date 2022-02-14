
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hns_roce_v2_priv {int dummy; } ;
struct hns_roce_dev {int ib_dev; int priv; int * dev; TYPE_1__* pci_dev; } ;
struct hnae3_handle {struct hns_roce_dev* priv; TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*) ;
 int VAR_2 ;
 int FUNC_1 (struct hns_roce_dev*,struct hnae3_handle*) ;
 int FUNC_2 (struct hns_roce_dev*) ;
 struct hns_roce_dev* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct hnae3_handle *VAR_4)
{
 struct hns_roce_dev *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_3(VAR_2, VAR_3);
 if (!VAR_5)
  return -VAR_0;

 VAR_5->priv = FUNC_6(sizeof(struct hns_roce_v2_priv), VAR_1);
 if (!VAR_5->priv) {
  VAR_6 = -VAR_0;
  goto error_failed_kzalloc;
 }

 VAR_5->pci_dev = VAR_4->pdev;
 VAR_5->dev = &VAR_4->pdev->dev;

 VAR_6 = FUNC_1(VAR_5, VAR_4);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "Get Configuration failed!\n");
  goto error_failed_get_cfg;
 }

 VAR_6 = FUNC_2(VAR_5);
 if (VAR_6) {
  FUNC_0(VAR_5->dev, "RoCE Engine init failed!\n");
  goto error_failed_get_cfg;
 }

 VAR_4->priv = VAR_5;

 return 0;

error_failed_get_cfg:
 FUNC_5(VAR_5->priv);

error_failed_kzalloc:
 FUNC_4(&VAR_5->ib_dev);

 return VAR_6;
}
