
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_vmm_pt {int* pte; scalar_t__ sparse; scalar_t__* refs; struct nvkm_mmu_pt** pt; struct nvkm_vmm_pt** pde; } ;
struct nvkm_vmm_iter {int lvl; struct nvkm_vmm* vmm; struct nvkm_vmm_desc* desc; } ;
struct nvkm_vmm_desc {int bits; size_t size; TYPE_1__* func; int type; int align; } ;
struct nvkm_vmm {struct nvkm_mmu* mmu; } ;
struct nvkm_mmu_pt {int dummy; } ;
struct nvkm_mmu {int dummy; } ;
struct TYPE_2__ {int (* pde ) (struct nvkm_vmm*,struct nvkm_vmm_pt*,size_t) ;int (* invalid ) (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;int (* sparse ) (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;int (* unmap ) (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_vmm_iter*,char*,int ) ;
 int FUNC_1 (int*,int,size_t) ;
 struct nvkm_mmu_pt* FUNC_2 (struct nvkm_mmu*,size_t,int ,int const) ;
 int FUNC_3 (struct nvkm_vmm_desc const*) ;
 int FUNC_4 (struct nvkm_vmm_iter*) ;
 int FUNC_5 (struct nvkm_vmm_desc const*,struct nvkm_vmm_pt*,int ,size_t) ;
 int FUNC_6 (struct nvkm_vmm_iter*) ;
 int FUNC_7 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;
 int FUNC_8 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;
 int FUNC_9 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;
 int FUNC_10 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;
 int FUNC_11 (struct nvkm_vmm*,struct nvkm_mmu_pt*,size_t,size_t) ;
 int FUNC_12 (struct nvkm_vmm*,struct nvkm_vmm_pt*,size_t) ;

__attribute__((used)) static bool
FUNC_13(struct nvkm_vmm_iter *VAR_4, struct nvkm_vmm_pt *VAR_5, u32 VAR_6)
{
 const struct nvkm_vmm_desc *VAR_7 = &VAR_4->desc[VAR_4->lvl - 1];
 const int VAR_8 = VAR_7->type == VAR_3;
 struct nvkm_vmm_pt *VAR_9 = VAR_5->pde[VAR_6];
 const bool VAR_10 = !VAR_9->sparse && !VAR_7->func->invalid;
 struct nvkm_vmm *VAR_11 = VAR_4->vmm;
 struct nvkm_mmu *VAR_12 = VAR_11->mmu;
 struct nvkm_mmu_pt *VAR_13;
 u32 VAR_14 = 1 << VAR_7->bits;
 u32 VAR_15, VAR_16, VAR_17;
 u32 VAR_18 = VAR_7->size * VAR_14;

 VAR_5->refs[0]++;

 VAR_9->pt[VAR_8] = FUNC_2(VAR_12, VAR_18, VAR_7->align, VAR_10);
 if (!VAR_9->pt[VAR_8]) {
  VAR_4->lvl--;
  FUNC_6(VAR_4);
  return 0;
 }

 if (VAR_10)
  goto done;

 VAR_13 = VAR_9->pt[VAR_8];

 if (VAR_7->type == VAR_0 && VAR_9->refs[1]) {






  for (VAR_16 = VAR_15 = 0; VAR_16 < VAR_14; VAR_15 = VAR_16) {
   bool VAR_19 = VAR_9->pte[VAR_16] & VAR_1;
   for (VAR_17 = 1, VAR_16++; VAR_16 < VAR_14; VAR_17++, VAR_16++) {
    bool VAR_20 = VAR_9->pte[VAR_16] & VAR_1;
    if (VAR_19 != VAR_20)
     break;
   }

   if (!VAR_19) {
    if (VAR_9->sparse)
     VAR_7->func->sparse(VAR_11, VAR_13, VAR_15, VAR_17);
    else
     VAR_7->func->invalid(VAR_11, VAR_13, VAR_15, VAR_17);
    FUNC_1(&VAR_9->pte[VAR_15], 0x00, VAR_17);
   } else {
    VAR_7->func->unmap(VAR_11, VAR_13, VAR_15, VAR_17);
    while (VAR_17--)
     VAR_9->pte[VAR_15++] |= VAR_2;
   }
  }
 } else {
  if (VAR_9->sparse) {
   FUNC_5(VAR_7, VAR_9, 0, VAR_14);
   VAR_7->func->sparse(VAR_11, VAR_13, 0, VAR_14);
  } else {
   VAR_7->func->invalid(VAR_11, VAR_13, 0, VAR_14);
  }
 }

done:
 FUNC_0(VAR_4, "PDE write %s", FUNC_3(VAR_7));
 VAR_4->desc[VAR_4->lvl].func->pde(VAR_4->vmm, VAR_5, VAR_6);
 FUNC_4(VAR_4);
 return 1;
}
