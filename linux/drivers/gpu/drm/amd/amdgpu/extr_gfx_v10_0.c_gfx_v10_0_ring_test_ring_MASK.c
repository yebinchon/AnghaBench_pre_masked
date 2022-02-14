
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct amdgpu_ring {int idx; struct amdgpu_device* adev; } ;
struct amdgpu_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int VAR_3 ;
 int FUNC_5 (struct amdgpu_device*,int) ;
 int FUNC_6 (struct amdgpu_device*,int*) ;
 int FUNC_7 (struct amdgpu_ring*,int) ;
 int FUNC_8 (struct amdgpu_ring*) ;
 int FUNC_9 (struct amdgpu_ring*,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct amdgpu_ring *VAR_4)
{
 struct amdgpu_device *VAR_5 = VAR_4->adev;
 uint32_t VAR_6;
 uint32_t VAR_7 = 0;
 unsigned VAR_8;
 int VAR_9;

 VAR_9 = FUNC_6(VAR_5, &VAR_6);
 if (VAR_9) {
  FUNC_0("amdgpu: cp failed to get scratch reg (%d).\n", VAR_9);
  return VAR_9;
 }

 FUNC_4(VAR_6, 0xCAFEDEAD);

 VAR_9 = FUNC_7(VAR_4, 3);
 if (VAR_9) {
  FUNC_0("amdgpu: cp failed to lock ring %d (%d).\n",
     VAR_4->idx, VAR_9);
  FUNC_5(VAR_5, VAR_6);
  return VAR_9;
 }

 FUNC_9(VAR_4, FUNC_2(VAR_1, 1));
 FUNC_9(VAR_4, (VAR_6 - VAR_2));
 FUNC_9(VAR_4, 0xDEADBEEF);
 FUNC_8(VAR_4);

 for (VAR_8 = 0; VAR_8 < VAR_5->usec_timeout; VAR_8++) {
  VAR_7 = FUNC_3(VAR_6);
  if (VAR_7 == 0xDEADBEEF)
   break;
  if (VAR_3 == 1)
   FUNC_10(1);
  else
   FUNC_11(1);
 }
 if (VAR_8 < VAR_5->usec_timeout) {
  if (VAR_3 == 1)
   FUNC_1("ring test on %d succeeded in %d msecs\n",
     VAR_4->idx, VAR_8);
  else
   FUNC_1("ring test on %d succeeded in %d usecs\n",
     VAR_4->idx, VAR_8);
 } else {
  FUNC_0("amdgpu: ring %d test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_4->idx, VAR_6, VAR_7);
  VAR_9 = -VAR_0;
 }
 FUNC_5(VAR_5, VAR_6);

 return VAR_9;
}
