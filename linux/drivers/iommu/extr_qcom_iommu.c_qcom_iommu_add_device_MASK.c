
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qcom_iommu_dev {int iommu; struct device* dev; } ;
struct iommu_group {int dummy; } ;
struct device_link {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct device*,char*,int ,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 struct device_link* FUNC_5 (struct device*,struct device*,int ) ;
 int FUNC_6 (int *,struct device*) ;
 struct iommu_group* FUNC_7 (struct device*) ;
 int FUNC_8 (struct iommu_group*) ;
 struct qcom_iommu_dev* FUNC_9 (int ) ;

__attribute__((used)) static int FUNC_10(struct device *VAR_2)
{
 struct qcom_iommu_dev *VAR_3 = FUNC_9(FUNC_3(VAR_2));
 struct iommu_group *VAR_4;
 struct device_link *VAR_5;

 if (!VAR_3)
  return -VAR_1;






 VAR_5 = FUNC_5(VAR_2, VAR_3->dev, VAR_0);
 if (!VAR_5) {
  FUNC_2(VAR_3->dev, "Unable to create device link between %s and %s\n",
   FUNC_4(VAR_3->dev), FUNC_4(VAR_2));
  return -VAR_1;
 }

 VAR_4 = FUNC_7(VAR_2);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 FUNC_8(VAR_4);
 FUNC_6(&VAR_3->iommu, VAR_2);

 return 0;
}
