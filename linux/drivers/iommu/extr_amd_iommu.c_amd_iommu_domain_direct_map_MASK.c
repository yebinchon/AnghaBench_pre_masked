
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protection_domain {int lock; int mode; } ;
struct iommu_domain {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct protection_domain*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct protection_domain* FUNC_3 (struct iommu_domain*) ;
 int FUNC_4 (struct protection_domain*) ;

void FUNC_5(struct iommu_domain *VAR_1)
{
 struct protection_domain *VAR_2 = FUNC_3(VAR_1);
 unsigned long VAR_3;

 FUNC_1(&VAR_2->lock, VAR_3);


 VAR_2->mode = VAR_0;


 FUNC_4(VAR_2);


 FUNC_0(VAR_2);

 FUNC_2(&VAR_2->lock, VAR_3);
}
