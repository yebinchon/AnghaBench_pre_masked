
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {struct page** pts; int pd; struct tegra_smmu* smmu; } ;
struct tegra_smmu {int dev; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (int) ;
 int FUNC_3 (int ,struct page*,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 unsigned int FUNC_6 (int ) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (struct tegra_smmu*,int ) ;
 int FUNC_9 (int ) ;
 int * FUNC_10 (struct page*,int ) ;
 int FUNC_11 (struct tegra_smmu_as*,int ,int ) ;

__attribute__((used)) static u32 *FUNC_12(struct tegra_smmu_as *VAR_7, dma_addr_t VAR_8,
         dma_addr_t *VAR_9)
{
 unsigned int VAR_10 = FUNC_6(VAR_8);
 struct tegra_smmu *VAR_11 = VAR_7->smmu;

 if (!VAR_7->pts[VAR_10]) {
  struct page *VAR_12;
  dma_addr_t VAR_13;

  VAR_12 = FUNC_2(VAR_1 | VAR_5 | VAR_6);
  if (!VAR_12)
   return ((void*)0);

  VAR_13 = FUNC_3(VAR_11->dev, VAR_12, 0, VAR_4,
       VAR_0);
  if (FUNC_4(VAR_11->dev, VAR_13)) {
   FUNC_1(VAR_12);
   return ((void*)0);
  }

  if (!FUNC_8(VAR_11, VAR_13)) {
   FUNC_5(VAR_11->dev, VAR_13, VAR_4,
           VAR_0);
   FUNC_1(VAR_12);
   return ((void*)0);
  }

  VAR_7->pts[VAR_10] = VAR_12;

  FUNC_11(VAR_7, VAR_8, FUNC_0(VAR_13, VAR_2 |
             VAR_3));

  *VAR_9 = VAR_13;
 } else {
  u32 *VAR_14 = FUNC_7(VAR_7->pd);

  *VAR_9 = FUNC_9(VAR_14[VAR_10]);
 }

 return FUNC_10(VAR_7->pts[VAR_10], VAR_8);
}
