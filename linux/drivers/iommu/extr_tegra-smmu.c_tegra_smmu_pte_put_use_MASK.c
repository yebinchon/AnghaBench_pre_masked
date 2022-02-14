
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {scalar_t__* count; struct page** pts; int pd; struct tegra_smmu* smmu; } ;
struct tegra_smmu {int dev; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 unsigned int FUNC_2 (unsigned long) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct tegra_smmu_as*,unsigned long,int ) ;

__attribute__((used)) static void FUNC_6(struct tegra_smmu_as *VAR_2, unsigned long VAR_3)
{
 unsigned int VAR_4 = FUNC_2(VAR_3);
 struct page *VAR_5 = VAR_2->pts[VAR_4];





 if (--VAR_2->count[VAR_4] == 0) {
  struct tegra_smmu *VAR_6 = VAR_2->smmu;
  u32 *VAR_7 = FUNC_3(VAR_2->pd);
  dma_addr_t VAR_8 = FUNC_4(VAR_7[VAR_4]);

  FUNC_5(VAR_2, VAR_3, 0);

  FUNC_1(VAR_6->dev, VAR_8, VAR_1, VAR_0);
  FUNC_0(VAR_5);
  VAR_2->pts[VAR_4] = ((void*)0);
 }
}
