
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct arm_smmu_device {int clks; int num_clks; int dev; int context_map; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct arm_smmu_device*,int ,int ) ;
 int FUNC_1 (struct arm_smmu_device*) ;
 int FUNC_2 (struct arm_smmu_device*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *,char*) ;
 struct arm_smmu_device* FUNC_7 (struct platform_device*) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int VAR_2 ;

__attribute__((used)) static void FUNC_10(struct platform_device *VAR_3)
{
 struct arm_smmu_device *VAR_4 = FUNC_7(VAR_3);

 if (!VAR_4)
  return;

 if (!FUNC_3(VAR_4->context_map, VAR_1))
  FUNC_6(&VAR_3->dev, "removing device with active domains!\n");

 FUNC_1(VAR_4);

 FUNC_0(VAR_4, VAR_0, VAR_2);
 FUNC_2(VAR_4);

 if (FUNC_8(VAR_4->dev))
  FUNC_9(VAR_4->dev);
 else
  FUNC_4(VAR_4->num_clks, VAR_4->clks);

 FUNC_5(VAR_4->num_clks, VAR_4->clks);
}
