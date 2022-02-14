
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct radeon_ring {int dummy; } ;
struct radeon_ib {int* ptr; int length_dw; int fence; } ;
struct radeon_device {unsigned int usec_timeout; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,int ) ;
 void* FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int) ;
 int FUNC_6 (int ,int,int ) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_8 (struct radeon_device*,int ,struct radeon_ib*,int *,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_10 (struct radeon_device*,int) ;
 int FUNC_11 (struct radeon_device*,int*) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int ) ;

int FUNC_14(struct radeon_device *VAR_4, struct radeon_ring *VAR_5)
{
 struct radeon_ib VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8 = 0;
 unsigned VAR_9;
 int VAR_10;

 VAR_10 = FUNC_11(VAR_4, &VAR_7);
 if (VAR_10) {
  FUNC_0("radeon: failed to get scratch reg (%d).\n", VAR_10);
  return VAR_10;
 }
 FUNC_5(VAR_7, 0xCAFEDEAD);
 VAR_10 = FUNC_8(VAR_4, VAR_2, &VAR_6, ((void*)0), 256);
 if (VAR_10) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_10);
  goto free_scratch;
 }
 VAR_6.ptr[0] = FUNC_2(VAR_7, 0);
 VAR_6.ptr[1] = 0xDEADBEEF;
 VAR_6.ptr[2] = FUNC_3(0);
 VAR_6.ptr[3] = FUNC_3(0);
 VAR_6.ptr[4] = FUNC_3(0);
 VAR_6.ptr[5] = FUNC_3(0);
 VAR_6.ptr[6] = FUNC_3(0);
 VAR_6.ptr[7] = FUNC_3(0);
 VAR_6.length_dw = 8;
 VAR_10 = FUNC_9(VAR_4, &VAR_6, ((void*)0), 0);
 if (VAR_10) {
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_10);
  goto free_ib;
 }
 VAR_10 = FUNC_6(VAR_6.fence, 0, FUNC_13(
  VAR_3));
 if (VAR_10 < 0) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_10);
  goto free_ib;
 } else if (VAR_10 == 0) {
  FUNC_0("radeon: fence wait timed out.\n");
  VAR_10 = -VAR_1;
  goto free_ib;
 }
 VAR_10 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_4->usec_timeout; VAR_9++) {
  VAR_8 = FUNC_4(VAR_7);
  if (VAR_8 == 0xDEADBEEF) {
   break;
  }
  FUNC_12(1);
 }
 if (VAR_9 < VAR_4->usec_timeout) {
  FUNC_1("ib test succeeded in %u usecs\n", VAR_9);
 } else {
  FUNC_0("radeon: ib test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_7, VAR_8);
  VAR_10 = -VAR_0;
 }
free_ib:
 FUNC_7(VAR_4, &VAR_6);
free_scratch:
 FUNC_10(VAR_4, VAR_7);
 return VAR_10;
}
