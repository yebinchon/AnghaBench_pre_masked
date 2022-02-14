
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct radeon_ring {int ready; } ;
struct TYPE_4__ {int last_vm_update; } ;
struct radeon_ib {size_t ring; int fence; scalar_t__ vm; TYPE_1__ sync; int length_dw; } ;
struct radeon_fence {int dummy; } ;
struct radeon_device {int dev; struct radeon_ring* ring; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct radeon_device*,int *,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct radeon_device*,size_t,struct radeon_ib*) ;
 int FUNC_4 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_5 (struct radeon_device*,struct radeon_ring*,int) ;
 int FUNC_6 (struct radeon_device*,struct radeon_ring*) ;
 int FUNC_7 (TYPE_1__*,struct radeon_fence*) ;
 int FUNC_8 (struct radeon_device*,TYPE_1__*,int *) ;
 int FUNC_9 (struct radeon_device*,TYPE_1__*,size_t) ;
 int FUNC_10 (struct radeon_device*,scalar_t__,int ) ;
 int FUNC_11 (struct radeon_device*,scalar_t__,size_t,int ) ;
 struct radeon_fence* FUNC_12 (struct radeon_device*,scalar_t__,size_t) ;

int FUNC_13(struct radeon_device *VAR_2, struct radeon_ib *VAR_3,
         struct radeon_ib *VAR_4, bool VAR_5)
{
 struct radeon_ring *VAR_6 = &VAR_2->ring[VAR_3->ring];
 int VAR_7 = 0;

 if (!VAR_3->length_dw || !VAR_6->ready) {

  FUNC_0(VAR_2->dev, "couldn't schedule ib\n");
  return -VAR_0;
 }


 VAR_7 = FUNC_4(VAR_2, VAR_6, 64 + VAR_1 * 8);
 if (VAR_7) {
  FUNC_0(VAR_2->dev, "scheduling IB failed (%d).\n", VAR_7);
  return VAR_7;
 }


 if (VAR_3->vm) {
  struct radeon_fence *VAR_8;
  VAR_8 = FUNC_12(VAR_2, VAR_3->vm, VAR_3->ring);
  FUNC_7(&VAR_3->sync, VAR_8);
 }


 VAR_7 = FUNC_9(VAR_2, &VAR_3->sync, VAR_3->ring);
 if (VAR_7) {
  FUNC_0(VAR_2->dev, "failed to sync rings (%d)\n", VAR_7);
  FUNC_6(VAR_2, VAR_6);
  return VAR_7;
 }

 if (VAR_3->vm)
  FUNC_11(VAR_2, VAR_3->vm, VAR_3->ring,
    VAR_3->sync.last_vm_update);

 if (VAR_4) {
  FUNC_3(VAR_2, VAR_4->ring, VAR_4);
  FUNC_8(VAR_2, &VAR_4->sync, ((void*)0));
 }
 FUNC_3(VAR_2, VAR_3->ring, VAR_3);
 VAR_7 = FUNC_1(VAR_2, &VAR_3->fence, VAR_3->ring);
 if (VAR_7) {
  FUNC_0(VAR_2->dev, "failed to emit fence for new IB (%d)\n", VAR_7);
  FUNC_6(VAR_2, VAR_6);
  return VAR_7;
 }
 if (VAR_4) {
  VAR_4->fence = FUNC_2(VAR_3->fence);
 }

 if (VAR_3->vm)
  FUNC_10(VAR_2, VAR_3->vm, VAR_3->fence);

 FUNC_5(VAR_2, VAR_6, VAR_5);
 return 0;
}
