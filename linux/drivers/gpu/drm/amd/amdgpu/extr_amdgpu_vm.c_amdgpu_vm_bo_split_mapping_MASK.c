
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drm_mm_node {scalar_t__ size; scalar_t__ start; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_vm {int dummy; } ;
struct TYPE_2__ {int fragment_size; scalar_t__ vram_base_offset; } ;
struct amdgpu_device {scalar_t__ asic_type; TYPE_1__ vm_manager; } ;
struct amdgpu_bo_va_mapping {scalar_t__ start; scalar_t__ flags; scalar_t__ offset; scalar_t__ last; } ;
typedef scalar_t__ dma_addr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int FUNC_0 (struct amdgpu_device*,struct dma_fence*,scalar_t__*,struct amdgpu_vm*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,struct dma_fence**) ;
 scalar_t__ FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (struct amdgpu_bo_va_mapping*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct amdgpu_device *VAR_16,
          struct dma_fence *VAR_17,
          dma_addr_t *VAR_18,
          struct amdgpu_vm *VAR_19,
          struct amdgpu_bo_va_mapping *VAR_20,
          uint64_t VAR_21,
          struct amdgpu_device *VAR_22,
          struct drm_mm_node *VAR_23,
          struct dma_fence **VAR_24)
{
 unsigned VAR_25 = 1 << VAR_16->vm_manager.fragment_size;
 uint64_t VAR_26, VAR_27 = VAR_20->start;
 int VAR_28;




 if (!(VAR_20->flags & VAR_6))
  VAR_21 &= ~VAR_6;
 if (!(VAR_20->flags & VAR_10))
  VAR_21 &= ~VAR_10;

 VAR_21 &= ~VAR_1;
 VAR_21 |= VAR_20->flags & VAR_1;

 if (VAR_16->asic_type >= VAR_11) {
  VAR_21 &= ~VAR_3;
  VAR_21 |= (VAR_20->flags & VAR_3);
 } else {
  VAR_21 &= ~VAR_4;
  VAR_21 |= (VAR_20->flags & VAR_4);
 }

 if ((VAR_20->flags & VAR_5) &&
     (VAR_16->asic_type >= VAR_12)) {
  VAR_21 |= VAR_5;
  if (VAR_16->asic_type >= VAR_11) {
   VAR_21 |= VAR_7;
   VAR_21 |= VAR_2;
   VAR_21 |= VAR_8;
  }
  VAR_21 &= ~VAR_9;
 }

 FUNC_2(VAR_20);

 VAR_26 = VAR_20->offset >> VAR_13;
 if (VAR_23) {
  while (VAR_26 >= VAR_23->size) {
   VAR_26 -= VAR_23->size;
   ++VAR_23;
  }
 }

 do {
  dma_addr_t *VAR_29 = ((void*)0);
  uint64_t VAR_30;
  uint64_t VAR_31, VAR_32;

  if (VAR_23) {
   VAR_31 = VAR_23->start << VAR_13;
   VAR_30 = (VAR_23->size - VAR_26) *
    VAR_0;
  } else {
   VAR_31 = 0;
   VAR_30 = VAR_15;
  }

  if (VAR_18) {
   uint64_t VAR_33;

   for (VAR_33 = 1;
        VAR_33 < VAR_30 / VAR_0;
        ++VAR_33) {
    uint64_t VAR_34 = VAR_26 + VAR_33;

    if (VAR_18[VAR_34] !=
        (VAR_18[VAR_34 - 1] + VAR_14))
     break;
   }

   if (VAR_33 < VAR_25) {
    VAR_31 = VAR_26 << VAR_13;
    VAR_29 = VAR_18;
   } else {
    VAR_31 = VAR_18[VAR_26];
    VAR_30 = VAR_33 * VAR_0;
   }

  } else if (VAR_21 & VAR_9) {
   VAR_31 += VAR_22->vm_manager.vram_base_offset;
   VAR_31 += VAR_26 << VAR_13;
  }

  VAR_32 = FUNC_1((uint64_t)VAR_20->last, VAR_27 + VAR_30 - 1);
  VAR_28 = FUNC_0(VAR_16, VAR_17, VAR_29, VAR_19,
      VAR_27, VAR_32, VAR_21, VAR_31,
      VAR_24);
  if (VAR_28)
   return VAR_28;

  VAR_26 += (VAR_32 - VAR_27 + 1) / VAR_0;
  if (VAR_23 && VAR_23->size == VAR_26) {
   VAR_26 = 0;
   ++VAR_23;
  }
  VAR_27 = VAR_32 + 1;

 } while (FUNC_3(VAR_27 != VAR_20->last + 1));

 return 0;
}
