
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {scalar_t__ family; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct radeon_fence**) ;
 int FUNC_3 (struct radeon_fence*,int,int ) ;
 int FUNC_4 (struct radeon_device*,int,int) ;
 int FUNC_5 (struct radeon_device*,int ,int,int *) ;
 int FUNC_6 (struct radeon_device*,int ,int,struct radeon_fence**) ;
 int FUNC_7 (int ) ;

int FUNC_8(struct radeon_device *VAR_3, struct radeon_ring *VAR_4)
{
 struct radeon_fence *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_3->family < VAR_0)
  VAR_6 = FUNC_4(VAR_3, 10000, 10000);
 else
  VAR_6 = FUNC_4(VAR_3, 53300, 40000);
 if (VAR_6) {
  FUNC_0("radeon: failed to raise UVD clocks (%d).\n", VAR_6);
  return VAR_6;
 }

 VAR_6 = FUNC_5(VAR_3, VAR_4->idx, 1, ((void*)0));
 if (VAR_6) {
  FUNC_0("radeon: failed to get create msg (%d).\n", VAR_6);
  goto error;
 }

 VAR_6 = FUNC_6(VAR_3, VAR_4->idx, 1, &VAR_5);
 if (VAR_6) {
  FUNC_0("radeon: failed to get destroy ib (%d).\n", VAR_6);
  goto error;
 }

 VAR_6 = FUNC_3(VAR_5, 0, FUNC_7(
  VAR_2));
 if (VAR_6 < 0) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_6);
  goto error;
 } else if (VAR_6 == 0) {
  FUNC_0("radeon: fence wait timed out.\n");
  VAR_6 = -VAR_1;
  goto error;
 }
 VAR_6 = 0;
 FUNC_1("ib test on ring %d succeeded\n", VAR_4->idx);
error:
 FUNC_2(&VAR_5);
 FUNC_4(VAR_3, 0, 0);
 return VAR_6;
}
