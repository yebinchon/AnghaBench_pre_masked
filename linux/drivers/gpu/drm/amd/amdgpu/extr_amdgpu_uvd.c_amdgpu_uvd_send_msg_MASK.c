
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef void* uint32_t ;
struct ttm_operation_ctx {int member_0; int member_1; } ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int me; struct amdgpu_device* adev; } ;
struct amdgpu_job {int sync; struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct TYPE_5__ {int entity; int address_64_bit; } ;
struct amdgpu_device {scalar_t__ asic_type; unsigned int*** reg_offset; TYPE_2__ uvd; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_3__ tbo; int placement; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 long VAR_3 ;
 void* FUNC_0 (scalar_t__,int ) ;
 unsigned int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_1 (struct amdgpu_bo*,struct dma_fence*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo*) ;
 int FUNC_4 (struct amdgpu_bo*,int ) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo**) ;
 int FUNC_7 (struct amdgpu_bo*) ;
 long FUNC_8 (struct amdgpu_device*,int,struct amdgpu_job**) ;
 int FUNC_9 (struct amdgpu_job*) ;
 long FUNC_10 (struct amdgpu_job*,int *,int ,struct dma_fence**) ;
 long FUNC_11 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 long FUNC_12 (struct amdgpu_device*,int *,int ,int ,int) ;
 int FUNC_13 (struct amdgpu_bo*) ;
 struct dma_fence* FUNC_14 (struct dma_fence*) ;
 int FUNC_15 (struct dma_fence*) ;
 long FUNC_16 (int ,int,int,int ) ;
 int FUNC_17 (int) ;
 long FUNC_18 (TYPE_3__*,int *,struct ttm_operation_ctx*) ;

__attribute__((used)) static int FUNC_19(struct amdgpu_ring *VAR_10, struct amdgpu_bo *VAR_11,
          bool VAR_12, struct dma_fence **VAR_13)
{
 struct amdgpu_device *VAR_14 = VAR_10->adev;
 struct dma_fence *VAR_15 = ((void*)0);
 struct amdgpu_job *VAR_16;
 struct amdgpu_ib *VAR_17;
 uint32_t VAR_18[4];
 uint64_t VAR_19;
 long VAR_20;
 int VAR_21;
 unsigned VAR_22 = 0;
 unsigned VAR_23[3] = { VAR_4, 0, 0 };

 FUNC_3(VAR_11);
 FUNC_5(VAR_11);

 if (!VAR_10->adev->uvd.address_64_bit) {
  struct ttm_operation_ctx VAR_24 = { 1, 0 };

  FUNC_4(VAR_11, VAR_1);
  FUNC_13(VAR_11);
  VAR_20 = FUNC_18(&VAR_11->tbo, &VAR_11->placement, &VAR_24);
  if (VAR_20)
   goto err;
 }

 VAR_20 = FUNC_8(VAR_14, 64, &VAR_16);
 if (VAR_20)
  goto err;

 if (VAR_14->asic_type >= VAR_2) {
  VAR_22 = 1 + VAR_10->me;
  VAR_23[1] = VAR_14->reg_offset[VAR_8][0][1];
  VAR_23[2] = VAR_14->reg_offset[VAR_8][1][1];
 }

 VAR_18[0] = FUNC_0(VAR_23[VAR_22] + VAR_6, 0);
 VAR_18[1] = FUNC_0(VAR_23[VAR_22] + VAR_7, 0);
 VAR_18[2] = FUNC_0(VAR_23[VAR_22] + VAR_5, 0);
 VAR_18[3] = FUNC_0(VAR_23[VAR_22] + VAR_9, 0);

 VAR_17 = &VAR_16->ibs[0];
 VAR_19 = FUNC_2(VAR_11);
 VAR_17->ptr[0] = VAR_18[0];
 VAR_17->ptr[1] = VAR_19;
 VAR_17->ptr[2] = VAR_18[1];
 VAR_17->ptr[3] = VAR_19 >> 32;
 VAR_17->ptr[4] = VAR_18[2];
 VAR_17->ptr[5] = 0;
 for (VAR_21 = 6; VAR_21 < 16; VAR_21 += 2) {
  VAR_17->ptr[VAR_21] = VAR_18[3];
  VAR_17->ptr[VAR_21+1] = 0;
 }
 VAR_17->length_dw = 16;

 if (VAR_12) {
  VAR_20 = FUNC_16(VAR_11->tbo.base.resv,
       1, 0,
       FUNC_17(10));
  if (VAR_20 == 0)
   VAR_20 = -VAR_3;
  if (VAR_20 < 0)
   goto err_free;

  VAR_20 = FUNC_11(VAR_16, VAR_10, &VAR_15);
  if (VAR_20)
   goto err_free;
 } else {
  VAR_20 = FUNC_12(VAR_14, &VAR_16->sync, VAR_11->tbo.base.resv,
         VAR_0, 0);
  if (VAR_20)
   goto err_free;

  VAR_20 = FUNC_10(VAR_16, &VAR_14->uvd.entity,
          VAR_0, &VAR_15);
  if (VAR_20)
   goto err_free;
 }

 FUNC_1(VAR_11, VAR_15, 0);
 FUNC_7(VAR_11);
 FUNC_6(&VAR_11);

 if (VAR_13)
  *VAR_13 = FUNC_14(VAR_15);
 FUNC_15(VAR_15);

 return 0;

err_free:
 FUNC_9(VAR_16);

err:
 FUNC_7(VAR_11);
 FUNC_6(&VAR_11);
 return VAR_20;
}
