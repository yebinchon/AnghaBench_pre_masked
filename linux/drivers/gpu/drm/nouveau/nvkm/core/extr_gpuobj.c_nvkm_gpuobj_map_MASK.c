
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {int dummy; } ;
struct nvkm_gpuobj {TYPE_1__* node; int parent; } ;
struct TYPE_2__ {scalar_t__ offset; } ;


 int FUNC_0 (int ,scalar_t__,struct nvkm_vmm*,struct nvkm_vma*,void*,int ) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_gpuobj *VAR_0, u64 VAR_1,
  struct nvkm_vmm *VAR_2, struct nvkm_vma *VAR_3,
  void *VAR_4, u32 VAR_5)
{
 return FUNC_0(VAR_0->parent, VAR_0->node->offset + VAR_1,
          VAR_2, VAR_3, VAR_4, VAR_5);
}
