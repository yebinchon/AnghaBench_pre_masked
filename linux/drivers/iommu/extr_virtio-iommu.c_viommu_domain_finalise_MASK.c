
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct viommu_domain {unsigned int id; int map_flags; struct viommu_dev* viommu; } ;
struct viommu_dev {int last_domain; int first_domain; int domain_ids; int geometry; int pgsize_bitmap; int map_flags; } ;
struct iommu_domain {int geometry; int pgsize_bitmap; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int ) ;
 struct viommu_domain* FUNC_1 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_2(struct viommu_dev *VAR_1,
      struct iommu_domain *VAR_2)
{
 int VAR_3;
 struct viommu_domain *VAR_4 = FUNC_1(VAR_2);

 VAR_4->viommu = VAR_1;
 VAR_4->map_flags = VAR_1->map_flags;

 VAR_2->pgsize_bitmap = VAR_1->pgsize_bitmap;
 VAR_2->geometry = VAR_1->geometry;

 VAR_3 = FUNC_0(&VAR_1->domain_ids, VAR_1->first_domain,
         VAR_1->last_domain, VAR_0);
 if (VAR_3 >= 0)
  VAR_4->id = (unsigned int)VAR_3;

 return VAR_3 > 0 ? 0 : VAR_3;
}
