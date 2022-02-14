
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_vmm_map {int dummy; } ;
struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {int busy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*,void*,int ,struct nvkm_vmm_map*) ;

int
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1, void *VAR_2, u32 VAR_3,
      struct nvkm_vmm_map *VAR_4)
{
 int VAR_5;
 FUNC_0(&VAR_0->mutex);
 VAR_5 = FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 VAR_1->busy = 0;
 FUNC_1(&VAR_0->mutex);
 return VAR_5;
}
