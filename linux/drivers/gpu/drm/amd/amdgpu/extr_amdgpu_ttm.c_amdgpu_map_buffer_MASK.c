
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int u64 ;
struct ttm_tt {int dummy; } ;
struct ttm_mem_reg {int dummy; } ;
struct ttm_buffer_object {struct ttm_tt* ttm; } ;
struct dma_fence {int dummy; } ;
struct TYPE_11__ {int * dma_address; } ;
struct amdgpu_ttm_tt {TYPE_4__ ttm; } ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_job {TYPE_6__* ibs; } ;
struct TYPE_12__ {int entity; TYPE_2__* buffer_funcs; } ;
struct TYPE_10__ {int bo; } ;
struct TYPE_8__ {int gart_start; } ;
struct amdgpu_device {TYPE_5__ mman; TYPE_3__ gart; TYPE_1__ gmc; } ;
typedef int dma_addr_t ;
struct TYPE_13__ {unsigned int length_dw; int * ptr; scalar_t__ gpu_addr; } ;
struct TYPE_9__ {int copy_max_bytes; unsigned int copy_num_dw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int VAR_3 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct amdgpu_device*,TYPE_6__*,int,int,unsigned int) ;
 int FUNC_4 (struct amdgpu_device*,int ,unsigned int,int *,int,int *) ;
 int FUNC_5 (struct amdgpu_device*,unsigned int,struct amdgpu_job**) ;
 int FUNC_6 (struct amdgpu_job*) ;
 int FUNC_7 (struct amdgpu_job*,int *,int ,struct dma_fence**) ;
 int FUNC_8 (struct amdgpu_ring*,TYPE_6__*) ;
 int FUNC_9 (struct amdgpu_device*,struct ttm_tt*,struct ttm_mem_reg*) ;
 int FUNC_10 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_11(struct ttm_buffer_object *VAR_4,
        struct ttm_mem_reg *VAR_5, unsigned VAR_6,
        uint64_t VAR_7, unsigned VAR_8,
        struct amdgpu_ring *VAR_9,
        uint64_t *VAR_10)
{
 struct amdgpu_ttm_tt *VAR_11 = (void *)VAR_4->ttm;
 struct amdgpu_device *VAR_12 = VAR_9->adev;
 struct ttm_tt *VAR_13 = VAR_4->ttm;
 struct amdgpu_job *VAR_14;
 unsigned VAR_15, VAR_16;
 dma_addr_t *VAR_17;
 struct dma_fence *VAR_18;
 uint64_t VAR_19, VAR_20;
 uint64_t VAR_21;
 int VAR_22;

 FUNC_0(VAR_12->mman.buffer_funcs->copy_max_bytes <
        VAR_2 * 8);

 *VAR_10 = VAR_12->gmc.gart_start;
 *VAR_10 += (u64)VAR_8 * VAR_2 *
  VAR_1;

 VAR_15 = VAR_12->mman.buffer_funcs->copy_num_dw;
 while (VAR_15 & 0x7)
  VAR_15++;

 VAR_16 = VAR_6 * 8;

 VAR_22 = FUNC_5(VAR_12, VAR_15 * 4 + VAR_16, &VAR_14);
 if (VAR_22)
  return VAR_22;

 VAR_19 = VAR_15 * 4;
 VAR_19 += VAR_14->ibs[0].gpu_addr;

 VAR_20 = FUNC_2(VAR_12->gart.bo);
 VAR_20 += VAR_8 * VAR_2 * 8;
 FUNC_3(VAR_12, &VAR_14->ibs[0], VAR_19,
    VAR_20, VAR_16);

 FUNC_8(VAR_9, &VAR_14->ibs[0]);
 FUNC_1(VAR_14->ibs[0].length_dw > VAR_15);

 VAR_17 = &VAR_11->ttm.dma_address[VAR_7 >> VAR_3];
 VAR_21 = FUNC_9(VAR_12, VAR_13, VAR_5);
 VAR_22 = FUNC_4(VAR_12, 0, VAR_6, VAR_17, VAR_21,
       &VAR_14->ibs[0].ptr[VAR_15]);
 if (VAR_22)
  goto error_free;

 VAR_22 = FUNC_7(VAR_14, &VAR_12->mman.entity,
         VAR_0, &VAR_18);
 if (VAR_22)
  goto error_free;

 FUNC_10(VAR_18);

 return VAR_22;

error_free:
 FUNC_6(VAR_14);
 return VAR_22;
}
