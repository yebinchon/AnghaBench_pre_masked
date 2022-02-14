
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_vmm {TYPE_2__* mmu; } ;
struct nvkm_vma {int mapped; int size; scalar_t__ part; int memory; int tags; } ;
struct TYPE_3__ {int device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 struct nvkm_vma* FUNC_0 (struct nvkm_vma*,struct nvkm_vma*) ;
 int FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_vmm*,struct nvkm_vma*,struct nvkm_vma*,struct nvkm_vma*,int ) ;

void
FUNC_4(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1)
{
 struct nvkm_vma *VAR_2 = ((void*)0);
 struct nvkm_vma *VAR_3;

 FUNC_1(VAR_1->memory, VAR_0->mmu->subdev.device, &VAR_1->tags);
 FUNC_2(&VAR_1->memory);
 VAR_1->mapped = 0;

 if (VAR_1->part && (VAR_2 = FUNC_0(VAR_1, VAR_2)) && VAR_2->mapped)
  VAR_2 = ((void*)0);
 if ((VAR_3 = FUNC_0(VAR_1, VAR_3)) && (!VAR_3->part || VAR_3->mapped))
  VAR_3 = ((void*)0);
 FUNC_3(VAR_0, VAR_2, VAR_1, VAR_3, VAR_1->size);
}
