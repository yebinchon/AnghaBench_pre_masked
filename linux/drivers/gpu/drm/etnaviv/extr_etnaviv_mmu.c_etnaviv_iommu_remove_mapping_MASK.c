
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int start; } ;
struct etnaviv_vram_mapping {TYPE_2__ vram_node; struct etnaviv_gem_object* object; } ;
struct etnaviv_iommu_context {int dummy; } ;
struct TYPE_3__ {int size; } ;
struct etnaviv_gem_object {TYPE_1__ base; int sgt; } ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (struct etnaviv_iommu_context*,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct etnaviv_iommu_context *VAR_0,
 struct etnaviv_vram_mapping *VAR_1)
{
 struct etnaviv_gem_object *VAR_2 = VAR_1->object;

 FUNC_1(VAR_0, VAR_1->vram_node.start,
       VAR_2->sgt, VAR_2->base.size);
 FUNC_0(&VAR_1->vram_node);
}
