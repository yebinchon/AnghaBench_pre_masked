
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {struct amdgpu_device* adev; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; } ;
typedef int ib ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct amdgpu_device*,unsigned int) ;
 long FUNC_2 (struct amdgpu_device*,unsigned int*) ;
 int FUNC_3 (struct amdgpu_device*,struct amdgpu_ib*,int *) ;
 long FUNC_4 (struct amdgpu_device*,int *,int,struct amdgpu_ib*) ;
 long FUNC_5 (struct amdgpu_ring*,int,struct amdgpu_ib*,int *,struct dma_fence**) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct dma_fence*) ;
 long FUNC_8 (struct dma_fence*,int,long) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct amdgpu_ib*,int ,int) ;
 int FUNC_12 (scalar_t__) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_ring *VAR_4, long VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_4->adev;
 struct amdgpu_ib VAR_7;
 struct dma_fence *VAR_8 = ((void*)0);
 unsigned VAR_9;
 u32 VAR_10 = 0;
 u64 VAR_11;
 long VAR_12;

 VAR_12 = FUNC_2(VAR_6, &VAR_9);
 if (VAR_12)
  return VAR_12;

 VAR_11 = VAR_6->wb.gpu_addr + (VAR_9 * 4);
 VAR_10 = 0xCAFEDEAD;
 VAR_6->wb.wb[VAR_9] = FUNC_6(VAR_10);
 FUNC_11(&VAR_7, 0, sizeof(VAR_7));
 VAR_12 = FUNC_4(VAR_6, ((void*)0), 256, &VAR_7);
 if (VAR_12)
  goto err0;

 VAR_7.ptr[0] = FUNC_0(VAR_2,
    VAR_3, 0);
 VAR_7.ptr[1] = FUNC_10(VAR_11);
 VAR_7.ptr[2] = FUNC_12(VAR_11);
 VAR_7.ptr[3] = 1;
 VAR_7.ptr[4] = 0xDEADBEEF;
 VAR_7.length_dw = 5;
 VAR_12 = FUNC_5(VAR_4, 1, &VAR_7, ((void*)0), &VAR_8);
 if (VAR_12)
  goto err1;

 VAR_12 = FUNC_8(VAR_8, 0, VAR_5);
 if (VAR_12 == 0) {
  VAR_12 = -VAR_1;
  goto err1;
 } else if (VAR_12 < 0) {
  goto err1;
 }
 VAR_10 = FUNC_9(VAR_6->wb.wb[VAR_9]);
 if (VAR_10 == 0xDEADBEEF)
  VAR_12 = 0;
 else
  VAR_12 = -VAR_0;

err1:
 FUNC_3(VAR_6, &VAR_7, ((void*)0));
 FUNC_7(VAR_8);
err0:
 FUNC_1(VAR_6, VAR_9);
 return VAR_12;
}
