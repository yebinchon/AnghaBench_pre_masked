
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct radeon_semaphore {int dummy; } ;
struct radeon_ring {int idx; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dummy; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,char) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 int FUNC_4 (struct radeon_fence*) ;
 int FUNC_5 (struct radeon_fence**) ;
 int FUNC_6 (struct radeon_fence*,int) ;
 int FUNC_7 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_8 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_9 (struct radeon_device*,struct radeon_semaphore**) ;
 int FUNC_10 (struct radeon_device*,int ,struct radeon_semaphore*) ;
 int FUNC_11 (struct radeon_device*,int ,struct radeon_semaphore*) ;
 int FUNC_12 (struct radeon_device*,struct radeon_semaphore**,int *) ;
 int FUNC_13 (struct radeon_device*,struct radeon_ring*,struct radeon_fence**) ;

__attribute__((used)) static void FUNC_14(struct radeon_device *VAR_0,
       struct radeon_ring *VAR_1,
       struct radeon_ring *VAR_2,
       struct radeon_ring *VAR_3)
{
 struct radeon_fence *VAR_4 = ((void*)0), *VAR_5 = ((void*)0);
 struct radeon_semaphore *VAR_6 = ((void*)0);
 bool VAR_7, VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_9(VAR_0, &VAR_6);
 if (VAR_10) {
  FUNC_0("Failed to create semaphore\n");
  goto out_cleanup;
 }

 VAR_10 = FUNC_7(VAR_0, VAR_1, 64);
 if (VAR_10) {
  FUNC_0("Failed to lock ring A %d\n", VAR_1->idx);
  goto out_cleanup;
 }
 FUNC_11(VAR_0, VAR_1->idx, VAR_6);
 FUNC_8(VAR_0, VAR_1, 0);

 VAR_10 = FUNC_13(VAR_0, VAR_1, &VAR_4);
 if (VAR_10)
  goto out_cleanup;

 VAR_10 = FUNC_7(VAR_0, VAR_2, 64);
 if (VAR_10) {
  FUNC_0("Failed to lock ring B %d\n", VAR_2->idx);
  goto out_cleanup;
 }
 FUNC_11(VAR_0, VAR_2->idx, VAR_6);
 FUNC_8(VAR_0, VAR_2, 0);
 VAR_10 = FUNC_13(VAR_0, VAR_2, &VAR_5);
 if (VAR_10)
  goto out_cleanup;

 FUNC_2(1000);

 if (FUNC_4(VAR_4)) {
  FUNC_0("Fence A signaled without waiting for semaphore.\n");
  goto out_cleanup;
 }
 if (FUNC_4(VAR_5)) {
  FUNC_0("Fence B signaled without waiting for semaphore.\n");
  goto out_cleanup;
 }

 VAR_10 = FUNC_7(VAR_0, VAR_3, 64);
 if (VAR_10) {
  FUNC_0("Failed to lock ring B %p\n", VAR_3);
  goto out_cleanup;
 }
 FUNC_10(VAR_0, VAR_3->idx, VAR_6);
 FUNC_8(VAR_0, VAR_3, 0);

 for (VAR_9 = 0; VAR_9 < 30; ++VAR_9) {
  FUNC_2(100);
  VAR_7 = FUNC_4(VAR_4);
  VAR_8 = FUNC_4(VAR_5);
  if (VAR_7 || VAR_8)
   break;
 }

 if (!VAR_7 && !VAR_8) {
  FUNC_0("Neither fence A nor B has been signaled\n");
  goto out_cleanup;
 } else if (VAR_7 && VAR_8) {
  FUNC_0("Both fence A and B has been signaled\n");
  goto out_cleanup;
 }

 FUNC_1("Fence %c was first signaled\n", VAR_7 ? 'A' : 'B');

 VAR_10 = FUNC_7(VAR_0, VAR_3, 64);
 if (VAR_10) {
  FUNC_0("Failed to lock ring B %p\n", VAR_3);
  goto out_cleanup;
 }
 FUNC_10(VAR_0, VAR_3->idx, VAR_6);
 FUNC_8(VAR_0, VAR_3, 0);

 FUNC_2(1000);

 VAR_10 = FUNC_6(VAR_4, 0);
 if (VAR_10) {
  FUNC_0("Failed to wait for sync fence A\n");
  goto out_cleanup;
 }
 VAR_10 = FUNC_6(VAR_5, 0);
 if (VAR_10) {
  FUNC_0("Failed to wait for sync fence B\n");
  goto out_cleanup;
 }

out_cleanup:
 FUNC_12(VAR_0, &VAR_6, ((void*)0));

 if (VAR_4)
  FUNC_5(&VAR_4);

 if (VAR_5)
  FUNC_5(&VAR_5);

 if (VAR_10)
  FUNC_3("Error while testing ring sync (%d)\n", VAR_10);
}
