
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct nvkm_vmm {TYPE_1__* func; } ;
struct nvkm_vma {int mapped; size_t refd; scalar_t__ addr; scalar_t__ size; scalar_t__ memory; } ;
struct TYPE_2__ {int * page; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 struct nvkm_vma* FUNC_2 (struct nvkm_vma*,struct nvkm_vma*) ;
 struct nvkm_vma* FUNC_3 (struct nvkm_vmm*,scalar_t__) ;
 struct nvkm_vma* FUNC_4 (struct nvkm_vmm*,struct nvkm_vma*,scalar_t__,scalar_t__,int ,int) ;
 int FUNC_5 (struct nvkm_vmm*,int *,scalar_t__,scalar_t__,int,int) ;

int
FUNC_6(struct nvkm_vmm *VAR_2, u64 VAR_3, u64 VAR_4)
{
 struct nvkm_vma *VAR_5 = FUNC_3(VAR_2, VAR_3);
 struct nvkm_vma *VAR_6;
 u64 VAR_7 = VAR_3 + VAR_4;
 u64 VAR_8 = VAR_3;

 if (!VAR_5)
  return -VAR_0;

 do {
  if (!VAR_5->mapped || VAR_5->memory)
   continue;

  VAR_4 = FUNC_1(VAR_7 - VAR_8, VAR_5->size - (VAR_8 - VAR_5->addr));

  FUNC_5(VAR_2, &VAR_2->func->page[VAR_5->refd],
     VAR_8, VAR_4, 0, 1);

  VAR_6 = FUNC_4(VAR_2, VAR_5, VAR_8, VAR_4, 0, 0);
  if (!FUNC_0(!VAR_6)) {
   VAR_5 = VAR_6;
   VAR_5->refd = VAR_1;
   VAR_5->mapped = 0;
  }
 } while ((VAR_5 = FUNC_2(VAR_5, VAR_6)) && (VAR_8 = VAR_5->addr) < VAR_7);

 return 0;
}
