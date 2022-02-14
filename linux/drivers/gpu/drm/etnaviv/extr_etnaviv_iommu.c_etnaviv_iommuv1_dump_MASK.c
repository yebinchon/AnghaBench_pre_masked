
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommuv1_context {int pgtable_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,int ) ;
 struct etnaviv_iommuv1_context* FUNC_1 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_2(struct etnaviv_iommu_context *VAR_1,
     void *VAR_2)
{
 struct etnaviv_iommuv1_context *VAR_3 = FUNC_1(VAR_1);

 FUNC_0(VAR_2, VAR_3->pgtable_cpu, VAR_0);
}
