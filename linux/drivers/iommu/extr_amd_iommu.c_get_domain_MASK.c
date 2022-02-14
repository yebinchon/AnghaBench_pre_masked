
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct protection_domain {int dummy; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int defer_attach; struct protection_domain* domain; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct protection_domain* FUNC_0 (int ) ;
 int FUNC_1 (struct device*,struct protection_domain*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct protection_domain*) ;
 TYPE_1__* FUNC_4 (struct device*) ;
 struct iommu_domain* FUNC_5 (struct device*) ;
 struct protection_domain* FUNC_6 (struct iommu_domain*) ;

__attribute__((used)) static struct protection_domain *FUNC_7(struct device *VAR_2)
{
 struct protection_domain *VAR_3;
 struct iommu_domain *VAR_4;

 if (!FUNC_2(VAR_2))
  return FUNC_0(-VAR_1);

 VAR_3 = FUNC_4(VAR_2)->domain;
 if (VAR_3 == ((void*)0) && FUNC_4(VAR_2)->defer_attach) {
  FUNC_4(VAR_2)->defer_attach = 0;
  VAR_4 = FUNC_5(VAR_2);
  VAR_3 = FUNC_6(VAR_4);
  FUNC_1(VAR_2, VAR_3);
 }
 if (VAR_3 == ((void*)0))
  return FUNC_0(-VAR_0);

 if (!FUNC_3(VAR_3))
  return FUNC_0(-VAR_0);

 return VAR_3;
}
