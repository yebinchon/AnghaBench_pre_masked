
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_fwspec {struct arm_smmu_master* iommu_priv; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct arm_smmu_master {int domain_head; int ats_enabled; struct arm_smmu_domain* domain; struct arm_smmu_device* smmu; } ;
struct arm_smmu_domain {scalar_t__ stage; int init_mutex; int devices_lock; int devices; int s1_cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct arm_smmu_master*) ;
 int FUNC_1 (struct arm_smmu_master*) ;
 int FUNC_2 (struct iommu_domain*) ;
 int FUNC_3 (struct arm_smmu_master*) ;
 int FUNC_4 (struct arm_smmu_master*) ;
 int FUNC_5 (struct arm_smmu_device*,int *) ;
 int FUNC_6 (struct device*,char*,int ,int ) ;
 struct iommu_fwspec* FUNC_7 (struct device*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int *,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,unsigned long) ;
 int FUNC_13 (int *,unsigned long) ;
 struct arm_smmu_domain* FUNC_14 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_15(struct iommu_domain *VAR_4, struct device *VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7;
 struct iommu_fwspec *VAR_8 = FUNC_7(VAR_5);
 struct arm_smmu_device *VAR_9;
 struct arm_smmu_domain *VAR_10 = FUNC_14(VAR_4);
 struct arm_smmu_master *VAR_11;

 if (!VAR_8)
  return -VAR_2;

 VAR_11 = VAR_8->iommu_priv;
 VAR_9 = VAR_11->smmu;

 FUNC_1(VAR_11);

 FUNC_10(&VAR_10->init_mutex);

 if (!VAR_10->smmu) {
  VAR_10->smmu = VAR_9;
  VAR_6 = FUNC_2(VAR_4);
  if (VAR_6) {
   VAR_10->smmu = ((void*)0);
   goto out_unlock;
  }
 } else if (VAR_10->smmu != VAR_9) {
  FUNC_6(VAR_5,
   "cannot attach to SMMU %s (upstream of %s)\n",
   FUNC_8(VAR_10->smmu->dev),
   FUNC_8(VAR_9->dev));
  VAR_6 = -VAR_3;
  goto out_unlock;
 }

 VAR_11->domain = VAR_10;

 if (VAR_10->stage != VAR_0)
  VAR_11->ats_enabled = FUNC_0(VAR_11);

 if (VAR_10->stage == VAR_1)
  FUNC_5(VAR_9, &VAR_10->s1_cfg);

 FUNC_4(VAR_11);

 FUNC_12(&VAR_10->devices_lock, VAR_7);
 FUNC_9(&VAR_11->domain_head, &VAR_10->devices);
 FUNC_13(&VAR_10->devices_lock, VAR_7);

 FUNC_3(VAR_11);

out_unlock:
 FUNC_11(&VAR_10->init_mutex);
 return VAR_6;
}
