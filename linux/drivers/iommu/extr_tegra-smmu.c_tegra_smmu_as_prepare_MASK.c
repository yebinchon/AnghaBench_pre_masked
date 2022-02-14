
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {scalar_t__ use_count; int id; int pd_dma; struct tegra_smmu* smmu; int attr; int pd; } ;
struct tegra_smmu {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (struct tegra_smmu*,int ) ;
 int FUNC_5 (struct tegra_smmu*) ;
 int FUNC_6 (struct tegra_smmu*,int ,int ) ;
 int FUNC_7 (struct tegra_smmu*,int) ;
 int FUNC_8 (struct tegra_smmu*,int,int ) ;
 int FUNC_9 (struct tegra_smmu*,int*) ;

__attribute__((used)) static int FUNC_10(struct tegra_smmu *VAR_5,
     struct tegra_smmu_as *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 if (VAR_6->use_count > 0) {
  VAR_6->use_count++;
  return 0;
 }

 VAR_6->pd_dma = FUNC_1(VAR_5->dev, VAR_6->pd, 0, VAR_4,
      VAR_0);
 if (FUNC_2(VAR_5->dev, VAR_6->pd_dma))
  return -VAR_1;


 if (!FUNC_4(VAR_5, VAR_6->pd_dma)) {
  VAR_8 = -VAR_1;
  goto err_unmap;
 }

 VAR_8 = FUNC_9(VAR_5, &VAR_6->id);
 if (VAR_8 < 0)
  goto err_unmap;

 FUNC_6(VAR_5, VAR_6->pd_dma, 0);
 FUNC_7(VAR_5, VAR_6->id);

 FUNC_8(VAR_5, VAR_6->id & 0x7f, VAR_2);
 VAR_7 = FUNC_0(VAR_6->pd_dma, VAR_6->attr);
 FUNC_8(VAR_5, VAR_7, VAR_3);
 FUNC_5(VAR_5);

 VAR_6->smmu = VAR_5;
 VAR_6->use_count++;

 return 0;

err_unmap:
 FUNC_3(VAR_5->dev, VAR_6->pd_dma, VAR_4, VAR_0);
 return VAR_8;
}
