
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_device {int dummy; } ;
struct amdgpu_bo {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_device*,int,int ,int ,struct amdgpu_bo**,int *,void**) ;
 int FUNC_1 (struct amdgpu_ring*,struct amdgpu_bo*,int,struct dma_fence**) ;
 int FUNC_2 (int) ;

int FUNC_3(struct amdgpu_ring *VAR_2, uint32_t VAR_3,
          bool VAR_4, struct dma_fence **VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_2->adev;
 struct amdgpu_bo *VAR_7 = ((void*)0);
 uint32_t *VAR_8;
 int VAR_9, VAR_10;

 VAR_9 = FUNC_0(VAR_6, 1024, VAR_1,
          VAR_0,
          &VAR_7, ((void*)0), (void **)&VAR_8);
 if (VAR_9)
  return VAR_9;


 VAR_8[0] = FUNC_2(0x00000de4);
 VAR_8[1] = FUNC_2(0x00000002);
 VAR_8[2] = FUNC_2(VAR_3);
 VAR_8[3] = FUNC_2(0x00000000);
 for (VAR_10 = 4; VAR_10 < 1024; ++VAR_10)
  VAR_8[VAR_10] = FUNC_2(0x0);

 return FUNC_1(VAR_2, VAR_7, VAR_4, VAR_5);
}
