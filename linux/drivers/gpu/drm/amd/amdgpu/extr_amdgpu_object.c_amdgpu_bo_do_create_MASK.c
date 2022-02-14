
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ttm_operation_ctx {int interruptible; int no_wait_gpu; int bytes_moved; int flags; int resv; } ;
struct dma_fence {int dummy; } ;
struct TYPE_10__ {scalar_t__ visible_vram_size; } ;
struct TYPE_6__ {int bdev; } ;
struct amdgpu_device {TYPE_5__ gmc; TYPE_1__ mman; int ddev; } ;
struct amdgpu_bo_param {unsigned long size; int domain; unsigned long byte_align; int preferred_domain; int flags; int resv; int type; } ;
struct TYPE_9__ {int resv; } ;
struct TYPE_7__ {scalar_t__ mem_type; scalar_t__ start; int placement; } ;
struct TYPE_8__ {int priority; TYPE_4__ base; struct dma_fence* moving; TYPE_2__ mem; int * bdev; } ;
struct amdgpu_bo {int preferred_domains; int allowed_domains; int flags; TYPE_3__ tbo; int placement; int * vm_bo; int shadow_list; } ;


 unsigned long FUNC_0 (unsigned long,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 unsigned long VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_2 (struct amdgpu_bo*,struct dma_fence*,int) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct amdgpu_bo**) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (struct amdgpu_device*,unsigned long,int) ;
 int FUNC_8 (struct amdgpu_device*,int ,int ) ;
 int FUNC_9 (struct amdgpu_bo*,int ,int ,struct dma_fence**) ;
 int FUNC_10 (TYPE_5__*) ;
 struct dma_fence* FUNC_11 (struct dma_fence*) ;
 int FUNC_12 (struct dma_fence*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,TYPE_4__*,unsigned long) ;
 struct amdgpu_bo* FUNC_15 (int,int ) ;
 int FUNC_16 (struct amdgpu_bo*) ;
 size_t FUNC_17 (int *,unsigned long,int) ;
 int FUNC_18 (int *,TYPE_3__*,unsigned long,int ,int *,unsigned long,struct ttm_operation_ctx*,size_t,int *,int ,int *) ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_19 (int) ;

__attribute__((used)) static int FUNC_20(struct amdgpu_device *VAR_19,
          struct amdgpu_bo_param *VAR_20,
          struct amdgpu_bo **VAR_21)
{
 struct ttm_operation_ctx VAR_22 = {
  .interruptible = (VAR_20->type != VAR_18),
  .no_wait_gpu = 0,
  .resv = VAR_20->resv,
  .flags = VAR_20->type != VAR_18 ?
   VAR_13 : 0
 };
 struct amdgpu_bo *VAR_23;
 unsigned long VAR_24, VAR_25 = VAR_20->size;
 size_t VAR_26;
 int VAR_27;


 if (VAR_20->domain & (VAR_6 | VAR_7)) {

  VAR_24 = VAR_20->byte_align;
  VAR_25 <<= VAR_11;
 } else if (VAR_20->domain & VAR_4) {

  VAR_24 = FUNC_0(VAR_20->byte_align, 4);
  VAR_25 = FUNC_0(VAR_25, 4) << VAR_11;
 } else {

  VAR_24 = FUNC_0(VAR_20->byte_align, VAR_12) >> VAR_11;
  VAR_25 = FUNC_0(VAR_25, VAR_12);
 }

 if (!FUNC_7(VAR_19, VAR_25, VAR_20->domain))
  return -VAR_9;

 *VAR_21 = ((void*)0);

 VAR_26 = FUNC_17(&VAR_19->mman.bdev, VAR_25,
           sizeof(struct amdgpu_bo));

 VAR_23 = FUNC_15(sizeof(struct amdgpu_bo), VAR_10);
 if (VAR_23 == ((void*)0))
  return -VAR_9;
 FUNC_14(VAR_19->ddev, &VAR_23->tbo.base, VAR_25);
 FUNC_1(&VAR_23->shadow_list);
 VAR_23->vm_bo = ((void*)0);
 VAR_23->preferred_domains = VAR_20->preferred_domain ? VAR_20->preferred_domain :
  VAR_20->domain;
 VAR_23->allowed_domains = VAR_23->preferred_domains;
 if (VAR_20->type != VAR_18 &&
     VAR_23->allowed_domains == VAR_8)
  VAR_23->allowed_domains |= VAR_5;

 VAR_23->flags = VAR_20->flags;

 if (!FUNC_4(VAR_23->flags))
  VAR_23->flags &= ~VAR_1;

 VAR_23->tbo.bdev = &VAR_19->mman.bdev;
 if (VAR_20->domain & (VAR_6 | VAR_7 |
     VAR_4))
  FUNC_3(VAR_23, VAR_3);
 else
  FUNC_3(VAR_23, VAR_20->domain);
 if (VAR_20->type == VAR_18)
  VAR_23->tbo.priority = 1;

 VAR_27 = FUNC_18(&VAR_19->mman.bdev, &VAR_23->tbo, VAR_25, VAR_20->type,
     &VAR_23->placement, VAR_24, &VAR_22, VAR_26,
     ((void*)0), VAR_20->resv, &VAR_16);
 if (FUNC_19(VAR_27 != 0))
  return VAR_27;

 if (!FUNC_10(&VAR_19->gmc) &&
     VAR_23->tbo.mem.mem_type == VAR_15 &&
     VAR_23->tbo.mem.start < VAR_19->gmc.visible_vram_size >> VAR_11)
  FUNC_8(VAR_19, VAR_22.bytes_moved,
          VAR_22.bytes_moved);
 else
  FUNC_8(VAR_19, VAR_22.bytes_moved, 0);

 if (VAR_20->flags & VAR_2 &&
     VAR_23->tbo.mem.placement & VAR_14) {
  struct dma_fence *VAR_28;

  VAR_27 = FUNC_9(VAR_23, 0, VAR_23->tbo.base.resv, &VAR_28);
  if (FUNC_19(VAR_27))
   goto fail_unreserve;

  FUNC_2(VAR_23, VAR_28, 0);
  FUNC_12(VAR_23->tbo.moving);
  VAR_23->tbo.moving = FUNC_11(VAR_28);
  FUNC_12(VAR_28);
 }
 if (!VAR_20->resv)
  FUNC_6(VAR_23);
 *VAR_21 = VAR_23;

 FUNC_16(VAR_23);


 if (VAR_20->type == VAR_17)
  VAR_23->flags &= ~VAR_0;

 return 0;

fail_unreserve:
 if (!VAR_20->resv)
  FUNC_13(VAR_23->tbo.base.resv);
 FUNC_5(&VAR_23);
 return VAR_27;
}
