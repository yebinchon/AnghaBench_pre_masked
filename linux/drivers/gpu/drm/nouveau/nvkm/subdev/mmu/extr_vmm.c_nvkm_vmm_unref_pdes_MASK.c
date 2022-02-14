
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct nvkm_vmm_pt {scalar_t__* refs; int ** pde; struct nvkm_mmu_pt** pt; scalar_t__ sparse; } ;
struct nvkm_vmm_iter {size_t lvl; size_t* pte; struct nvkm_vmm* vmm; struct nvkm_vmm_pt** pt; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc_func {int (* pde ) (struct nvkm_vmm*,struct nvkm_vmm_pt*,size_t) ;int (* unmap ) (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,int) ;int (* sparse ) (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,int) ;} ;
struct nvkm_vmm_desc {struct nvkm_vmm_desc_func* func; int type; } ;
struct nvkm_vmm {int bootstrapped; int mmu; } ;
struct nvkm_mmu_pt {int dummy; } ;


 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,int ) ;
 int FUNC_1 (int ,int ,struct nvkm_mmu_pt**) ;
 int FUNC_2 (struct nvkm_vmm_desc const*) ;
 int FUNC_3 (struct nvkm_vmm_iter*) ;
 int FUNC_4 (struct nvkm_vmm_iter*) ;
 int FUNC_5 (struct nvkm_vmm_pt**) ;
 int FUNC_6 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,int) ;
 int FUNC_7 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,int) ;
 int FUNC_8 (struct nvkm_vmm*,struct nvkm_vmm_pt*,size_t) ;
 int FUNC_9 (struct nvkm_vmm*,struct nvkm_vmm_pt*,size_t) ;

__attribute__((used)) static void
FUNC_10(struct nvkm_vmm_iter *VAR_2)
{
 const struct nvkm_vmm_desc *VAR_3 = VAR_2->desc;
 const int VAR_4 = VAR_3[VAR_2->lvl].type == VAR_1;
 struct nvkm_vmm_pt *VAR_5 = VAR_2->pt[VAR_2->lvl + 1];
 struct nvkm_vmm_pt *VAR_6 = VAR_2->pt[VAR_2->lvl];
 struct nvkm_mmu_pt *VAR_7 = VAR_6->pt[VAR_4];
 struct nvkm_vmm *VAR_8 = VAR_2->vmm;
 u32 VAR_9 = VAR_2->pte[VAR_2->lvl + 1];


 VAR_2->lvl++;
 if (--VAR_5->refs[0]) {
  const struct nvkm_vmm_desc_func *VAR_10 = VAR_3[VAR_2->lvl].func;

  FUNC_0(VAR_2, "PDE unmap %s", FUNC_2(&VAR_3[VAR_2->lvl - 1]));
  VAR_6->pt[VAR_4] = ((void*)0);
  if (!VAR_6->refs[!VAR_4]) {

   if (VAR_5->pt[0]) {
    if (VAR_6->sparse) {
     VAR_10->sparse(VAR_8, VAR_5->pt[0], VAR_9, 1);
     VAR_5->pde[VAR_9] = VAR_0;
    } else {
     VAR_10->unmap(VAR_8, VAR_5->pt[0], VAR_9, 1);
     VAR_5->pde[VAR_9] = ((void*)0);
    }
   } else {




    VAR_10->pde(VAR_8, VAR_5, VAR_9);
    VAR_5->pde[VAR_9] = ((void*)0);
   }
  } else {



   VAR_10->pde(VAR_8, VAR_5, VAR_9);
  }


  FUNC_4(VAR_2);
  FUNC_3(VAR_2);
 } else {

  FUNC_10(VAR_2);
 }


 FUNC_0(VAR_2, "PDE free %s", FUNC_2(&VAR_3[VAR_2->lvl - 1]));
 FUNC_1(VAR_8->mmu, VAR_8->bootstrapped, &VAR_7);
 if (!VAR_6->refs[!VAR_4])
  FUNC_5(&VAR_6);
 VAR_2->lvl--;
}
