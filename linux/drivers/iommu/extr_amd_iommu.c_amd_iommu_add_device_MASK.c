
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {scalar_t__ type; } ;
struct iommu_dev_data {int passthrough; scalar_t__ iommu_v2; } ;
struct device {int * dma_ops; } ;
struct amd_iommu {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct amd_iommu** VAR_3 ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,char*) ;
 struct iommu_dev_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct amd_iommu*) ;
 struct iommu_domain* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4)
{
 struct iommu_dev_data *VAR_5;
 struct iommu_domain *VAR_6;
 struct amd_iommu *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_1(VAR_4) || FUNC_3(VAR_4))
  return 0;

 VAR_9 = FUNC_4(VAR_4);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_7 = VAR_3[VAR_9];

 VAR_8 = FUNC_9(VAR_4);
 if (VAR_8) {
  if (VAR_8 != -VAR_0)
   FUNC_2(VAR_4, "Failed to initialize - trying to proceed anyway\n");

  FUNC_8(VAR_4);
  VAR_4->dma_ops = ((void*)0);
  goto out;
 }
 FUNC_5(VAR_4);

 VAR_5 = FUNC_3(VAR_4);

 FUNC_0(!VAR_5);

 if (VAR_5->iommu_v2)
  FUNC_10(VAR_4);


 VAR_6 = FUNC_7(VAR_4);
 if (VAR_6->type == VAR_1)
  VAR_5->passthrough = 1;
 else
  VAR_4->dma_ops = &VAR_2;

out:
 FUNC_6(VAR_7);

 return 0;
}
