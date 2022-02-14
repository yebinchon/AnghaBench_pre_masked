
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u64 ;
struct nvkm_vmm_page {int dummy; } ;
struct nvkm_vmm {TYPE_1__* func; } ;
struct nvkm_vma {int mapped; size_t refd; size_t page; int used; int user; scalar_t__ size; scalar_t__ addr; scalar_t__ sparse; scalar_t__ mapref; scalar_t__ part; int * memory; } ;
struct TYPE_2__ {struct nvkm_vmm_page* page; } ;


 int FUNC_0 (scalar_t__) ;
 size_t const VAR_0 ;
 struct nvkm_vma* FUNC_1 (struct nvkm_vma*,struct nvkm_vma*) ;
 int FUNC_2 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_3 (struct nvkm_vmm*,struct nvkm_vmm_page const*,scalar_t__ const,scalar_t__) ;
 int FUNC_4 (struct nvkm_vmm*,scalar_t__,scalar_t__,int) ;
 int FUNC_5 (struct nvkm_vmm*,struct nvkm_vmm_page const*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct nvkm_vmm*,struct nvkm_vmm_page const*,scalar_t__ const,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct nvkm_vmm*,struct nvkm_vma*) ;
 int FUNC_8 (struct nvkm_vmm*,struct nvkm_vma*) ;

void
FUNC_9(struct nvkm_vmm *VAR_1, struct nvkm_vma *VAR_2)
{
 const struct nvkm_vmm_page *VAR_3 = VAR_1->func->page;
 struct nvkm_vma *VAR_4 = VAR_2;

 FUNC_0(VAR_2->part);

 if (VAR_2->mapref || !VAR_2->sparse) {
  do {
   const bool VAR_5 = VAR_4->memory != ((void*)0);
   const bool VAR_6 = VAR_4->mapped;
   const u8 VAR_7 = VAR_4->refd;
   const u64 VAR_8 = VAR_4->addr;
   u64 VAR_9 = VAR_4->size;


   while ((VAR_4 = FUNC_1(VAR_4, VAR_4)) && VAR_4->part &&
          (VAR_4->mapped == VAR_6) &&
          (VAR_4->memory != ((void*)0)) == VAR_5 &&
          (VAR_4->refd == VAR_7))
    VAR_9 += VAR_4->size;

   if (VAR_6) {




    FUNC_6(VAR_1, &VAR_3[VAR_7], VAR_8,
       VAR_9, VAR_2->sparse,
       !VAR_5);
   } else
   if (VAR_7 != VAR_0) {

    FUNC_3(VAR_1, &VAR_3[VAR_7], VAR_8, VAR_9);
   }
  } while (VAR_4 && VAR_4->part);
 }





 VAR_4 = VAR_2;
 do {
  if (VAR_4->mapped)
   FUNC_8(VAR_1, VAR_4);
 } while ((VAR_4 = FUNC_1(VAR_2, VAR_4)) && VAR_4->part);

 if (VAR_2->sparse && !VAR_2->mapref) {
  FUNC_5(VAR_1, &VAR_3[VAR_2->refd], VAR_2->addr, VAR_2->size);
 } else
 if (VAR_2->sparse) {
  FUNC_4(VAR_1, VAR_2->addr, VAR_2->size, 0);
 }


 FUNC_2(VAR_1, VAR_2);


 VAR_2->page = VAR_0;
 VAR_2->refd = VAR_0;
 VAR_2->used = 0;
 VAR_2->user = 0;
 FUNC_7(VAR_1, VAR_2);
}
