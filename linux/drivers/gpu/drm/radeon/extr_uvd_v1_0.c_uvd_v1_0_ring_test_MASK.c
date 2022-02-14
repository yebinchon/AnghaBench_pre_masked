
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int idx; } ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_ring*,int) ;
 int FUNC_8 (int) ;

int FUNC_9(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 uint32_t VAR_4 = 0;
 unsigned VAR_5;
 int VAR_6;

 FUNC_4(VAR_1, 0xCAFEDEAD);
 VAR_6 = FUNC_5(VAR_2, VAR_3, 3);
 if (VAR_6) {
  FUNC_0("radeon: cp failed to lock ring %d (%d).\n",
     VAR_3->idx, VAR_6);
  return VAR_6;
 }
 FUNC_7(VAR_3, FUNC_2(VAR_1, 0));
 FUNC_7(VAR_3, 0xDEADBEEF);
 FUNC_6(VAR_2, VAR_3, 0);
 for (VAR_5 = 0; VAR_5 < VAR_2->usec_timeout; VAR_5++) {
  VAR_4 = FUNC_3(VAR_1);
  if (VAR_4 == 0xDEADBEEF)
   break;
  FUNC_8(1);
 }

 if (VAR_5 < VAR_2->usec_timeout) {
  FUNC_1("ring test on %d succeeded in %d usecs\n",
    VAR_3->idx, VAR_5);
 } else {
  FUNC_0("radeon: ring %d test failed (0x%08X)\n",
     VAR_3->idx, VAR_4);
  VAR_6 = -VAR_0;
 }
 return VAR_6;
}
