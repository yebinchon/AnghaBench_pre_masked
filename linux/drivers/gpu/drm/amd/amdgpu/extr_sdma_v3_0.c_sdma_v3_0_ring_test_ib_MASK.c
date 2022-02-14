
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
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int VAR_4 ;
 int FUNC_4 (struct amdgpu_device*,unsigned int) ;
 long FUNC_5 (struct amdgpu_device*,unsigned int*) ;
 int FUNC_6 (struct amdgpu_device*,struct amdgpu_ib*,int *) ;
 long FUNC_7 (struct amdgpu_device*,int *,int,struct amdgpu_ib*) ;
 long FUNC_8 (struct amdgpu_ring*,int,struct amdgpu_ib*,int *,struct dma_fence**) ;
 int FUNC_9 (int) ;
 int FUNC_10 (struct dma_fence*) ;
 long FUNC_11 (struct dma_fence*,int,long) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (struct amdgpu_ib*,int ,int) ;
 int FUNC_15 (scalar_t__) ;

__attribute__((used)) static int FUNC_16(struct amdgpu_ring *VAR_5, long VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;
 struct amdgpu_ib VAR_8;
 struct dma_fence *VAR_9 = ((void*)0);
 unsigned VAR_10;
 u32 VAR_11 = 0;
 u64 VAR_12;
 long VAR_13;

 VAR_13 = FUNC_5(VAR_7, &VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_12 = VAR_7->wb.gpu_addr + (VAR_10 * 4);
 VAR_11 = 0xCAFEDEAD;
 VAR_7->wb.wb[VAR_10] = FUNC_9(VAR_11);
 FUNC_14(&VAR_8, 0, sizeof(VAR_8));
 VAR_13 = FUNC_7(VAR_7, ((void*)0), 256, &VAR_8);
 if (VAR_13)
  goto err0;

 VAR_8.ptr[0] = FUNC_0(VAR_3) |
  FUNC_1(VAR_4);
 VAR_8.ptr[1] = FUNC_13(VAR_12);
 VAR_8.ptr[2] = FUNC_15(VAR_12);
 VAR_8.ptr[3] = FUNC_3(1);
 VAR_8.ptr[4] = 0xDEADBEEF;
 VAR_8.ptr[5] = FUNC_2(VAR_2);
 VAR_8.ptr[6] = FUNC_2(VAR_2);
 VAR_8.ptr[7] = FUNC_2(VAR_2);
 VAR_8.length_dw = 8;

 VAR_13 = FUNC_8(VAR_5, 1, &VAR_8, ((void*)0), &VAR_9);
 if (VAR_13)
  goto err1;

 VAR_13 = FUNC_11(VAR_9, 0, VAR_6);
 if (VAR_13 == 0) {
  VAR_13 = -VAR_1;
  goto err1;
 } else if (VAR_13 < 0) {
  goto err1;
 }
 VAR_11 = FUNC_12(VAR_7->wb.wb[VAR_10]);
 if (VAR_11 == 0xDEADBEEF)
  VAR_13 = 0;
 else
  VAR_13 = -VAR_0;
err1:
 FUNC_6(VAR_7, &VAR_8, ((void*)0));
 FUNC_10(VAR_9);
err0:
 FUNC_4(VAR_7, VAR_10);
 return VAR_13;
}
