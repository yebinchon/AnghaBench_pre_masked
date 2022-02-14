
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cache_lock; scalar_t__ nr_cache_entries; void* dma_addr_cache; void* gfn_cache; } ;
struct intel_vgpu {TYPE_1__ vdev; } ;


 void* VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct intel_vgpu *VAR_1)
{
 VAR_1->vdev.gfn_cache = VAR_0;
 VAR_1->vdev.dma_addr_cache = VAR_0;
 VAR_1->vdev.nr_cache_entries = 0;
 FUNC_0(&VAR_1->vdev.cache_lock);
}
