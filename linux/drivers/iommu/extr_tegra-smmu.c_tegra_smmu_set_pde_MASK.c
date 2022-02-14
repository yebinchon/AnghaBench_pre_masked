
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {int id; int pd_dma; int pd; struct tegra_smmu* smmu; } ;
struct tegra_smmu {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long,int,int ) ;
 unsigned int FUNC_1 (unsigned long) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (struct tegra_smmu*) ;
 int FUNC_4 (struct tegra_smmu*,int ,unsigned long) ;
 int FUNC_5 (struct tegra_smmu*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct tegra_smmu_as *VAR_1, unsigned long VAR_2,
          u32 VAR_3)
{
 unsigned int VAR_4 = FUNC_1(VAR_2);
 struct tegra_smmu *VAR_5 = VAR_1->smmu;
 u32 *VAR_6 = FUNC_2(VAR_1->pd);
 unsigned long VAR_7 = VAR_4 * sizeof(*VAR_6);


 VAR_6[VAR_4] = VAR_3;


 FUNC_0(VAR_5->dev, VAR_1->pd_dma, VAR_7,
      sizeof(*VAR_6), VAR_0);


 FUNC_4(VAR_5, VAR_1->pd_dma, VAR_7);
 FUNC_5(VAR_5, VAR_1->id, VAR_2);
 FUNC_3(VAR_5);
}
