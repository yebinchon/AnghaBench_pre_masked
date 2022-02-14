
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct etnaviv_iommuv1_context {scalar_t__ pgtable_dma; } ;
struct etnaviv_iommu_context {TYPE_1__* global; } ;
struct etnaviv_gpu {int dummy; } ;
struct TYPE_2__ {scalar_t__ memory_base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct etnaviv_gpu*,int ,scalar_t__) ;
 struct etnaviv_iommuv1_context* FUNC_1 (struct etnaviv_iommu_context*) ;

__attribute__((used)) static void FUNC_2(struct etnaviv_gpu *VAR_10,
        struct etnaviv_iommu_context *VAR_11)
{
 struct etnaviv_iommuv1_context *VAR_12 = FUNC_1(VAR_11);
 u32 VAR_13;


 FUNC_0(VAR_10, VAR_3, VAR_11->global->memory_base);
 FUNC_0(VAR_10, VAR_0, VAR_11->global->memory_base);
 FUNC_0(VAR_10, VAR_4, VAR_11->global->memory_base);
 FUNC_0(VAR_10, VAR_2, VAR_11->global->memory_base);
 FUNC_0(VAR_10, VAR_1, VAR_11->global->memory_base);


 VAR_13 = (u32)VAR_12->pgtable_dma;

 FUNC_0(VAR_10, VAR_5, VAR_13);
 FUNC_0(VAR_10, VAR_9, VAR_13);
 FUNC_0(VAR_10, VAR_7, VAR_13);
 FUNC_0(VAR_10, VAR_6, VAR_13);
 FUNC_0(VAR_10, VAR_8, VAR_13);
}
