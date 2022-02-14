
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct arm_smmu_device {scalar_t__ base; int dev; } ;
typedef int irqreturn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct arm_smmu_device*) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int,scalar_t__) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_13, void *VAR_14)
{
 u32 VAR_15, VAR_16, VAR_17;
 struct arm_smmu_device *VAR_18 = VAR_14;

 VAR_15 = FUNC_4(VAR_18->base + VAR_0);
 VAR_16 = FUNC_4(VAR_18->base + VAR_1);

 VAR_17 = VAR_15 ^ VAR_16;
 if (!(VAR_17 & VAR_3))
  return VAR_12;

 FUNC_3(VAR_18->dev,
   "unexpected global error reported (0x%08x), this could be serious\n",
   VAR_17);

 if (VAR_17 & VAR_10) {
  FUNC_2(VAR_18->dev, "device has entered Service Failure Mode!\n");
  FUNC_1(VAR_18);
 }

 if (VAR_17 & VAR_7)
  FUNC_3(VAR_18->dev, "GERROR MSI write aborted\n");

 if (VAR_17 & VAR_8)
  FUNC_3(VAR_18->dev, "PRIQ MSI write aborted\n");

 if (VAR_17 & VAR_6)
  FUNC_3(VAR_18->dev, "EVTQ MSI write aborted\n");

 if (VAR_17 & VAR_5)
  FUNC_3(VAR_18->dev, "CMDQ MSI write aborted\n");

 if (VAR_17 & VAR_9)
  FUNC_2(VAR_18->dev, "PRIQ write aborted -- events may have been lost\n");

 if (VAR_17 & VAR_4)
  FUNC_2(VAR_18->dev, "EVTQ write aborted -- events may have been lost\n");

 if (VAR_17 & VAR_2)
  FUNC_0(VAR_18);

 FUNC_5(VAR_15, VAR_18->base + VAR_1);
 return VAR_11;
}
