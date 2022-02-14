
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {struct iommu_domain* domain; struct iommu_domain* default_domain; } ;
struct iommu_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct iommu_group*,struct iommu_domain*,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct iommu_domain *VAR_2,
    struct iommu_group *VAR_3)
{
 int VAR_4;

 if (VAR_3->default_domain && VAR_3->domain != VAR_3->default_domain)
  return -VAR_0;

 VAR_4 = FUNC_0(VAR_3, VAR_2,
      VAR_1);
 if (VAR_4 == 0)
  VAR_3->domain = VAR_2;

 return VAR_4;
}
