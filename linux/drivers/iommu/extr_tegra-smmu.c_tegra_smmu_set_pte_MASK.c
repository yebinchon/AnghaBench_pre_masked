
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {int id; struct tegra_smmu* smmu; } ;
struct tegra_smmu {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned long,int,int ) ;
 unsigned long FUNC_1 (int *) ;
 int FUNC_2 (struct tegra_smmu*) ;
 int FUNC_3 (struct tegra_smmu*,int ,unsigned long) ;
 int FUNC_4 (struct tegra_smmu*,int ,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct tegra_smmu_as *VAR_1, unsigned long VAR_2,
          u32 *VAR_3, dma_addr_t VAR_4, u32 VAR_5)
{
 struct tegra_smmu *VAR_6 = VAR_1->smmu;
 unsigned long VAR_7 = FUNC_1(VAR_3);

 *VAR_3 = VAR_5;

 FUNC_0(VAR_6->dev, VAR_4, VAR_7,
      4, VAR_0);
 FUNC_3(VAR_6, VAR_4, VAR_7);
 FUNC_4(VAR_6, VAR_1->id, VAR_2);
 FUNC_2(VAR_6);
}
