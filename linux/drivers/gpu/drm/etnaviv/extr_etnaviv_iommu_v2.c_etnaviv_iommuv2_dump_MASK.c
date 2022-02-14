
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct etnaviv_iommuv2_context {int* mtlb_cpu; int** stlb_cpu; } ;
struct etnaviv_iommu_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (void*,int*,int ) ;
 struct etnaviv_iommuv2_context* FUNC_1 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_2(struct etnaviv_iommu_context *VAR_3, void *VAR_4)
{
 struct etnaviv_iommuv2_context *VAR_5 = FUNC_1(VAR_3);
 int VAR_6;

 FUNC_0(VAR_4, VAR_5->mtlb_cpu, VAR_2);
 VAR_4 += VAR_2;
 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++)
  if (VAR_5->mtlb_cpu[VAR_6] & VAR_1) {
   FUNC_0(VAR_4, VAR_5->stlb_cpu[VAR_6], VAR_2);
   VAR_4 += VAR_2;
  }
}
