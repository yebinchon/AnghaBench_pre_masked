
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int dev; } ;
struct iotlb_lock {scalar_t__ vict; scalar_t__ base; } ;


 int VAR_0 ;
 int FUNC_0 (struct omap_iommu*,int,int ) ;
 int FUNC_1 (struct omap_iommu*,struct iotlb_lock*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct omap_iommu *VAR_1)
{
 struct iotlb_lock VAR_2;

 FUNC_2(VAR_1->dev);

 VAR_2.base = 0;
 VAR_2.vict = 0;
 FUNC_1(VAR_1, &VAR_2);

 FUNC_0(VAR_1, 1, VAR_0);

 FUNC_3(VAR_1->dev);
}
