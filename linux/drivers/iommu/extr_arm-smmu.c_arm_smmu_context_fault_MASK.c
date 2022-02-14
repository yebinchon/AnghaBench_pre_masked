
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct iommu_domain {int dummy; } ;
struct TYPE_2__ {int cbndx; } ;
struct arm_smmu_domain {TYPE_1__ cfg; struct arm_smmu_device* smmu; } ;
struct arm_smmu_device {int dev; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct arm_smmu_device*,int,int ) ;
 unsigned long FUNC_2 (struct arm_smmu_device*,int,int ) ;
 int FUNC_3 (struct arm_smmu_device*,int,int ,int) ;
 int FUNC_4 (struct arm_smmu_device*,int ) ;
 int FUNC_5 (int ,char*,int,unsigned long,int,int,int) ;
 struct arm_smmu_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_6, void *VAR_7)
{
 u32 VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;
 struct iommu_domain *VAR_12 = VAR_7;
 struct arm_smmu_domain *VAR_13 = FUNC_6(VAR_12);
 struct arm_smmu_device *VAR_14 = VAR_13->smmu;
 int VAR_15 = VAR_13->cfg.cbndx;

 VAR_8 = FUNC_1(VAR_14, VAR_15, VAR_1);
 if (!(VAR_8 & VAR_3))
  return VAR_5;

 VAR_9 = FUNC_1(VAR_14, VAR_15, VAR_2);
 VAR_11 = FUNC_2(VAR_14, VAR_15, VAR_0);
 VAR_10 = FUNC_4(VAR_14, FUNC_0(VAR_15));

 FUNC_5(VAR_14->dev,
 "Unhandled context fault: fsr=0x%x, iova=0x%08lx, fsynr=0x%x, cbfrsynra=0x%x, cb=%d\n",
       VAR_8, VAR_11, VAR_9, VAR_10, VAR_15);

 FUNC_3(VAR_14, VAR_15, VAR_1, VAR_8);
 return VAR_4;
}
