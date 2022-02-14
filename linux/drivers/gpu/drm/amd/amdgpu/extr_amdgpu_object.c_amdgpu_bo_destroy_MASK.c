
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ttm_buffer_object {int bdev; } ;
struct amdgpu_device {int shadow_list_lock; } ;
struct TYPE_5__ {scalar_t__ import_attach; } ;
struct TYPE_4__ {TYPE_2__ base; int sg; } ;
struct amdgpu_bo {scalar_t__ pin_count; struct amdgpu_bo* metadata; int parent; int shadow_list; TYPE_1__ tbo; } ;


 int FUNC_0 (struct amdgpu_bo*) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (int *) ;
 struct amdgpu_device* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ) ;
 int FUNC_6 (struct amdgpu_bo*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 struct amdgpu_bo* FUNC_11 (struct ttm_buffer_object*) ;

__attribute__((used)) static void FUNC_12(struct ttm_buffer_object *VAR_0)
{
 struct amdgpu_device *VAR_1 = FUNC_3(VAR_0->bdev);
 struct amdgpu_bo *VAR_2 = FUNC_11(VAR_0);

 if (VAR_2->pin_count > 0)
  FUNC_1(VAR_2);

 FUNC_0(VAR_2);

 if (VAR_2->tbo.base.import_attach)
  FUNC_5(&VAR_2->tbo.base, VAR_2->tbo.sg);
 FUNC_4(&VAR_2->tbo.base);

 if (!FUNC_8(&VAR_2->shadow_list)) {
  FUNC_9(&VAR_1->shadow_list_lock);
  FUNC_7(&VAR_2->shadow_list);
  FUNC_10(&VAR_1->shadow_list_lock);
 }
 FUNC_2(&VAR_2->parent);

 FUNC_6(VAR_2->metadata);
 FUNC_6(VAR_2);
}
