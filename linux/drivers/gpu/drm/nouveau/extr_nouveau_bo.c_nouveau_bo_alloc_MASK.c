
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef unsigned long long u64 ;
typedef int u32 ;
struct nvif_vmm {int page_nr; TYPE_8__* page; } ;
struct TYPE_15__ {scalar_t__ oclass; } ;
struct nvif_mmu {size_t* kind; TYPE_7__ object; } ;
struct TYPE_12__ {int bdev; } ;
struct nouveau_drm {TYPE_4__ ttm; } ;
struct TYPE_13__ {scalar_t__ family; } ;
struct TYPE_14__ {TYPE_5__ info; } ;
struct TYPE_10__ {struct nvif_vmm vmm; } ;
struct TYPE_9__ {struct nvif_vmm vmm; scalar_t__ cli; } ;
struct nouveau_cli {TYPE_6__ device; TYPE_2__ vmm; TYPE_1__ svm; struct nvif_mmu mmu; struct nouveau_drm* drm; } ;
struct TYPE_11__ {int * bdev; } ;
struct nouveau_bo {int force_coherent; int kind; int comp; int zeta; int mode; int contig; int page; TYPE_3__ bo; int vma_list; int entry; int head; } ;
struct TYPE_16__ {int shift; scalar_t__ comp; int host; int vram; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nouveau_bo* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (struct nouveau_drm*,char*,unsigned long long) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct nouveau_bo*) ;
 struct nouveau_bo* FUNC_5 (int,int ) ;
 int FUNC_6 (struct nouveau_bo*,int,int*,unsigned long long*) ;
 int FUNC_7 (struct nouveau_drm*) ;
 int FUNC_8 (struct nvif_mmu*,int) ;

struct nouveau_bo *
FUNC_9(struct nouveau_cli *VAR_12, u64 *VAR_13, int *VAR_14, u32 VAR_15,
   u32 VAR_16, u32 VAR_17)
{
 struct nouveau_drm *VAR_18 = VAR_12->drm;
 struct nouveau_bo *VAR_19;
 struct nvif_mmu *VAR_20 = &VAR_12->mmu;
 struct nvif_vmm *VAR_21 = VAR_12->svm.cli ? &VAR_12->svm.vmm : &VAR_12->vmm.vmm;
 int VAR_22, VAR_23 = -1;

 if (!*VAR_13) {
  FUNC_2(VAR_18, "skipped size %016llx\n", *VAR_13);
  return FUNC_0(-VAR_0);
 }

 VAR_19 = FUNC_5(sizeof(struct nouveau_bo), VAR_2);
 if (!VAR_19)
  return FUNC_0(-VAR_1);
 FUNC_1(&VAR_19->head);
 FUNC_1(&VAR_19->entry);
 FUNC_1(&VAR_19->vma_list);
 VAR_19->bo.bdev = &VAR_18->ttm.bdev;





 if (VAR_15 & VAR_10) {



  if (!FUNC_7(VAR_18))
   VAR_19->force_coherent = 1;
 }

 if (VAR_12->device.info.family >= VAR_6) {
  VAR_19->kind = (VAR_17 & 0x0000ff00) >> 8;
  if (!FUNC_8(VAR_20, VAR_19->kind)) {
   FUNC_4(VAR_19);
   return FUNC_0(-VAR_0);
  }

  VAR_19->comp = VAR_20->kind[VAR_19->kind] != VAR_19->kind;
 } else
 if (VAR_12->device.info.family >= VAR_7) {
  VAR_19->kind = (VAR_17 & 0x00007f00) >> 8;
  VAR_19->comp = (VAR_17 & 0x00030000) >> 16;
  if (!FUNC_8(VAR_20, VAR_19->kind)) {
   FUNC_4(VAR_19);
   return FUNC_0(-VAR_0);
  }
 } else {
  VAR_19->zeta = (VAR_17 & 0x00000007);
 }
 VAR_19->mode = VAR_16;
 VAR_19->contig = !(VAR_17 & VAR_3);


 for (VAR_22 = 0; VAR_22 < VAR_21->page_nr; VAR_22++) {







  if (VAR_12->device.info.family > VAR_5 &&
      (VAR_15 & VAR_11) && !VAR_21->page[VAR_22].vram)
   continue;
  if ((VAR_15 & VAR_9) &&
      (!VAR_21->page[VAR_22].host || VAR_21->page[VAR_22].shift > VAR_8))
   continue;





  if (VAR_23 < 0 || !VAR_19->comp || VAR_21->page[VAR_22].comp)
   VAR_23 = VAR_22;


  if (*VAR_13 >= 1ULL << VAR_21->page[VAR_22].shift)
   break;
 }

 if (FUNC_3(VAR_23 < 0))
  return FUNC_0(-VAR_0);


 if (VAR_19->comp && !VAR_21->page[VAR_23].comp) {
  if (VAR_20->object.oclass >= VAR_4)
   VAR_19->kind = VAR_20->kind[VAR_19->kind];
  VAR_19->comp = 0;
 }
 VAR_19->page = VAR_21->page[VAR_23].shift;

 FUNC_6(VAR_19, VAR_15, VAR_14, VAR_13);

 return VAR_19;
}
