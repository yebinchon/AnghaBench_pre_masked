
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_device {struct iommu_group* mapping; struct device* dev; } ;
struct iommu_group {int dummy; } ;
typedef struct iommu_group dma_iommu_mapping ;
struct device {int dummy; } ;


 scalar_t__ FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct device*,struct iommu_group*) ;
 struct iommu_group* FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (struct iommu_group*) ;
 int FUNC_5 (struct device*,char*) ;
 int FUNC_6 (struct iommu_group*,struct device*) ;
 struct iommu_group* FUNC_7 () ;
 int FUNC_8 (struct iommu_group*) ;
 int FUNC_9 (struct device*) ;
 int VAR_2 ;
 struct ipmmu_vmsa_device* FUNC_10 (struct device*) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_3)
{
 struct ipmmu_vmsa_device *VAR_4 = FUNC_10(VAR_3);
 struct iommu_group *VAR_5;
 int VAR_6;


 VAR_5 = FUNC_7();
 if (FUNC_0(VAR_5)) {
  FUNC_5(VAR_3, "Failed to allocate IOMMU group\n");
  return FUNC_1(VAR_5);
 }

 VAR_6 = FUNC_6(VAR_5, VAR_3);
 FUNC_8(VAR_5);

 if (VAR_6 < 0) {
  FUNC_5(VAR_3, "Failed to add device to IPMMU group\n");
  return VAR_6;
 }
 if (!VAR_4->mapping) {
  struct dma_iommu_mapping *VAR_7;

  VAR_7 = FUNC_3(&VAR_2,
         VAR_0, VAR_1);
  if (FUNC_0(VAR_7)) {
   FUNC_5(VAR_4->dev, "failed to create ARM IOMMU mapping\n");
   VAR_6 = FUNC_1(VAR_7);
   goto error;
  }

  VAR_4->mapping = VAR_7;
 }


 VAR_6 = FUNC_2(VAR_3, VAR_4->mapping);
 if (VAR_6 < 0) {
  FUNC_5(VAR_3, "Failed to attach device to VA mapping\n");
  goto error;
 }

 return 0;

error:
 FUNC_9(VAR_3);
 if (VAR_4->mapping)
  FUNC_4(VAR_4->mapping);

 return VAR_6;
}
