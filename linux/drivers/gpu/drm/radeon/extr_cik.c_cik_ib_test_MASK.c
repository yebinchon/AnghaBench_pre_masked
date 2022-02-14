
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct radeon_ring {int idx; } ;
struct radeon_ib {int* ptr; int length_dw; TYPE_1__* fence; } ;
struct radeon_device {unsigned int usec_timeout; } ;
struct TYPE_2__ {int ring; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_7 (struct radeon_device*,int ,struct radeon_ib*,int *,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_9 (struct radeon_device*,int) ;
 int FUNC_10 (struct radeon_device*,int*) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct radeon_device *VAR_5, struct radeon_ring *VAR_6)
{
 struct radeon_ib VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9 = 0;
 unsigned VAR_10;
 int VAR_11;

 VAR_11 = FUNC_10(VAR_5, &VAR_8);
 if (VAR_11) {
  FUNC_0("radeon: failed to get scratch reg (%d).\n", VAR_11);
  return VAR_11;
 }
 FUNC_4(VAR_8, 0xCAFEDEAD);
 VAR_11 = FUNC_7(VAR_5, VAR_6->idx, &VAR_7, ((void*)0), 256);
 if (VAR_11) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_11);
  FUNC_9(VAR_5, VAR_8);
  return VAR_11;
 }
 VAR_7.ptr[0] = FUNC_2(VAR_2, 1);
 VAR_7.ptr[1] = ((VAR_8 - VAR_3) >> 2);
 VAR_7.ptr[2] = 0xDEADBEEF;
 VAR_7.length_dw = 3;
 VAR_11 = FUNC_8(VAR_5, &VAR_7, ((void*)0), 0);
 if (VAR_11) {
  FUNC_9(VAR_5, VAR_8);
  FUNC_6(VAR_5, &VAR_7);
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_11);
  return VAR_11;
 }
 VAR_11 = FUNC_5(VAR_7.fence, 0, FUNC_12(
  VAR_4));
 if (VAR_11 < 0) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_11);
  FUNC_9(VAR_5, VAR_8);
  FUNC_6(VAR_5, &VAR_7);
  return VAR_11;
 } else if (VAR_11 == 0) {
  FUNC_0("radeon: fence wait timed out.\n");
  FUNC_9(VAR_5, VAR_8);
  FUNC_6(VAR_5, &VAR_7);
  return -VAR_1;
 }
 VAR_11 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_5->usec_timeout; VAR_10++) {
  VAR_9 = FUNC_3(VAR_8);
  if (VAR_9 == 0xDEADBEEF)
   break;
  FUNC_11(1);
 }
 if (VAR_10 < VAR_5->usec_timeout) {
  FUNC_1("ib test on ring %d succeeded in %u usecs\n", VAR_7.fence->ring, VAR_10);
 } else {
  FUNC_0("radeon: ib test failed (scratch(0x%04X)=0x%08X)\n",
     VAR_8, VAR_9);
  VAR_11 = -VAR_0;
 }
 FUNC_9(VAR_5, VAR_8);
 FUNC_6(VAR_5, &VAR_7);
 return VAR_11;
}
