
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int id; int syscfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int,int) ;

__attribute__((used)) static void FUNC_1(struct omap_iommu *VAR_2, bool VAR_3)
{
 u32 VAR_4, VAR_5;

 if (!VAR_2->syscfg)
  return;

 VAR_5 = (1 << (VAR_2->id * VAR_1));
 VAR_4 = VAR_3 ? VAR_5 : 0;
 FUNC_0(VAR_2->syscfg, VAR_0, VAR_5, VAR_4);
}
