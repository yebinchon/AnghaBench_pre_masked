
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct omap_iommu {int name; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct omap_iommu*,int) ;
 int FUNC_2 (struct omap_iommu*,int ) ;
 int FUNC_3 (struct omap_iommu*,int ,int ) ;

__attribute__((used)) static void FUNC_4(struct omap_iommu *VAR_2)
{
 u32 VAR_3 = FUNC_2(VAR_2, VAR_0);

 VAR_3 &= ~VAR_1;
 FUNC_3(VAR_2, VAR_3, VAR_0);
 FUNC_1(VAR_2, 0);

 FUNC_0(VAR_2->dev, "%s is shutting down\n", VAR_2->name);
}
