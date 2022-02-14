
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct radeon_ring {scalar_t__ idx; } ;
struct radeon_ib {int* ptr; int length_dw; TYPE_2__* fence; } ;
struct TYPE_3__ {int * wb; scalar_t__ gpu_addr; } ;
struct radeon_device {unsigned int usec_timeout; TYPE_1__ wb; } ;
struct TYPE_4__ {int ring; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int) ;
 int VAR_1 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*,int ,unsigned int) ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*,int,int ) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_7 (struct radeon_device*,scalar_t__,struct radeon_ib*,int *,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (int ) ;

int FUNC_12(struct radeon_device *VAR_7, struct radeon_ring *VAR_8)
{
 struct radeon_ib VAR_9;
 unsigned VAR_10;
 unsigned VAR_11;
 int VAR_12;
 u32 VAR_13 = 0;
 u64 VAR_14;

 if (VAR_8->idx == VAR_4)
  VAR_11 = VAR_5;
 else
  VAR_11 = VAR_0;

 VAR_14 = VAR_7->wb.gpu_addr + VAR_11;

 VAR_12 = FUNC_7(VAR_7, VAR_8->idx, &VAR_9, ((void*)0), 256);
 if (VAR_12) {
  FUNC_1("radeon: failed to get ib (%d).\n", VAR_12);
  return VAR_12;
 }

 VAR_9.ptr[0] = FUNC_0(VAR_1, 0, 0, 1);
 VAR_9.ptr[1] = FUNC_4(VAR_14);
 VAR_9.ptr[2] = FUNC_10(VAR_14) & 0xff;
 VAR_9.ptr[3] = 0xDEADBEEF;
 VAR_9.length_dw = 4;

 VAR_12 = FUNC_8(VAR_7, &VAR_9, ((void*)0), 0);
 if (VAR_12) {
  FUNC_6(VAR_7, &VAR_9);
  FUNC_1("radeon: failed to schedule ib (%d).\n", VAR_12);
  return VAR_12;
 }
 VAR_12 = FUNC_5(VAR_9.fence, 0, FUNC_11(
  VAR_6));
 if (VAR_12 < 0) {
  FUNC_1("radeon: fence wait failed (%d).\n", VAR_12);
  return VAR_12;
 } else if (VAR_12 == 0) {
  FUNC_1("radeon: fence wait timed out.\n");
  return -VAR_3;
 }
 VAR_12 = 0;
 for (VAR_10 = 0; VAR_10 < VAR_7->usec_timeout; VAR_10++) {
  VAR_13 = FUNC_3(VAR_7->wb.wb[VAR_11/4]);
  if (VAR_13 == 0xDEADBEEF)
   break;
  FUNC_9(1);
 }
 if (VAR_10 < VAR_7->usec_timeout) {
  FUNC_2("ib test on ring %d succeeded in %u usecs\n", VAR_9.fence->ring, VAR_10);
 } else {
  FUNC_1("radeon: ib test failed (0x%08X)\n", VAR_13);
  VAR_12 = -VAR_2;
 }
 FUNC_6(VAR_7, &VAR_9);
 return VAR_12;
}
