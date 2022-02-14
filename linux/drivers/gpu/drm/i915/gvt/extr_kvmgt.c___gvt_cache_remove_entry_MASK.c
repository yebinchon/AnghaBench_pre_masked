
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int nr_cache_entries; int dma_addr_cache; int gfn_cache; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;
struct gvt_dma {int dma_addr_node; int gfn_node; } ;


 int FUNC_0 (struct gvt_dma*) ;
 int FUNC_1 (int *,int *) ;

__attribute__((used)) static void FUNC_2(struct intel_vgpu *VAR_0,
    struct gvt_dma *VAR_1)
{
 FUNC_1(&VAR_1->gfn_node, &VAR_0->vdev.gfn_cache);
 FUNC_1(&VAR_1->dma_addr_node, &VAR_0->vdev.dma_addr_cache);
 FUNC_0(VAR_1);
 VAR_0->vdev.nr_cache_entries--;
}
