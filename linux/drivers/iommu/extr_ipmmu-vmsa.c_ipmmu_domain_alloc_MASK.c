
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;




 struct iommu_domain* FUNC_0 (unsigned int) ;
 int FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static struct iommu_domain *FUNC_3(unsigned VAR_0)
{
 struct iommu_domain *VAR_1 = ((void*)0);

 switch (VAR_0) {
 case 128:
  VAR_1 = FUNC_0(VAR_0);
  break;

 case 129:
  VAR_1 = FUNC_0(VAR_0);
  if (VAR_1 && FUNC_1(VAR_1)) {
   FUNC_2(VAR_1);
   VAR_1 = ((void*)0);
  }
  break;
 }

 return VAR_1;
}
