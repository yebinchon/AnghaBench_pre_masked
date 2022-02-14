
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {void* handler_token; int handler; } ;
typedef int iommu_fault_handler_t ;


 int FUNC_0 (int) ;

void FUNC_1(struct iommu_domain *VAR_0,
     iommu_fault_handler_t VAR_1,
     void *VAR_2)
{
 FUNC_0(!VAR_0);

 VAR_0->handler = VAR_1;
 VAR_0->handler_token = VAR_2;
}
