
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {int combined_irq; int features; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*,int,int ,int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int,int ,int ,int ,char*,struct arm_smmu_device*) ;

__attribute__((used)) static int FUNC_5(struct arm_smmu_device *VAR_9)
{
 int VAR_10, VAR_11;
 u32 VAR_12 = VAR_4 | VAR_5;


 VAR_10 = FUNC_1(VAR_9, 0, VAR_1,
          VAR_2);
 if (VAR_10) {
  FUNC_2(VAR_9->dev, "failed to disable irqs\n");
  return VAR_10;
 }

 VAR_11 = VAR_9->combined_irq;
 if (VAR_11) {




  VAR_10 = FUNC_4(VAR_9->dev, VAR_11,
     VAR_7,
     VAR_8,
     VAR_3,
     "arm-smmu-v3-combined-irq", VAR_9);
  if (VAR_10 < 0)
   FUNC_3(VAR_9->dev, "failed to enable combined irq\n");
 } else
  FUNC_0(VAR_9);

 if (VAR_9->features & VAR_0)
  VAR_12 |= VAR_6;


 VAR_10 = FUNC_1(VAR_9, VAR_12,
          VAR_1, VAR_2);
 if (VAR_10)
  FUNC_3(VAR_9->dev, "failed to enable irqs\n");

 return 0;
}
