
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dma_fence {int dummy; } ;
struct amdgpu_ring {int idx; struct amdgpu_device* adev; } ;
struct amdgpu_ib {int* ptr; int length_dw; } ;
struct amdgpu_device {int dummy; } ;
typedef int ib ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 long VAR_0 ;
 long VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 long FUNC_6 (struct amdgpu_device*,int*) ;
 int FUNC_7 (struct amdgpu_device*,struct amdgpu_ib*,int *) ;
 long FUNC_8 (struct amdgpu_device*,int *,int,struct amdgpu_ib*) ;
 long FUNC_9 (struct amdgpu_ring*,int,struct amdgpu_ib*,int *,struct dma_fence**) ;
 int FUNC_10 (struct dma_fence*) ;
 long FUNC_11 (struct dma_fence*,int,long) ;
 int FUNC_12 (struct amdgpu_ib*,int ,int) ;

__attribute__((used)) static int FUNC_13(struct amdgpu_ring *VAR_4, long VAR_5)
{
 struct amdgpu_device *VAR_6 = VAR_4->adev;
 struct amdgpu_ib VAR_7;
 struct dma_fence *VAR_8 = ((void*)0);
 uint32_t VAR_9;
 uint32_t VAR_10 = 0;
 long VAR_11;

 VAR_11 = FUNC_6(VAR_6, &VAR_9);
 if (VAR_11) {
  FUNC_0("amdgpu: failed to get scratch reg (%ld).\n", VAR_11);
  return VAR_11;
 }

 FUNC_4(VAR_9, 0xCAFEDEAD);

 FUNC_12(&VAR_7, 0, sizeof(VAR_7));
 VAR_11 = FUNC_8(VAR_6, ((void*)0), 256, &VAR_7);
 if (VAR_11) {
  FUNC_0("amdgpu: failed to get ib (%ld).\n", VAR_11);
  goto err1;
 }

 VAR_7.ptr[0] = FUNC_2(VAR_2, 1);
 VAR_7.ptr[1] = ((VAR_9 - VAR_3));
 VAR_7.ptr[2] = 0xDEADBEEF;
 VAR_7.length_dw = 3;

 VAR_11 = FUNC_9(VAR_4, 1, &VAR_7, ((void*)0), &VAR_8);
 if (VAR_11)
  goto err2;

 VAR_11 = FUNC_11(VAR_8, 0, VAR_5);
 if (VAR_11 == 0) {
  FUNC_0("amdgpu: IB test timed out.\n");
  VAR_11 = -VAR_1;
  goto err2;
 } else if (VAR_11 < 0) {
  FUNC_0("amdgpu: fence wait failed (%ld).\n", VAR_11);
  goto err2;
 }

 VAR_10 = FUNC_3(VAR_9);
 if (VAR_10 == 0xDEADBEEF) {
  FUNC_1("ib test on ring %d succeeded\n", VAR_4->idx);
  VAR_11 = 0;
 } else {
  FUNC_0("amdgpu: ib test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_9, VAR_10);
  VAR_11 = -VAR_0;
 }
err2:
 FUNC_7(VAR_6, &VAR_7, ((void*)0));
 FUNC_10(VAR_8);
err1:
 FUNC_5(VAR_6, VAR_9);

 return VAR_11;
}
