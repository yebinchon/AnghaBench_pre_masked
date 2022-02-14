
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iommu_ops {int dummy; } ;
struct device {int dummy; } ;
typedef enum dev_dma_attr { ____Placeholder_dev_dma_attr } dev_dma_attr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct iommu_ops const*) ;
 int FUNC_1 (struct iommu_ops const*) ;
 int FUNC_2 (struct device*,int ,int ,struct iommu_ops const*,int) ;
 int VAR_3 ;
 int FUNC_3 (struct device*,int *,int *) ;
 struct iommu_ops* FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,int *) ;

int FUNC_6(struct device *VAR_4, enum dev_dma_attr VAR_5)
{
 const struct iommu_ops *VAR_6;
 u64 VAR_7 = 0, VAR_8 = 0;

 if (VAR_5 == VAR_1) {
  FUNC_5(VAR_4, &VAR_3);
  return 0;
 }

 FUNC_3(VAR_4, &VAR_7, &VAR_8);

 VAR_6 = FUNC_4(VAR_4);
 if (FUNC_0(VAR_6) && FUNC_1(VAR_6) == -VAR_2)
  return -VAR_2;

 FUNC_2(VAR_4, VAR_7, VAR_8,
    VAR_6, VAR_5 == VAR_0);

 return 0;
}
