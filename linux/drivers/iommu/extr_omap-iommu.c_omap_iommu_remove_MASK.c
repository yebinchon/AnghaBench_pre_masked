
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_iommu {int name; int dev; int iommu; int * group; } ;


 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct omap_iommu*) ;
 struct omap_iommu* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_0)
{
 struct omap_iommu *VAR_1 = FUNC_5(VAR_0);

 if (VAR_1->group) {
  FUNC_3(VAR_1->group);
  VAR_1->group = ((void*)0);

  FUNC_1(&VAR_1->iommu);
  FUNC_2(&VAR_1->iommu);
 }

 FUNC_4(VAR_1);

 FUNC_6(VAR_1->dev);

 FUNC_0(&VAR_0->dev, "%s removed\n", VAR_1->name);
 return 0;
}
