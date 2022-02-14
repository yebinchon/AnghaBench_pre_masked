
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_vmm {int dummy; } ;
struct nvkm_vma {int head; } ;


 int FUNC_0 (struct nvkm_vma*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;

__attribute__((used)) static inline void
FUNC_3(struct nvkm_vmm *VAR_0, struct nvkm_vma *VAR_1)
{
 FUNC_2(VAR_0, VAR_1);
 FUNC_1(&VAR_1->head);
 FUNC_0(VAR_1);
}
