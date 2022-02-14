
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int head; } ;
struct kgd_mem {TYPE_3__* process_info; TYPE_2__ validate_list; struct amdgpu_bo* bo; } ;
struct kgd_dev {int dummy; } ;
struct TYPE_4__ {int ttm; } ;
struct amdgpu_bo {TYPE_1__ tbo; } ;
struct TYPE_6__ {int lock; int eviction_fence; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct amdgpu_bo*,int ) ;
 int FUNC_1 (struct amdgpu_bo*,void**) ;
 int FUNC_2 (struct amdgpu_bo*,int ) ;
 int FUNC_3 (struct amdgpu_bo*,int) ;
 int FUNC_4 (struct amdgpu_bo*) ;
 int FUNC_5 (struct amdgpu_bo*) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (char*,...) ;

int FUNC_12(struct kgd_dev *VAR_2,
  struct kgd_mem *VAR_3, void **VAR_4, uint64_t *VAR_5)
{
 int VAR_6;
 struct amdgpu_bo *VAR_7 = VAR_3->bo;

 if (FUNC_7(VAR_7->tbo.ttm)) {
  FUNC_11("userptr can't be mapped to kernel\n");
  return -VAR_1;
 }




 FUNC_9(&VAR_3->process_info->lock);

 VAR_6 = FUNC_3(VAR_7, 1);
 if (VAR_6) {
  FUNC_11("Failed to reserve bo. ret %d\n", VAR_6);
  goto bo_reserve_failed;
 }

 VAR_6 = FUNC_2(VAR_7, VAR_0);
 if (VAR_6) {
  FUNC_11("Failed to pin bo. ret %d\n", VAR_6);
  goto pin_failed;
 }

 VAR_6 = FUNC_1(VAR_7, VAR_4);
 if (VAR_6) {
  FUNC_11("Failed to map bo to kernel. ret %d\n", VAR_6);
  goto kmap_failed;
 }

 FUNC_0(
  VAR_7, VAR_3->process_info->eviction_fence);
 FUNC_8(&VAR_3->validate_list.head);

 if (VAR_5)
  *VAR_5 = FUNC_4(VAR_7);

 FUNC_6(VAR_7);

 FUNC_10(&VAR_3->process_info->lock);
 return 0;

kmap_failed:
 FUNC_5(VAR_7);
pin_failed:
 FUNC_6(VAR_7);
bo_reserve_failed:
 FUNC_10(&VAR_3->process_info->lock);

 return VAR_6;
}
