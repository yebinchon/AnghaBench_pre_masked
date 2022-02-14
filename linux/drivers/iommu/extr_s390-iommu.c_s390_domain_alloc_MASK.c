
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct s390_domain {struct iommu_domain domain; int devices; int list_lock; int dma_table_lock; int dma_table; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (struct s390_domain*) ;
 struct s390_domain* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_5(unsigned VAR_2)
{
 struct s390_domain *VAR_3;

 if (VAR_2 != VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_3(sizeof(*VAR_3), VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->dma_table = FUNC_1();
 if (!VAR_3->dma_table) {
  FUNC_2(VAR_3);
  return ((void*)0);
 }

 FUNC_4(&VAR_3->dma_table_lock);
 FUNC_4(&VAR_3->list_lock);
 FUNC_0(&VAR_3->devices);

 return &VAR_3->domain;
}
