
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_job {struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct TYPE_3__ {int jpeg_pitch; } ;
struct TYPE_4__ {TYPE_1__ internal; } ;
struct amdgpu_device {TYPE_2__ vcn; } ;


 void* FUNC_0 (int ,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct amdgpu_device*,unsigned int const,struct amdgpu_job**) ;
 int FUNC_2 (struct amdgpu_job*) ;
 int FUNC_3 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 struct dma_fence* FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_ring *VAR_2, uint32_t VAR_3,
  struct dma_fence **VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->adev;
 struct amdgpu_job *VAR_6;
 struct amdgpu_ib *VAR_7;
 struct dma_fence *VAR_8 = ((void*)0);
 const unsigned VAR_9 = 16;
 int VAR_10, VAR_11;

 VAR_11 = FUNC_1(VAR_2->adev, VAR_9 * 4, &VAR_6);
 if (VAR_11)
  return VAR_11;

 VAR_7 = &VAR_6->ibs[0];

 VAR_7->ptr[0] = FUNC_0(VAR_5->vcn.internal.jpeg_pitch, 0, 0, VAR_0);
 VAR_7->ptr[1] = 0xDEADBEEF;
 for (VAR_10 = 2; VAR_10 < 16; VAR_10 += 2) {
  VAR_7->ptr[VAR_10] = FUNC_0(0, 0, 0, VAR_1);
  VAR_7->ptr[VAR_10+1] = 0;
 }
 VAR_7->length_dw = 16;

 VAR_11 = FUNC_3(VAR_6, VAR_2, &VAR_8);
 if (VAR_11)
  goto err;

 if (VAR_4)
  *VAR_4 = FUNC_4(VAR_8);
 FUNC_5(VAR_8);

 return 0;

err:
 FUNC_2(VAR_6);
 return VAR_11;
}
