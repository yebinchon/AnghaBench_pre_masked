
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct iommu_group {int dummy; } ;
struct iommu_fwspec {int num_ids; struct arm_smmu_master* iommu_priv; int * ids; int iommu_fwnode; int * ops; } ;
struct device {int dummy; } ;
struct arm_smmu_master {int num_sids; int * sids; struct arm_smmu_device* smmu; struct device* dev; } ;
struct arm_smmu_device {int features; int iommu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 scalar_t__ FUNC_2 (struct arm_smmu_master*) ;
 struct arm_smmu_device* FUNC_3 (int ) ;
 int FUNC_4 (struct arm_smmu_device*,int ) ;
 int VAR_5 ;
 int FUNC_5 (struct arm_smmu_device*,int ) ;
 struct iommu_fwspec* FUNC_6 (struct device*) ;
 int FUNC_7 (int *,struct device*) ;
 struct iommu_group* FUNC_8 (struct device*) ;
 int FUNC_9 (struct iommu_group*) ;
 struct arm_smmu_master* FUNC_10 (int,int ) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_6)
{
 int VAR_7, VAR_8;
 struct arm_smmu_device *VAR_9;
 struct arm_smmu_master *VAR_10;
 struct iommu_fwspec *VAR_11 = FUNC_6(VAR_6);
 struct iommu_group *VAR_12;

 if (!VAR_11 || VAR_11->ops != &VAR_5)
  return -VAR_1;





 if (FUNC_2(VAR_11->iommu_priv)) {
  VAR_10 = VAR_11->iommu_priv;
  VAR_9 = VAR_10->smmu;
 } else {
  VAR_9 = FUNC_3(VAR_11->iommu_fwnode);
  if (!VAR_9)
   return -VAR_1;
  VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_4);
  if (!VAR_10)
   return -VAR_2;

  VAR_10->dev = VAR_6;
  VAR_10->smmu = VAR_9;
  VAR_10->sids = VAR_11->ids;
  VAR_10->num_sids = VAR_11->num_ids;
  VAR_11->iommu_priv = VAR_10;
 }


 for (VAR_7 = 0; VAR_7 < VAR_10->num_sids; VAR_7++) {
  u32 VAR_13 = VAR_10->sids[VAR_7];

  if (!FUNC_5(VAR_9, VAR_13))
   return -VAR_3;


  if (VAR_9->features & VAR_0) {
   VAR_8 = FUNC_4(VAR_9, VAR_13);
   if (VAR_8)
    return VAR_8;
  }
 }

 VAR_12 = FUNC_8(VAR_6);
 if (!FUNC_0(VAR_12)) {
  FUNC_9(VAR_12);
  FUNC_7(&VAR_9->iommu, VAR_6);
 }

 return FUNC_1(VAR_12);
}
