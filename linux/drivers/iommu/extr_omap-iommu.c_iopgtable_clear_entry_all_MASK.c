
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int page_table_lock; int pd_dma; int dev; } ;
typedef int da ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,unsigned long,int) ;
 int FUNC_1 (struct omap_iommu*) ;
 int FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 int* FUNC_4 (struct omap_iommu*,int) ;
 int FUNC_5 (struct omap_iommu*,int ,int) ;
 int FUNC_6 (int*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct omap_iommu *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;

 FUNC_7(&VAR_2->page_table_lock);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  u32 VAR_5;
  u32 *VAR_6;

  VAR_5 = VAR_4 << VAR_0;
  VAR_6 = FUNC_4(VAR_2, VAR_5);
  VAR_3 = FUNC_2(VAR_5) * sizeof(VAR_5);

  if (!*VAR_6)
   continue;

  if (FUNC_3(*VAR_6))
   FUNC_5(VAR_2, FUNC_6(VAR_6, 0), 1);

  *VAR_6 = 0;
  FUNC_0(VAR_2->dev, VAR_2->pd_dma, VAR_3, 1);
 }

 FUNC_1(VAR_2);

 FUNC_8(&VAR_2->page_table_lock);
}
