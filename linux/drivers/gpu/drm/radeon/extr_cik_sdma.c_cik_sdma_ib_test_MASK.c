
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
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ,unsigned int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ib*) ;
 int FUNC_8 (struct radeon_device*,scalar_t__,struct radeon_ib*,int *,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_ib*,int *,int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (int ) ;

int FUNC_13(struct radeon_device *VAR_8, struct radeon_ring *VAR_9)
{
 struct radeon_ib VAR_10;
 unsigned VAR_11;
 unsigned VAR_12;
 int VAR_13;
 u32 VAR_14 = 0;
 u64 VAR_15;

 if (VAR_9->idx == VAR_3)
  VAR_12 = VAR_4;
 else
  VAR_12 = VAR_0;

 VAR_15 = VAR_8->wb.gpu_addr + VAR_12;

 VAR_14 = 0xCAFEDEAD;
 VAR_8->wb.wb[VAR_12/4] = FUNC_3(VAR_14);

 VAR_13 = FUNC_8(VAR_8, VAR_9->idx, &VAR_10, ((void*)0), 256);
 if (VAR_13) {
  FUNC_0("radeon: failed to get ib (%d).\n", VAR_13);
  return VAR_13;
 }

 VAR_10.ptr[0] = FUNC_2(VAR_6, VAR_7, 0);
 VAR_10.ptr[1] = FUNC_5(VAR_15);
 VAR_10.ptr[2] = FUNC_11(VAR_15);
 VAR_10.ptr[3] = 1;
 VAR_10.ptr[4] = 0xDEADBEEF;
 VAR_10.length_dw = 5;

 VAR_13 = FUNC_9(VAR_8, &VAR_10, ((void*)0), 0);
 if (VAR_13) {
  FUNC_7(VAR_8, &VAR_10);
  FUNC_0("radeon: failed to schedule ib (%d).\n", VAR_13);
  return VAR_13;
 }
 VAR_13 = FUNC_6(VAR_10.fence, 0, FUNC_12(
  VAR_5));
 if (VAR_13 < 0) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_13);
  return VAR_13;
 } else if (VAR_13 == 0) {
  FUNC_0("radeon: fence wait timed out.\n");
  return -VAR_2;
 }
 VAR_13 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_8->usec_timeout; VAR_11++) {
  VAR_14 = FUNC_4(VAR_8->wb.wb[VAR_12/4]);
  if (VAR_14 == 0xDEADBEEF)
   break;
  FUNC_10(1);
 }
 if (VAR_11 < VAR_8->usec_timeout) {
  FUNC_1("ib test on ring %d succeeded in %u usecs\n", VAR_10.fence->ring, VAR_11);
 } else {
  FUNC_0("radeon: ib test failed (0x%08X)\n", VAR_14);
  VAR_13 = -VAR_1;
 }
 FUNC_7(VAR_8, &VAR_10);
 return VAR_13;
}
