
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
typedef int u64 ;
struct ttm_mem_reg {scalar_t__ mem_type; scalar_t__ start; } ;
struct radeon_vm {TYPE_3__* ids; int status_lock; int cleared; } ;
struct radeon_ib {unsigned int length_dw; TYPE_5__* fence; int sync; } ;
struct TYPE_9__ {scalar_t__ vram_base_offset; } ;
struct radeon_device {TYPE_2__ vm_manager; int dev; } ;
struct TYPE_11__ {int start; int last; } ;
struct radeon_bo_va {int flags; int last_pt_update; TYPE_4__ it; TYPE_7__* bo; int vm_status; struct radeon_vm* vm; } ;
struct TYPE_8__ {int ttm; } ;
struct TYPE_13__ {int flags; TYPE_1__ tbo; } ;
struct TYPE_12__ {int is_vm_update; } ;
struct TYPE_10__ {int last_id_use; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,TYPE_7__*,struct radeon_vm*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 unsigned int FUNC_6 (int ,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_11 (struct radeon_device*,int ,struct radeon_ib*,int *,unsigned int) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_13 (int *,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 int VAR_15 ;
 int FUNC_15 (struct radeon_vm*,int,int,TYPE_5__*) ;
 int FUNC_16 (int) ;
 int FUNC_17 (struct radeon_device*,struct radeon_vm*,struct radeon_ib*,int,int,int,int) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (struct radeon_bo_va*) ;

int FUNC_21(struct radeon_device *VAR_16,
   struct radeon_bo_va *VAR_17,
   struct ttm_mem_reg *VAR_18)
{
 struct radeon_vm *VAR_19 = VAR_17->vm;
 struct radeon_ib VAR_20;
 unsigned VAR_21, VAR_22, VAR_23;
 uint64_t VAR_24;
 uint32_t VAR_25;
 int VAR_26;

 if (!VAR_17->it.start) {
  FUNC_1(VAR_16->dev, "bo %p don't has a mapping in vm %p\n",
   VAR_17->bo, VAR_19);
  return -VAR_0;
 }

 FUNC_18(&VAR_19->status_lock);
 if (VAR_18) {
  if (FUNC_5(&VAR_17->vm_status)) {
   FUNC_19(&VAR_19->status_lock);
   return 0;
  }
  FUNC_4(&VAR_17->vm_status);
 } else {
  FUNC_3(&VAR_17->vm_status);
  FUNC_2(&VAR_17->vm_status, &VAR_19->cleared);
 }
 FUNC_19(&VAR_19->status_lock);

 VAR_17->flags &= ~VAR_11;
 VAR_17->flags &= ~VAR_10;
 VAR_17->flags &= ~VAR_9;
 if (VAR_17->bo && FUNC_14(VAR_17->bo->tbo.ttm))
  VAR_17->flags &= ~VAR_12;

 if (VAR_18) {
  VAR_24 = (u64)VAR_18->start << VAR_2;
  if (VAR_18->mem_type != VAR_13) {
   VAR_17->flags |= VAR_11;
  }
  if (VAR_18->mem_type == VAR_14) {
   VAR_17->flags |= VAR_10;
   if (!(VAR_17->bo->flags & (VAR_7 | VAR_6)))
    VAR_17->flags |= VAR_9;

  } else {
   VAR_24 += VAR_16->vm_manager.vram_base_offset;
  }
 } else {
  VAR_24 = 0;
 }

 FUNC_20(VAR_17);

 VAR_21 = VAR_17->it.last - VAR_17->it.start + 1;



 VAR_22 = (VAR_21 >> FUNC_6(VAR_15, 11)) + 1;


 VAR_23 = 64;

 VAR_25 = FUNC_16(VAR_17->flags);
 if ((VAR_25 & VAR_3) == VAR_3) {

  VAR_23 += VAR_22 * 7;

 } else if (VAR_25 & VAR_4) {

  VAR_23 += VAR_22 * 4;


  VAR_23 += VAR_21 * 2;

 } else {

  VAR_23 += VAR_22 * 10;


  VAR_23 += 2 * 10;
 }


 if (VAR_23 > 0xfffff)
  return -VAR_1;

 VAR_26 = FUNC_11(VAR_16, VAR_5, &VAR_20, ((void*)0), VAR_23 * 4);
 if (VAR_26)
  return VAR_26;
 VAR_20.length_dw = 0;

 if (!(VAR_17->flags & VAR_11)) {
  unsigned VAR_27;

  for (VAR_27 = 0; VAR_27 < VAR_8; ++VAR_27)
   FUNC_13(&VAR_20.sync, VAR_19->ids[VAR_27].last_id_use);
 }

 VAR_26 = FUNC_17(VAR_16, VAR_19, &VAR_20, VAR_17->it.start,
      VAR_17->it.last + 1, VAR_24,
      FUNC_16(VAR_17->flags));
 if (VAR_26) {
  FUNC_10(VAR_16, &VAR_20);
  return VAR_26;
 }

 FUNC_7(VAR_16, &VAR_20);
 FUNC_0(VAR_20.length_dw > VAR_23);

 VAR_26 = FUNC_12(VAR_16, &VAR_20, ((void*)0), 0);
 if (VAR_26) {
  FUNC_10(VAR_16, &VAR_20);
  return VAR_26;
 }
 VAR_20.fence->is_vm_update = 1;
 FUNC_15(VAR_19, VAR_17->it.start, VAR_17->it.last + 1, VAR_20.fence);
 FUNC_9(&VAR_17->last_pt_update);
 VAR_17->last_pt_update = FUNC_8(VAR_20.fence);
 FUNC_10(VAR_16, &VAR_20);

 return 0;
}
