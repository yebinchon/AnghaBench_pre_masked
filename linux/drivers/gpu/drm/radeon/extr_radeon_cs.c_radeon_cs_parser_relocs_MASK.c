
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int uint32_t ;
struct TYPE_15__ {int vm; } ;
struct radeon_cs_parser {int nrelocs; scalar_t__ ring; int cs_flags; int validated; int ticket; TYPE_6__* rdev; TYPE_4__ ib; int vm_bos; TYPE_8__* relocs; int filp; scalar_t__ dma_reloc_idx; struct radeon_cs_chunk* chunk_relocs; } ;
struct radeon_cs_chunk {int length_dw; int * kdata; } ;
struct radeon_cs_buckets {int dummy; } ;
struct radeon_bo_list {int dummy; } ;
struct drm_radeon_cs_reloc {int flags; int write_domain; int read_domains; int handle; } ;
struct drm_gem_object {int dummy; } ;
struct TYPE_13__ {int ttm; } ;
struct TYPE_19__ {TYPE_2__ tbo; scalar_t__ prime_shared_count; } ;
struct TYPE_14__ {int num_shared; int head; TYPE_2__* bo; } ;
struct TYPE_18__ {int preferred_domains; int allowed_domains; TYPE_3__ tv; TYPE_9__* robj; } ;
struct TYPE_17__ {scalar_t__ family; TYPE_1__* ddev; } ;
struct TYPE_16__ {int mmap_sem; } ;
struct TYPE_12__ {int pdev; } ;
struct TYPE_11__ {TYPE_5__* mm; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 TYPE_10__* VAR_15 ;
 int FUNC_1 (int *) ;
 struct drm_gem_object* FUNC_2 (int ,int ) ;
 TYPE_9__* FUNC_3 (struct drm_gem_object*) ;
 TYPE_8__* FUNC_4 (int,int,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_6__*,int *,int *,scalar_t__) ;
 int FUNC_7 (struct radeon_cs_buckets*,int *,unsigned int) ;
 int FUNC_8 (struct radeon_cs_buckets*,int *) ;
 int FUNC_9 (struct radeon_cs_buckets*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (TYPE_6__*,int ,int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct radeon_cs_parser *VAR_16)
{
 struct radeon_cs_chunk *VAR_17;
 struct radeon_cs_buckets VAR_18;
 unsigned VAR_19;
 bool VAR_20 = 0;
 int VAR_21;

 if (VAR_16->chunk_relocs == ((void*)0)) {
  return 0;
 }
 VAR_17 = VAR_16->chunk_relocs;
 VAR_16->dma_reloc_idx = 0;

 VAR_16->nrelocs = VAR_17->length_dw / 4;
 VAR_16->relocs = FUNC_4(VAR_16->nrelocs, sizeof(struct radeon_bo_list),
   VAR_5 | VAR_14);
 if (VAR_16->relocs == ((void*)0)) {
  return -VAR_4;
 }

 FUNC_9(&VAR_18);

 for (VAR_19 = 0; VAR_19 < VAR_16->nrelocs; VAR_19++) {
  struct drm_radeon_cs_reloc *VAR_22;
  struct drm_gem_object *VAR_23;
  unsigned VAR_24;

  VAR_22 = (struct drm_radeon_cs_reloc *)&VAR_17->kdata[VAR_19*4];
  VAR_23 = FUNC_2(VAR_16->filp, VAR_22->handle);
  if (VAR_23 == ((void*)0)) {
   FUNC_0("gem object lookup failed 0x%x\n",
      VAR_22->handle);
   return -VAR_3;
  }
  VAR_16->relocs[VAR_19].robj = FUNC_3(VAR_23);







  VAR_24 = (VAR_22->flags & VAR_13) * 2
      + !!VAR_22->write_domain;






  if (VAR_16->ring == VAR_7 &&
      (VAR_19 <= 0 || FUNC_5(VAR_16->rdev->ddev->pdev,
         VAR_6) ||
       VAR_16->rdev->family == VAR_0 ||
       VAR_16->rdev->family == VAR_1)) {


   VAR_16->relocs[VAR_19].preferred_domains =
    VAR_12;

   VAR_16->relocs[VAR_19].allowed_domains =
    VAR_12;


   VAR_24 = VAR_8;
  } else {
   uint32_t VAR_25 = VAR_22->write_domain ?
    VAR_22->write_domain : VAR_22->read_domains;

   if (VAR_25 & VAR_10) {
    FUNC_0("RADEON_GEM_DOMAIN_CPU is not valid "
       "for command submission\n");
    return -VAR_2;
   }

   VAR_16->relocs[VAR_19].preferred_domains = VAR_25;
   if (VAR_25 == VAR_12)
    VAR_25 |= VAR_11;
   VAR_16->relocs[VAR_19].allowed_domains = VAR_25;
  }

  if (FUNC_10(VAR_16->relocs[VAR_19].robj->tbo.ttm)) {
   uint32_t VAR_26 = VAR_16->relocs[VAR_19].preferred_domains;
   if (!(VAR_26 & VAR_11)) {
    FUNC_0("Only RADEON_GEM_DOMAIN_GTT is "
       "allowed for userptr BOs\n");
    return -VAR_2;
   }
   VAR_20 = 1;
   VAR_26 = VAR_11;
   VAR_16->relocs[VAR_19].preferred_domains = VAR_26;
   VAR_16->relocs[VAR_19].allowed_domains = VAR_26;
  }


  if (VAR_16->relocs[VAR_19].robj->prime_shared_count) {
   VAR_16->relocs[VAR_19].allowed_domains &= ~VAR_12;
   if (!VAR_16->relocs[VAR_19].allowed_domains) {
    FUNC_0("BO associated with dma-buf cannot "
       "be moved to VRAM\n");
    return -VAR_2;
   }
  }

  VAR_16->relocs[VAR_19].tv.bo = &VAR_16->relocs[VAR_19].robj->tbo;
  VAR_16->relocs[VAR_19].tv.num_shared = !VAR_22->write_domain;

  FUNC_7(&VAR_18, &VAR_16->relocs[VAR_19].tv.head,
          VAR_24);
 }

 FUNC_8(&VAR_18, &VAR_16->validated);

 if (VAR_16->cs_flags & VAR_9)
  VAR_16->vm_bos = FUNC_11(VAR_16->rdev, VAR_16->ib.vm,
           &VAR_16->validated);
 if (VAR_20)
  FUNC_1(&VAR_15->mm->mmap_sem);

 VAR_21 = FUNC_6(VAR_16->rdev, &VAR_16->ticket, &VAR_16->validated, VAR_16->ring);

 if (VAR_20)
  FUNC_12(&VAR_15->mm->mmap_sem);

 return VAR_21;
}
