
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_vmm_map {TYPE_2__* page; } ;
struct nvkm_vmm {TYPE_1__* func; } ;
struct nvkm_vma {int dummy; } ;
struct TYPE_4__ {scalar_t__ shift; } ;
struct TYPE_3__ {TYPE_2__* page; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_vmm*,char*,scalar_t__) ;
 int FUNC_1 (struct nvkm_vmm*,struct nvkm_vma*,void*,int ,struct nvkm_vmm_map*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_vmm *VAR_1, struct nvkm_vma *VAR_2,
      void *VAR_3, u32 VAR_4, struct nvkm_vmm_map *VAR_5)
{
 for (VAR_5->page = VAR_1->func->page; VAR_5->page->shift; VAR_5->page++) {
  FUNC_0(VAR_1, "trying %d", VAR_5->page->shift);
  if (!FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5))
   return 0;
 }
 return -VAR_0;
}
