
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_vmm_map {int offset; int off; int dma; int tags; int memory; TYPE_7__* page; scalar_t__ sgl; TYPE_1__* mem; } ;
struct nvkm_vmm {TYPE_6__* mmu; TYPE_4__* func; int debug; } ;
struct nvkm_vma {scalar_t__ size; size_t page; size_t refd; int mapped; int tags; int memory; int addr; } ;
typedef int nvkm_vmm_pte_func ;
struct TYPE_15__ {TYPE_3__* desc; } ;
struct TYPE_13__ {int device; } ;
struct TYPE_14__ {TYPE_5__ subdev; } ;
struct TYPE_12__ {TYPE_7__* page; } ;
struct TYPE_11__ {TYPE_2__* func; } ;
struct TYPE_10__ {int dma; int sgl; int mem; } ;
struct TYPE_9__ {scalar_t__ length; struct TYPE_9__* next; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct nvkm_vmm*,char*,...) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct nvkm_vmm*,struct nvkm_vma*,void*,int ,struct nvkm_vmm_map*) ;
 int FUNC_6 (struct nvkm_vmm*,struct nvkm_vma*,void*,int ,struct nvkm_vmm_map*) ;
 int FUNC_7 (struct nvkm_vmm*,TYPE_7__*,int ,scalar_t__,struct nvkm_vmm_map*,int ) ;
 int FUNC_8 (struct nvkm_vmm*,TYPE_7__*,int ,scalar_t__,struct nvkm_vmm_map*,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int
FUNC_12(struct nvkm_vmm *VAR_5, struct nvkm_vma *VAR_6,
      void *VAR_7, u32 VAR_8, struct nvkm_vmm_map *VAR_9)
{
 nvkm_vmm_pte_func VAR_10;
 int VAR_11;


 if (FUNC_11(FUNC_2(VAR_9->memory) < VAR_9->offset + VAR_6->size)) {
  FUNC_0(VAR_5, "overrun %016llx %016llx %016llx",
     FUNC_2(VAR_9->memory),
     VAR_9->offset, (u64)VAR_6->size);
  return -VAR_0;
 }


 if (VAR_6->page == VAR_2 &&
     VAR_6->refd == VAR_2) {

  const u32 VAR_12 = VAR_5->debug;
  VAR_5->debug = 0;
  VAR_11 = FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  VAR_5->debug = VAR_12;
  if (VAR_11) {
   FUNC_0(VAR_5, "invalid at any page size");
   FUNC_5(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
   return -VAR_0;
  }
 } else {

  if (VAR_6->refd != VAR_2)
   VAR_9->page = &VAR_5->func->page[VAR_6->refd];
  else
   VAR_9->page = &VAR_5->func->page[VAR_6->page];

  VAR_11 = FUNC_6(VAR_5, VAR_6, VAR_7, VAR_8, VAR_9);
  if (VAR_11) {
   FUNC_0(VAR_5, "invalid %d\n", VAR_11);
   return VAR_11;
  }
 }


 VAR_9->off = VAR_9->offset;
 if (VAR_9->mem) {
  for (; VAR_9->off; VAR_9->mem = VAR_9->mem->next) {
   u64 VAR_13 = (u64)VAR_9->mem->length << VAR_1;
   if (VAR_13 > VAR_9->off)
    break;
   VAR_9->off -= VAR_13;
  }
  VAR_10 = VAR_9->page->desc->func->mem;
 } else
 if (VAR_9->sgl) {
  for (; VAR_9->off; VAR_9->sgl = FUNC_10(VAR_9->sgl)) {
   u64 VAR_14 = FUNC_9(VAR_9->sgl);
   if (VAR_14 > VAR_9->off)
    break;
   VAR_9->off -= VAR_14;
  }
  VAR_10 = VAR_9->page->desc->func->sgl;
 } else {
  VAR_9->dma += VAR_9->offset >> VAR_4;
  VAR_9->off = VAR_9->offset & VAR_3;
  VAR_10 = VAR_9->page->desc->func->dma;
 }


 if (VAR_6->refd == VAR_2) {
  VAR_11 = FUNC_7(VAR_5, VAR_9->page, VAR_6->addr, VAR_6->size, VAR_9, VAR_10);
  if (VAR_11)
   return VAR_11;

  VAR_6->refd = VAR_9->page - VAR_5->func->page;
 } else {
  FUNC_8(VAR_5, VAR_9->page, VAR_6->addr, VAR_6->size, VAR_9, VAR_10);
 }

 FUNC_3(VAR_6->memory, VAR_5->mmu->subdev.device, &VAR_6->tags);
 FUNC_4(&VAR_6->memory);
 VAR_6->memory = FUNC_1(VAR_9->memory);
 VAR_6->mapped = 1;
 VAR_6->tags = VAR_9->tags;
 return 0;
}
