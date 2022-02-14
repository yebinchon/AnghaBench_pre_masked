
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {TYPE_2__* adev; } ;
struct amdgpu_job {struct amdgpu_ib* ibs; } ;
struct amdgpu_ib {int length_dw; int* ptr; } ;
struct TYPE_3__ {int entity; } ;
struct TYPE_4__ {TYPE_1__ vce; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,unsigned int const,struct amdgpu_job**) ;
 int FUNC_1 (struct amdgpu_job*) ;
 int FUNC_2 (struct amdgpu_job*,int *,int ,struct dma_fence**) ;
 int FUNC_3 (struct amdgpu_job*,struct amdgpu_ring*,struct dma_fence**) ;
 struct dma_fence* FUNC_4 (struct dma_fence*) ;
 int FUNC_5 (struct dma_fence*) ;

int FUNC_6(struct amdgpu_ring *VAR_1, uint32_t VAR_2,
          bool VAR_3, struct dma_fence **VAR_4)
{
 const unsigned VAR_5 = 1024;
 struct amdgpu_job *VAR_6;
 struct amdgpu_ib *VAR_7;
 struct dma_fence *VAR_8 = ((void*)0);
 int VAR_9, VAR_10;

 VAR_10 = FUNC_0(VAR_1->adev, VAR_5 * 4, &VAR_6);
 if (VAR_10)
  return VAR_10;

 VAR_7 = &VAR_6->ibs[0];


 VAR_7->length_dw = 0;
 VAR_7->ptr[VAR_7->length_dw++] = 0x0000000c;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000001;
 VAR_7->ptr[VAR_7->length_dw++] = VAR_2;

 VAR_7->ptr[VAR_7->length_dw++] = 0x00000020;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000002;
 VAR_7->ptr[VAR_7->length_dw++] = 0xffffffff;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000001;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000000;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000000;
 VAR_7->ptr[VAR_7->length_dw++] = 0xffffffff;
 VAR_7->ptr[VAR_7->length_dw++] = 0x00000000;

 VAR_7->ptr[VAR_7->length_dw++] = 0x00000008;
 VAR_7->ptr[VAR_7->length_dw++] = 0x02000001;

 for (VAR_9 = VAR_7->length_dw; VAR_9 < VAR_5; ++VAR_9)
  VAR_7->ptr[VAR_9] = 0x0;

 if (VAR_3)
  VAR_10 = FUNC_3(VAR_6, VAR_1, &VAR_8);
 else
  VAR_10 = FUNC_2(VAR_6, &VAR_1->adev->vce.entity,
          VAR_0, &VAR_8);
 if (VAR_10)
  goto err;

 if (VAR_4)
  *VAR_4 = FUNC_4(VAR_8);
 FUNC_5(VAR_8);
 return 0;

err:
 FUNC_1(VAR_6);
 return VAR_10;
}
