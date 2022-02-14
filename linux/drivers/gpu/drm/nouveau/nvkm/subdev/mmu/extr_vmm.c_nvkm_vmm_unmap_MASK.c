
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_vmm {int mutex; } ;
struct nvkm_vma {scalar_t__ memory; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*,int) ;

void
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1)
{
 if (VAR_1->memory) {
  FUNC_0(&VAR_0->mutex);
  FUNC_2(VAR_0, VAR_1, 0);
  FUNC_1(&VAR_0->mutex);
 }
}
