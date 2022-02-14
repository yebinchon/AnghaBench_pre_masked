
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_domain {int dummy; } ;
struct iommu_iotlb_gather {int dummy; } ;
struct iommu_domain {int dummy; } ;
typedef scalar_t__ phys_addr_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_domain*,unsigned long) ;
 int FUNC_1 (struct s390_domain*,unsigned long,unsigned long,size_t,int) ;
 struct s390_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static size_t FUNC_3(struct iommu_domain *VAR_1,
          unsigned long VAR_2, size_t VAR_3,
          struct iommu_iotlb_gather *VAR_4)
{
 struct s390_domain *VAR_5 = FUNC_2(VAR_1);
 int VAR_6 = VAR_0;
 phys_addr_t VAR_7;
 int VAR_8;

 VAR_7 = FUNC_0(VAR_1, VAR_2);
 if (!VAR_7)
  return 0;

 VAR_8 = FUNC_1(VAR_5, (unsigned long) VAR_7, VAR_2,
         VAR_3, VAR_6);
 if (VAR_8)
  return 0;

 return VAR_3;
}
