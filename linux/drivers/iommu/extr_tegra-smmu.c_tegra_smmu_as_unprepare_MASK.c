
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_smmu_as {scalar_t__ use_count; int * smmu; int pd_dma; int id; } ;
struct tegra_smmu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (struct tegra_smmu*,int ) ;

__attribute__((used)) static void FUNC_2(struct tegra_smmu *VAR_2,
        struct tegra_smmu_as *VAR_3)
{
 if (--VAR_3->use_count > 0)
  return;

 FUNC_1(VAR_2, VAR_3->id);

 FUNC_0(VAR_2->dev, VAR_3->pd_dma, VAR_1, VAR_0);

 VAR_3->smmu = ((void*)0);
}
