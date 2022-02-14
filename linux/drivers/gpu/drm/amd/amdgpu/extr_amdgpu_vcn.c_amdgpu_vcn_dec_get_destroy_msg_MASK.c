
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
 int FUNC_1 (struct amdgpu_ring*,struct amdgpu_bo*,struct dma_fence**) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_ring *VAR_2, uint32_t VAR_3,
          struct dma_fence **VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_2->adev;
 struct amdgpu_bo *VAR_6 = ((void*)0);
 uint32_t *VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_5, 1024, VAR_1,
          VAR_0,
          &VAR_6, ((void*)0), (void **)&VAR_7);
 if (VAR_8)
  return VAR_8;

 VAR_7[0] = FUNC_2(0x00000028);
 VAR_7[1] = FUNC_2(0x00000018);
 VAR_7[2] = FUNC_2(0x00000000);
 VAR_7[3] = FUNC_2(0x00000002);
 VAR_7[4] = FUNC_2(VAR_3);
 VAR_7[5] = FUNC_2(0x00000000);
 for (VAR_9 = 6; VAR_9 < 1024; ++VAR_9)
  VAR_7[VAR_9] = FUNC_2(0x0);

 return FUNC_1(VAR_2, VAR_6, VAR_4);
}
