
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct radeon_fence**) ;
 int FUNC_3 (struct radeon_fence*,int,int ) ;
 int FUNC_4 (struct radeon_device*,int ,int,int *) ;
 int FUNC_5 (struct radeon_device*,int ,int,struct radeon_fence**) ;
 int FUNC_6 (int ) ;

int FUNC_7(struct radeon_device *VAR_2, struct radeon_ring *VAR_3)
{
 struct radeon_fence *VAR_4 = ((void*)0);
 int VAR_5;

 VAR_5 = FUNC_4(VAR_2, VAR_3->idx, 1, ((void*)0));
 if (VAR_5) {
  FUNC_0("radeon: failed to get create msg (%d).\n", VAR_5);
  goto error;
 }

 VAR_5 = FUNC_5(VAR_2, VAR_3->idx, 1, &VAR_4);
 if (VAR_5) {
  FUNC_0("radeon: failed to get destroy ib (%d).\n", VAR_5);
  goto error;
 }

 VAR_5 = FUNC_3(VAR_4, 0, FUNC_6(
  VAR_1));
 if (VAR_5 < 0) {
  FUNC_0("radeon: fence wait failed (%d).\n", VAR_5);
 } else if (VAR_5 == 0) {
  FUNC_0("radeon: fence wait timed out.\n");
  VAR_5 = -VAR_0;
 } else {
  FUNC_1("ib test on ring %d succeeded\n", VAR_3->idx);
  VAR_5 = 0;
 }
error:
 FUNC_2(&VAR_4);
 return VAR_5;
}
