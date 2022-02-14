
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_iommu_domain {int num_iommus; struct omap_iommu_device* iommus; } ;
struct omap_iommu_device {scalar_t__ pgtable; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (long,int ) ;
 scalar_t__ FUNC_1 (int) ;
 struct omap_iommu_device* FUNC_2 (int,int,int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct device *VAR_4,
      struct omap_iommu_domain *VAR_5)
{
 struct omap_iommu_device *VAR_6;
 int VAR_7;

 VAR_5->num_iommus = FUNC_4(VAR_4);
 if (!VAR_5->num_iommus)
  return -VAR_0;

 VAR_5->iommus = FUNC_2(VAR_5->num_iommus, sizeof(*VAR_6),
      VAR_2);
 if (!VAR_5->iommus)
  return -VAR_1;

 VAR_6 = VAR_5->iommus;
 for (VAR_7 = 0; VAR_7 < VAR_5->num_iommus; VAR_7++, VAR_6++) {
  VAR_6->pgtable = FUNC_3(VAR_3, VAR_2);
  if (!VAR_6->pgtable)
   return -VAR_1;





  if (FUNC_1(!FUNC_0((long)VAR_6->pgtable,
     VAR_3)))
   return -VAR_0;
 }

 return 0;
}
