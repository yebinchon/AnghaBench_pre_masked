
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int idx; struct amdgpu_device* adev; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; } ;
struct amdgpu_device {TYPE_1__ wb; int dev; } ;
typedef int ib ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_4 ;
 int FUNC_6 (struct amdgpu_device*,unsigned int) ;
 long FUNC_7 (struct amdgpu_device*,unsigned int*) ;
 int FUNC_8 (struct amdgpu_device*,struct amdgpu_ib*,int *) ;
 long FUNC_9 (struct amdgpu_device*,int *,int,struct amdgpu_ib*) ;
 long FUNC_10 (struct amdgpu_ring*,int,struct amdgpu_ib*,int *,struct dma_fence**) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ,char*,long) ;
 int FUNC_13 (struct dma_fence*) ;
 long FUNC_14 (struct dma_fence*,int,long) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (struct amdgpu_ib*,int ,int) ;
 int FUNC_18 (scalar_t__) ;

__attribute__((used)) static int FUNC_19(struct amdgpu_ring *VAR_5, long VAR_6)
{
 struct amdgpu_device *VAR_7 = VAR_5->adev;
 struct amdgpu_ib VAR_8;
 struct dma_fence *VAR_9 = ((void*)0);
 unsigned VAR_10;
 long VAR_11;
 u32 VAR_12 = 0;
 u64 VAR_13;

 VAR_11 = FUNC_7(VAR_7, &VAR_10);
 if (VAR_11) {
  FUNC_12(VAR_7->dev, "(%ld) failed to allocate wb slot\n", VAR_11);
  return VAR_11;
 }

 VAR_13 = VAR_7->wb.gpu_addr + (VAR_10 * 4);
 VAR_12 = 0xCAFEDEAD;
 VAR_7->wb.wb[VAR_10] = FUNC_11(VAR_12);
 FUNC_17(&VAR_8, 0, sizeof(VAR_8));
 VAR_11 = FUNC_9(VAR_7, ((void*)0), 256, &VAR_8);
 if (VAR_11) {
  FUNC_0("amdgpu: failed to get ib (%ld).\n", VAR_11);
  goto err0;
 }

 VAR_8.ptr[0] = FUNC_2(VAR_3) |
  FUNC_3(VAR_4);
 VAR_8.ptr[1] = FUNC_16(VAR_13);
 VAR_8.ptr[2] = FUNC_18(VAR_13);
 VAR_8.ptr[3] = FUNC_5(0);
 VAR_8.ptr[4] = 0xDEADBEEF;
 VAR_8.ptr[5] = FUNC_4(VAR_2);
 VAR_8.ptr[6] = FUNC_4(VAR_2);
 VAR_8.ptr[7] = FUNC_4(VAR_2);
 VAR_8.length_dw = 8;

 VAR_11 = FUNC_10(VAR_5, 1, &VAR_8, ((void*)0), &VAR_9);
 if (VAR_11)
  goto err1;

 VAR_11 = FUNC_14(VAR_9, 0, VAR_6);
 if (VAR_11 == 0) {
  FUNC_0("amdgpu: IB test timed out\n");
  VAR_11 = -VAR_1;
  goto err1;
 } else if (VAR_11 < 0) {
  FUNC_0("amdgpu: fence wait failed (%ld).\n", VAR_11);
  goto err1;
 }
 VAR_12 = FUNC_15(VAR_7->wb.wb[VAR_10]);
 if (VAR_12 == 0xDEADBEEF) {
  FUNC_1("ib test on ring %d succeeded\n", VAR_5->idx);
  VAR_11 = 0;
 } else {
  FUNC_0("amdgpu: ib test failed (0x%08X)\n", VAR_12);
  VAR_11 = -VAR_0;
 }

err1:
 FUNC_8(VAR_7, &VAR_8, ((void*)0));
 FUNC_13(VAR_9);
err0:
 FUNC_6(VAR_7, VAR_10);
 return VAR_11;
}
