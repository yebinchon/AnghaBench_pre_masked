
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {scalar_t__ iova_cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;

int FUNC_1(struct iommu_domain *VAR_3)
{
 if (VAR_3->iova_cookie)
  return -VAR_0;

 VAR_3->iova_cookie = FUNC_0(VAR_2);
 if (!VAR_3->iova_cookie)
  return -VAR_1;

 return 0;
}
