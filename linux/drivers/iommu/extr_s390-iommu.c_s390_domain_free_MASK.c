
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s390_domain {int dma_table; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct s390_domain*) ;
 struct s390_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_3(struct iommu_domain *VAR_0)
{
 struct s390_domain *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->dma_table);
 FUNC_1(VAR_1);
}
