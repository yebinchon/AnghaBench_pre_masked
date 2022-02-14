
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct amdgpu_ring {int idx; struct amdgpu_device* adev; } ;
struct TYPE_2__ {int * wb; scalar_t__ gpu_addr; } ;
struct amdgpu_device {unsigned int usec_timeout; TYPE_1__ wb; int dev; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct amdgpu_device*,unsigned int) ;
 int FUNC_6 (struct amdgpu_device*,unsigned int*) ;
 int VAR_3 ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (struct amdgpu_ring*) ;
 int FUNC_9 (struct amdgpu_ring*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,char*,int) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (scalar_t__) ;

__attribute__((used)) static int FUNC_17(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 unsigned VAR_6;
 unsigned VAR_7;
 int VAR_8;
 u32 VAR_9;
 u64 VAR_10;

 VAR_8 = FUNC_6(VAR_5, &VAR_7);
 if (VAR_8) {
  FUNC_11(VAR_5->dev, "(%d) failed to allocate wb slot\n", VAR_8);
  return VAR_8;
 }

 VAR_10 = VAR_5->wb.gpu_addr + (VAR_7 * 4);
 VAR_9 = 0xCAFEDEAD;
 VAR_5->wb.wb[VAR_7] = FUNC_10(VAR_9);

 VAR_8 = FUNC_7(VAR_4, 5);
 if (VAR_8) {
  FUNC_0("amdgpu: dma failed to lock ring %d (%d).\n", VAR_4->idx, VAR_8);
  FUNC_5(VAR_5, VAR_7);
  return VAR_8;
 }

 FUNC_9(VAR_4, FUNC_2(VAR_1) |
     FUNC_3(VAR_2));
 FUNC_9(VAR_4, FUNC_13(VAR_10));
 FUNC_9(VAR_4, FUNC_16(VAR_10));
 FUNC_9(VAR_4, FUNC_4(0));
 FUNC_9(VAR_4, 0xDEADBEEF);
 FUNC_8(VAR_4);

 for (VAR_6 = 0; VAR_6 < VAR_5->usec_timeout; VAR_6++) {
  VAR_9 = FUNC_12(VAR_5->wb.wb[VAR_7]);
  if (VAR_9 == 0xDEADBEEF)
   break;
  if (VAR_3 == 1)
   FUNC_14(1);
  else
   FUNC_15(1);
 }

 if (VAR_6 < VAR_5->usec_timeout) {
  if (VAR_3 == 1)
   FUNC_1("ring test on %d succeeded in %d msecs\n", VAR_4->idx, VAR_6);
  else
   FUNC_1("ring test on %d succeeded in %d usecs\n", VAR_4->idx, VAR_6);
 } else {
  FUNC_0("amdgpu: ring %d test failed (0x%08X)\n",
     VAR_4->idx, VAR_9);
  VAR_8 = -VAR_0;
 }
 FUNC_5(VAR_5, VAR_7);

 return VAR_8;
}
