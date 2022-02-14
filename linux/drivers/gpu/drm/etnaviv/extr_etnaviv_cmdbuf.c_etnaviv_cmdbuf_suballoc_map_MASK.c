
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct etnaviv_vram_mapping {int dummy; } ;
struct etnaviv_iommu_context {int dummy; } ;
struct etnaviv_cmdbuf_suballoc {int paddr; } ;


 int VAR_0 ;
 int FUNC_0 (struct etnaviv_iommu_context*,struct etnaviv_vram_mapping*,int ,int ,int ) ;

int FUNC_1(struct etnaviv_cmdbuf_suballoc *VAR_1,
    struct etnaviv_iommu_context *VAR_2,
    struct etnaviv_vram_mapping *VAR_3,
    u32 VAR_4)
{
 return FUNC_0(VAR_2, VAR_3, VAR_4,
          VAR_1->paddr, VAR_0);
}
