
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct drm_mm_node {int size; } ;
struct dma_resv {int dummy; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int dummy; } ;
struct TYPE_5__ {int gtt_window_lock; int buffer_funcs_enabled; struct amdgpu_ring* buffer_funcs_ring; } ;
struct amdgpu_device {TYPE_1__ mman; } ;
struct amdgpu_copy_mem {int offset; TYPE_2__* mem; int bo; } ;
struct TYPE_6__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct amdgpu_ring*,int,int,unsigned long,struct dma_resv*,struct dma_fence**,int,int) ;
 struct drm_mm_node* FUNC_3 (TYPE_2__*,int*) ;
 int FUNC_4 (int ,TYPE_2__*,int ,int,int,struct amdgpu_ring*,int*) ;
 int FUNC_5 (int ,struct drm_mm_node*,TYPE_2__*) ;
 struct dma_fence* FUNC_6 (struct dma_fence*) ;
 int FUNC_7 (struct dma_fence*) ;
 scalar_t__ FUNC_8 (int,int) ;
 int FUNC_9 (int,int) ;
 unsigned long FUNC_10 (int ,int,int const) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

int FUNC_13(struct amdgpu_device *VAR_6,
          struct amdgpu_copy_mem *VAR_7,
          struct amdgpu_copy_mem *VAR_8,
          uint64_t VAR_9,
          struct dma_resv *VAR_10,
          struct dma_fence **VAR_11)
{
 struct amdgpu_ring *VAR_12 = VAR_6->mman.buffer_funcs_ring;
 struct drm_mm_node *VAR_13, *VAR_14;
 uint64_t VAR_15, VAR_16, VAR_17,
   VAR_18, VAR_19, VAR_20;
 struct dma_fence *VAR_21 = ((void*)0);
 int VAR_22 = 0;
 const uint64_t VAR_23 = (VAR_2 *
     VAR_1);

 if (!VAR_6->mman.buffer_funcs_enabled) {
  FUNC_0("Trying to move memory with ring turned off.\n");
  return -VAR_3;
 }

 VAR_13 = FUNC_3(VAR_7->mem, &VAR_7->offset);
 VAR_15 = FUNC_5(VAR_7->bo, VAR_13, VAR_7->mem) +
          VAR_7->offset;
 VAR_17 = (VAR_13->size << VAR_4) - VAR_7->offset;
 VAR_19 = VAR_15 & (VAR_5 - 1);

 VAR_14 = FUNC_3(VAR_8->mem, &VAR_8->offset);
 VAR_16 = FUNC_5(VAR_8->bo, VAR_14, VAR_8->mem) +
          VAR_8->offset;
 VAR_18 = (VAR_14->size << VAR_4) - VAR_8->offset;
 VAR_20 = VAR_16 & (VAR_5 - 1);

 FUNC_11(&VAR_6->mman.gtt_window_lock);

 while (VAR_9) {
  unsigned long VAR_24;
  uint64_t VAR_25 = VAR_15, VAR_26 = VAR_16;
  struct dma_fence *VAR_27;




  VAR_24 = FUNC_10(FUNC_9(VAR_17, VAR_18), VAR_9,
    VAR_23);
  if (VAR_24 + VAR_19 > VAR_23 ||
      VAR_24 + VAR_20 > VAR_23)
   VAR_24 -= FUNC_8(VAR_19, VAR_20);




  if (VAR_7->mem->start == VAR_0) {
   VAR_22 = FUNC_4(VAR_7->bo, VAR_7->mem,
     FUNC_1(VAR_24 + VAR_19),
     VAR_15, 0, VAR_12,
     &VAR_25);
   if (VAR_22)
    goto error;



   VAR_25 += VAR_19;
  }

  if (VAR_8->mem->start == VAR_0) {
   VAR_22 = FUNC_4(VAR_8->bo, VAR_8->mem,
     FUNC_1(VAR_24 + VAR_20),
     VAR_16, 1, VAR_12,
     &VAR_26);
   if (VAR_22)
    goto error;
   VAR_26 += VAR_20;
  }

  VAR_22 = FUNC_2(VAR_12, VAR_25, VAR_26, VAR_24,
           VAR_10, &VAR_27, 0, 1);
  if (VAR_22)
   goto error;

  FUNC_7(VAR_21);
  VAR_21 = VAR_27;

  VAR_9 -= VAR_24;
  if (!VAR_9)
   break;

  VAR_17 -= VAR_24;
  if (!VAR_17) {
   VAR_15 = FUNC_5(VAR_7->bo, ++VAR_13,
            VAR_7->mem);
   VAR_17 = (VAR_13->size << VAR_4);
   VAR_19 = 0;
  } else {
   VAR_15 += VAR_24;
   VAR_19 = VAR_15 & (VAR_5 - 1);
  }
  VAR_18 -= VAR_24;
  if (!VAR_18) {
   VAR_16 = FUNC_5(VAR_8->bo, ++VAR_14,
            VAR_8->mem);
   VAR_18 = (VAR_14->size << VAR_4);
   VAR_20 = 0;
  } else {
   VAR_16 += VAR_24;
   VAR_20 = VAR_16 & (VAR_5 - 1);
  }
 }
error:
 FUNC_12(&VAR_6->mman.gtt_window_lock);
 if (VAR_11)
  *VAR_11 = FUNC_6(VAR_21);
 FUNC_7(VAR_21);
 return VAR_22;
}
