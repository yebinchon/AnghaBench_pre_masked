
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_mem_reg {int dummy; } ;
struct ttm_buffer_object {struct ttm_mem_reg mem; } ;
struct nvif_vmm {int dummy; } ;
struct TYPE_6__ {int size; int page; } ;
struct nouveau_mem {int * vma; TYPE_3__ mem; } ;
struct TYPE_4__ {struct nvif_vmm vmm; } ;
struct TYPE_5__ {TYPE_1__ vmm; } ;
struct nouveau_drm {TYPE_2__ client; } ;


 int VAR_0 ;
 struct nouveau_mem* FUNC_0 (struct ttm_mem_reg*) ;
 int FUNC_1 (struct nouveau_mem*,struct nvif_vmm*,int *) ;
 int FUNC_2 (struct nvif_vmm*,int ,int,int ,int ,int ,int *) ;
 int FUNC_3 (struct nvif_vmm*,int *) ;

__attribute__((used)) static int
FUNC_4(struct nouveau_drm *VAR_1, struct ttm_buffer_object *VAR_2,
       struct ttm_mem_reg *VAR_3)
{
 struct nouveau_mem *VAR_4 = FUNC_0(&VAR_2->mem);
 struct nouveau_mem *VAR_5 = FUNC_0(VAR_3);
 struct nvif_vmm *VAR_6 = &VAR_1->client.vmm.vmm;
 int VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_0, 0, VAR_4->mem.page, 0,
      VAR_4->mem.size, &VAR_4->vma[0]);
 if (VAR_7)
  return VAR_7;

 VAR_7 = FUNC_2(VAR_6, VAR_0, 0, VAR_5->mem.page, 0,
      VAR_5->mem.size, &VAR_4->vma[1]);
 if (VAR_7)
  goto done;

 VAR_7 = FUNC_1(VAR_4, VAR_6, &VAR_4->vma[0]);
 if (VAR_7)
  goto done;

 VAR_7 = FUNC_1(VAR_5, VAR_6, &VAR_4->vma[1]);
done:
 if (VAR_7) {
  FUNC_3(VAR_6, &VAR_4->vma[1]);
  FUNC_3(VAR_6, &VAR_4->vma[0]);
 }
 return 0;
}
