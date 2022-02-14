
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_job {struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct TYPE_3__ {int nop; int cmd; int data1; int data0; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;
struct amdgpu_bo {int dummy; } ;


 void* FUNC_0 (int ,int ) ;
 int FUNC_1 (struct amdgpu_bo*,struct dma_fence*,int) ;
 int FUNC_2 (struct amdgpu_bo*) ;
 int FUNC_3 (struct amdgpu_bo**) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_device*,int,struct amdgpu_job**) ;
 int FUNC_6 (struct amdgpu_job*) ;
 int FUNC_7 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 struct dma_fence* FUNC_8 (struct dma_fence*) ;
 int FUNC_9 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_10(struct amdgpu_ring *VAR_0,
       struct amdgpu_bo *VAR_1,
       struct dma_fence **VAR_2)
{
 struct amdgpu_device *VAR_3 = VAR_0->adev;
 struct dma_fence *VAR_4 = ((void*)0);
 struct amdgpu_job *VAR_5;
 struct amdgpu_ib *VAR_6;
 uint64_t VAR_7;
 int VAR_8, VAR_9;

 VAR_9 = FUNC_5(VAR_3, 64, &VAR_5);
 if (VAR_9)
  goto err;

 VAR_6 = &VAR_5->ibs[0];
 VAR_7 = FUNC_2(VAR_1);
 VAR_6->ptr[0] = FUNC_0(VAR_3->vcn.internal.data0, 0);
 VAR_6->ptr[1] = VAR_7;
 VAR_6->ptr[2] = FUNC_0(VAR_3->vcn.internal.data1, 0);
 VAR_6->ptr[3] = VAR_7 >> 32;
 VAR_6->ptr[4] = FUNC_0(VAR_3->vcn.internal.cmd, 0);
 VAR_6->ptr[5] = 0;
 for (VAR_8 = 6; VAR_8 < 16; VAR_8 += 2) {
  VAR_6->ptr[VAR_8] = FUNC_0(VAR_3->vcn.internal.nop, 0);
  VAR_6->ptr[VAR_8+1] = 0;
 }
 VAR_6->length_dw = 16;

 VAR_9 = FUNC_7(VAR_5, VAR_0, &VAR_4);
 if (VAR_9)
  goto err_free;

 FUNC_1(VAR_1, VAR_4, 0);
 FUNC_4(VAR_1);
 FUNC_3(&VAR_1);

 if (VAR_2)
  *VAR_2 = FUNC_8(VAR_4);
 FUNC_9(VAR_4);

 return 0;

err_free:
 FUNC_6(VAR_5);

err:
 FUNC_4(VAR_1);
 FUNC_3(&VAR_1);
 return VAR_9;
}
