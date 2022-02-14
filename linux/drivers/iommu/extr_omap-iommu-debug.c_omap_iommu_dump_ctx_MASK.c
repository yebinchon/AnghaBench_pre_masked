
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu {int dev; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct omap_iommu*,char*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static ssize_t FUNC_3(struct omap_iommu *VAR_1, char *VAR_2,
       ssize_t VAR_3)
{
 if (!VAR_1 || !VAR_2)
  return -VAR_0;

 FUNC_1(VAR_1->dev);

 VAR_3 = FUNC_0(VAR_1, VAR_2, VAR_3);

 FUNC_2(VAR_1->dev);

 return VAR_3;
}
