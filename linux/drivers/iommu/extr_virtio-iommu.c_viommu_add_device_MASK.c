
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viommu_endpoint {int resv_regions; struct viommu_dev* viommu; struct device* dev; } ;
struct viommu_dev {int iommu; scalar_t__ probe_size; } ;
struct iommu_group {int dummy; } ;
struct iommu_fwspec {struct viommu_endpoint* iommu_priv; int iommu_fwnode; int * ops; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;
 int FUNC_3 (struct iommu_group*) ;
 struct iommu_fwspec* FUNC_4 (struct device*) ;
 int FUNC_5 (int *,struct device*) ;
 int FUNC_6 (int *,struct device*) ;
 struct iommu_group* FUNC_7 (struct device*) ;
 int FUNC_8 (struct iommu_group*) ;
 int FUNC_9 (struct viommu_endpoint*) ;
 struct viommu_endpoint* FUNC_10 (int,int ) ;
 struct viommu_dev* FUNC_11 (int ) ;
 int VAR_3 ;
 int FUNC_12 (struct viommu_dev*,struct device*) ;
 int FUNC_13 (struct device*,int *) ;

__attribute__((used)) static int FUNC_14(struct device *VAR_4)
{
 int VAR_5;
 struct iommu_group *VAR_6;
 struct viommu_endpoint *VAR_7;
 struct viommu_dev *VAR_8 = ((void*)0);
 struct iommu_fwspec *VAR_9 = FUNC_4(VAR_4);

 if (!VAR_9 || VAR_9->ops != &VAR_3)
  return -VAR_0;

 VAR_8 = FUNC_11(VAR_9->iommu_fwnode);
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_10(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dev = VAR_4;
 VAR_7->viommu = VAR_8;
 FUNC_0(&VAR_7->resv_regions);
 VAR_9->iommu_priv = VAR_7;

 if (VAR_8->probe_size) {

  VAR_5 = FUNC_12(VAR_8, VAR_4);
  if (VAR_5)
   goto err_free_dev;
 }

 VAR_5 = FUNC_5(&VAR_8->iommu, VAR_4);
 if (VAR_5)
  goto err_free_dev;





 VAR_6 = FUNC_7(VAR_4);
 if (FUNC_1(VAR_6)) {
  VAR_5 = FUNC_2(VAR_6);
  goto err_unlink_dev;
 }

 FUNC_8(VAR_6);

 return FUNC_3(VAR_6);

err_unlink_dev:
 FUNC_6(&VAR_8->iommu, VAR_4);
err_free_dev:
 FUNC_13(VAR_4, &VAR_7->resv_regions);
 FUNC_9(VAR_7);

 return VAR_5;
}
