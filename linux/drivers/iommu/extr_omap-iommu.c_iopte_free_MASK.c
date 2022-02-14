
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int dev; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct omap_iommu *VAR_3, u32 *VAR_4, bool VAR_5)
{
 dma_addr_t VAR_6;


 if (VAR_4) {
  if (VAR_5) {
   VAR_6 = FUNC_2(VAR_4);
   FUNC_0(VAR_3->dev, VAR_6, VAR_1,
      VAR_0);
  }

  FUNC_1(VAR_2, VAR_4);
 }
}
