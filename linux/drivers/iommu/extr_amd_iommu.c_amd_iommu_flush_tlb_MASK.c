
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int lock; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct protection_domain*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct protection_domain* FUNC_3 (struct iommu_domain*) ;

int FUNC_4(struct iommu_domain *VAR_0, int VAR_1)
{
 struct protection_domain *VAR_2 = FUNC_3(VAR_0);
 unsigned long VAR_3;
 int VAR_4;

 FUNC_1(&VAR_2->lock, VAR_3);
 VAR_4 = FUNC_0(VAR_2, VAR_1);
 FUNC_2(&VAR_2->lock, VAR_3);

 return VAR_4;
}
