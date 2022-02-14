
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_semaphore {int dummy; } ;
struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int) ;
 scalar_t__ FUNC_3 (struct radeon_fence*) ;
 int FUNC_4 (struct radeon_fence**) ;
 int FUNC_5 (struct radeon_fence*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_semaphore**) ;
 int FUNC_9 (struct radeon_device*,int ,struct radeon_semaphore*) ;
 int FUNC_10 (struct radeon_device*,int ,struct radeon_semaphore*) ;
 int FUNC_11 (struct radeon_device*,struct radeon_semaphore**,int *) ;
 int FUNC_12 (struct radeon_device*,struct radeon_ring*,struct radeon_fence**) ;

void FUNC_13(struct radeon_device *VAR_0,
      struct radeon_ring *VAR_1,
      struct radeon_ring *VAR_2)
{
 struct radeon_fence *VAR_3 = ((void*)0), *VAR_4 = ((void*)0);
 struct radeon_semaphore *VAR_5 = ((void*)0);
 int VAR_6;

 VAR_6 = FUNC_8(VAR_0, &VAR_5);
 if (VAR_6) {
  FUNC_0("Failed to create semaphore\n");
  goto out_cleanup;
 }

 VAR_6 = FUNC_6(VAR_0, VAR_1, 64);
 if (VAR_6) {
  FUNC_0("Failed to lock ring A %d\n", VAR_1->idx);
  goto out_cleanup;
 }
 FUNC_10(VAR_0, VAR_1->idx, VAR_5);
 FUNC_7(VAR_0, VAR_1, 0);

 VAR_6 = FUNC_12(VAR_0, VAR_1, &VAR_3);
 if (VAR_6)
  goto out_cleanup;

 VAR_6 = FUNC_6(VAR_0, VAR_1, 64);
 if (VAR_6) {
  FUNC_0("Failed to lock ring A %d\n", VAR_1->idx);
  goto out_cleanup;
 }
 FUNC_10(VAR_0, VAR_1->idx, VAR_5);
 FUNC_7(VAR_0, VAR_1, 0);

 VAR_6 = FUNC_12(VAR_0, VAR_1, &VAR_4);
 if (VAR_6)
  goto out_cleanup;

 FUNC_1(1000);

 if (FUNC_3(VAR_3)) {
  FUNC_0("Fence 1 signaled without waiting for semaphore.\n");
  goto out_cleanup;
 }

 VAR_6 = FUNC_6(VAR_0, VAR_2, 64);
 if (VAR_6) {
  FUNC_0("Failed to lock ring B %p\n", VAR_2);
  goto out_cleanup;
 }
 FUNC_9(VAR_0, VAR_2->idx, VAR_5);
 FUNC_7(VAR_0, VAR_2, 0);

 VAR_6 = FUNC_5(VAR_3, 0);
 if (VAR_6) {
  FUNC_0("Failed to wait for sync fence 1\n");
  goto out_cleanup;
 }

 FUNC_1(1000);

 if (FUNC_3(VAR_4)) {
  FUNC_0("Fence 2 signaled without waiting for semaphore.\n");
  goto out_cleanup;
 }

 VAR_6 = FUNC_6(VAR_0, VAR_2, 64);
 if (VAR_6) {
  FUNC_0("Failed to lock ring B %p\n", VAR_2);
  goto out_cleanup;
 }
 FUNC_9(VAR_0, VAR_2->idx, VAR_5);
 FUNC_7(VAR_0, VAR_2, 0);

 VAR_6 = FUNC_5(VAR_4, 0);
 if (VAR_6) {
  FUNC_0("Failed to wait for sync fence 1\n");
  goto out_cleanup;
 }

out_cleanup:
 FUNC_11(VAR_0, &VAR_5, ((void*)0));

 if (VAR_3)
  FUNC_4(&VAR_3);

 if (VAR_4)
  FUNC_4(&VAR_4);

 if (VAR_6)
  FUNC_2("Error while testing ring sync (%d)\n", VAR_6);
}
