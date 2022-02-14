
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int adev; } ;
struct amdgpu_job {struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {int length_dw; int* ptr; } ;
struct amdgpu_bo {int dummy; } ;


 int FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (int ,unsigned int const,struct amdgpu_job**) ;
 int FUNC_2 (struct amdgpu_job*) ;
 int FUNC_3 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 struct dma_fence* FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*) ;
 int FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_ring *VAR_0,
     uint32_t VAR_1,
     struct amdgpu_bo *VAR_2,
     struct dma_fence **VAR_3)
{
 const unsigned VAR_4 = 16;
 struct amdgpu_job *VAR_5;
 struct amdgpu_ib *VAR_6;
 struct dma_fence *VAR_7 = ((void*)0);
 uint64_t VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_1(VAR_0->adev, VAR_4 * 4, &VAR_5);
 if (VAR_10)
  return VAR_10;

 VAR_6 = &VAR_5->ibs[0];
 VAR_8 = FUNC_0(VAR_2);

 VAR_6->length_dw = 0;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00000018;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00000001;
 VAR_6->ptr[VAR_6->length_dw++] = VAR_1;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00010000;
 VAR_6->ptr[VAR_6->length_dw++] = FUNC_6(VAR_8);
 VAR_6->ptr[VAR_6->length_dw++] = VAR_8;

 VAR_6->ptr[VAR_6->length_dw++] = 0x00000014;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00000002;
 VAR_6->ptr[VAR_6->length_dw++] = 0x0000001c;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00000001;
 VAR_6->ptr[VAR_6->length_dw++] = 0x00000000;

 VAR_6->ptr[VAR_6->length_dw++] = 0x00000008;
 VAR_6->ptr[VAR_6->length_dw++] = 0x08000002;

 for (VAR_9 = VAR_6->length_dw; VAR_9 < VAR_4; ++VAR_9)
  VAR_6->ptr[VAR_9] = 0x0;

 VAR_10 = FUNC_3(VAR_5, VAR_0, &VAR_7);
 if (VAR_10)
  goto err;

 if (VAR_3)
  *VAR_3 = FUNC_4(VAR_7);
 FUNC_5(VAR_7);
 return 0;

err:
 FUNC_2(VAR_5);
 return VAR_10;
}
