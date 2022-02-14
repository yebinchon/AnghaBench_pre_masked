
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvif_vma {unsigned long long addr; } ;
struct nouveau_vmm {int vmm; } ;
struct nouveau_vma {int refs; unsigned long long addr; int head; int * fence; int * mem; struct nouveau_vmm* vmm; } ;
struct TYPE_5__ {scalar_t__ page; int size; } ;
struct nouveau_mem {TYPE_2__ mem; } ;
struct TYPE_6__ {scalar_t__ mem_type; } ;
struct TYPE_4__ {TYPE_3__ mem; } ;
struct nouveau_bo {scalar_t__ page; TYPE_1__ bo; int vma_list; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 struct nouveau_vma* FUNC_0 (int,int ) ;
 int FUNC_1 (int *,int *) ;
 struct nouveau_mem* FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (struct nouveau_vma**) ;
 struct nouveau_vma* FUNC_4 (struct nouveau_bo*,struct nouveau_vmm*) ;
 int FUNC_5 (struct nouveau_vma*,struct nouveau_mem*) ;
 int FUNC_6 (int *,int ,int,scalar_t__,int ,int ,struct nvif_vma*) ;

int
FUNC_7(struct nouveau_bo *VAR_5, struct nouveau_vmm *VAR_6,
  struct nouveau_vma **VAR_7)
{
 struct nouveau_mem *VAR_8 = FUNC_2(&VAR_5->bo.mem);
 struct nouveau_vma *VAR_9;
 struct nvif_vma VAR_10;
 int VAR_11;

 if ((VAR_9 = *VAR_7 = FUNC_4(VAR_5, VAR_6))) {
  VAR_9->refs++;
  return 0;
 }

 if (!(VAR_9 = *VAR_7 = FUNC_0(sizeof(*VAR_9), VAR_1)))
  return -VAR_0;
 VAR_9->vmm = VAR_6;
 VAR_9->refs = 1;
 VAR_9->addr = ~0ULL;
 VAR_9->mem = ((void*)0);
 VAR_9->fence = ((void*)0);
 FUNC_1(&VAR_9->head, &VAR_5->vma_list);

 if (VAR_5->bo.mem.mem_type != VAR_4 &&
     VAR_8->mem.page == VAR_5->page) {
  VAR_11 = FUNC_6(&VAR_6->vmm, VAR_2, 0, VAR_8->mem.page, 0,
       VAR_8->mem.size, &VAR_10);
  if (VAR_11)
   goto done;

  VAR_9->addr = VAR_10.addr;
  VAR_11 = FUNC_5(VAR_9, VAR_8);
 } else {
  VAR_11 = FUNC_6(&VAR_6->vmm, VAR_3, 0, VAR_8->mem.page, 0,
       VAR_8->mem.size, &VAR_10);
  VAR_9->addr = VAR_10.addr;
 }

done:
 if (VAR_11)
  FUNC_3(VAR_7);
 return VAR_11;
}
