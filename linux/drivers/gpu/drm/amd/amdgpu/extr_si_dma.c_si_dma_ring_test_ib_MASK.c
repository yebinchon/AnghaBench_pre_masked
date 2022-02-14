
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


 int FUNC_0 (int ,int ,int ,int ,int) ;
 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
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

__attribute__((used)) static int FUNC_13(struct amdgpu_ring *VAR_3, long VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_3->adev;
 struct amdgpu_ib VAR_6;
 struct dma_fence *VAR_7 = ((void*)0);
 unsigned VAR_8;
 u32 VAR_9 = 0;
 u64 VAR_10;
 long VAR_11;

 VAR_11 = FUNC_2(VAR_5, &VAR_8);
 if (VAR_11)
  return VAR_11;

 VAR_10 = VAR_5->wb.gpu_addr + (VAR_8 * 4);
 VAR_9 = 0xCAFEDEAD;
 VAR_5->wb.wb[VAR_8] = FUNC_6(VAR_9);
 FUNC_11(&VAR_6, 0, sizeof(VAR_6));
 VAR_11 = FUNC_4(VAR_5, ((void*)0), 256, &VAR_6);
 if (VAR_11)
  goto err0;

 VAR_6.ptr[0] = FUNC_0(VAR_0, 0, 0, 0, 1);
 VAR_6.ptr[1] = FUNC_10(VAR_10);
 VAR_6.ptr[2] = FUNC_12(VAR_10) & 0xff;
 VAR_6.ptr[3] = 0xDEADBEEF;
 VAR_6.length_dw = 4;
 VAR_11 = FUNC_5(VAR_3, 1, &VAR_6, ((void*)0), &VAR_7);
 if (VAR_11)
  goto err1;

 VAR_11 = FUNC_8(VAR_7, 0, VAR_4);
 if (VAR_11 == 0) {
  VAR_11 = -VAR_2;
  goto err1;
 } else if (VAR_11 < 0) {
  goto err1;
 }
 VAR_9 = FUNC_9(VAR_5->wb.wb[VAR_8]);
 if (VAR_9 == 0xDEADBEEF)
  VAR_11 = 0;
 else
  VAR_11 = -VAR_1;

err1:
 FUNC_3(VAR_5, &VAR_6, ((void*)0));
 FUNC_7(VAR_7);
err0:
 FUNC_1(VAR_5, VAR_8);
 return VAR_11;
}
