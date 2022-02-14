
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tegra_smmu_as {int pd; struct page** pts; } ;
struct page {int dummy; } ;
typedef int dma_addr_t ;


 unsigned int FUNC_0 (unsigned long) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int * FUNC_3 (struct page*,unsigned long) ;

__attribute__((used)) static u32 *FUNC_4(struct tegra_smmu_as *VAR_0, unsigned long VAR_1,
      dma_addr_t *VAR_2)
{
 unsigned int VAR_3 = FUNC_0(VAR_1);
 struct page *VAR_4;
 u32 *VAR_5;

 VAR_4 = VAR_0->pts[VAR_3];
 if (!VAR_4)
  return ((void*)0);

 VAR_5 = FUNC_1(VAR_0->pd);
 *VAR_2 = FUNC_2(VAR_5[VAR_3]);

 return FUNC_3(VAR_4, VAR_1);
}
