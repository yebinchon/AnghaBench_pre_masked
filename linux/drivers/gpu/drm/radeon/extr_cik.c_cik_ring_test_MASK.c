
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int idx; } ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,int,...) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,int) ;
 int FUNC_9 (struct radeon_device*,int*) ;
 int FUNC_10 (int) ;

int FUNC_11(struct radeon_device *VAR_3, struct radeon_ring *VAR_4)
{
 uint32_t VAR_5;
 uint32_t VAR_6 = 0;
 unsigned VAR_7;
 int VAR_8;

 VAR_8 = FUNC_9(VAR_3, &VAR_5);
 if (VAR_8) {
  FUNC_0("radeon: cp failed to get scratch reg (%d).\n", VAR_8);
  return VAR_8;
 }
 FUNC_4(VAR_5, 0xCAFEDEAD);
 VAR_8 = FUNC_5(VAR_3, VAR_4, 3);
 if (VAR_8) {
  FUNC_0("radeon: cp failed to lock ring %d (%d).\n", VAR_4->idx, VAR_8);
  FUNC_8(VAR_3, VAR_5);
  return VAR_8;
 }
 FUNC_7(VAR_4, FUNC_2(VAR_1, 1));
 FUNC_7(VAR_4, ((VAR_5 - VAR_2) >> 2));
 FUNC_7(VAR_4, 0xDEADBEEF);
 FUNC_6(VAR_3, VAR_4, 0);

 for (VAR_7 = 0; VAR_7 < VAR_3->usec_timeout; VAR_7++) {
  VAR_6 = FUNC_3(VAR_5);
  if (VAR_6 == 0xDEADBEEF)
   break;
  FUNC_10(1);
 }
 if (VAR_7 < VAR_3->usec_timeout) {
  FUNC_1("ring test on %d succeeded in %d usecs\n", VAR_4->idx, VAR_7);
 } else {
  FUNC_0("radeon: ring %d test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_4->idx, VAR_5, VAR_6);
  VAR_8 = -VAR_0;
 }
 FUNC_8(VAR_3, VAR_5);
 return VAR_8;
}
