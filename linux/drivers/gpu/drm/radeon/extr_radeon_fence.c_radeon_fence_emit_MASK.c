
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct radeon_fence {int ring; int is_vm_update; scalar_t__ seq; int base; struct radeon_device* rdev; } ;
struct TYPE_4__ {int lock; } ;
struct radeon_device {int ddev; scalar_t__ fence_context; TYPE_2__ fence_queue; TYPE_1__* fence_drv; } ;
struct TYPE_3__ {scalar_t__* sync_seq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int *,scalar_t__,scalar_t__) ;
 struct radeon_fence* FUNC_1 (int,int ) ;
 int VAR_2 ;
 int FUNC_2 (struct radeon_device*,int,struct radeon_fence*) ;
 int FUNC_3 (struct radeon_device*,int) ;
 int FUNC_4 (int ,int,scalar_t__) ;

int FUNC_5(struct radeon_device *VAR_3,
        struct radeon_fence **VAR_4,
        int VAR_5)
{
 u64 VAR_6;


 *VAR_4 = FUNC_1(sizeof(struct radeon_fence), VAR_1);
 if ((*VAR_4) == ((void*)0)) {
  return -VAR_0;
 }
 (*VAR_4)->rdev = VAR_3;
 (*VAR_4)->seq = VAR_6 = ++VAR_3->fence_drv[VAR_5].sync_seq[VAR_5];
 (*VAR_4)->ring = VAR_5;
 (*VAR_4)->is_vm_update = 0;
 FUNC_0(&(*VAR_4)->base, &VAR_2,
         &VAR_3->fence_queue.lock,
         VAR_3->fence_context + VAR_5,
         VAR_6);
 FUNC_2(VAR_3, VAR_5, *VAR_4);
 FUNC_4(VAR_3->ddev, VAR_5, (*VAR_4)->seq);
 FUNC_3(VAR_3, VAR_5);
 return 0;
}
