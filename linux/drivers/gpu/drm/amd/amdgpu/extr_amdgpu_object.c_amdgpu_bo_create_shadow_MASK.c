
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct amdgpu_device {int shadow_list_lock; int shadow_list; } ;
struct amdgpu_bo_param {unsigned long size; int flags; int resv; int type; int domain; } ;
struct TYPE_4__ {int resv; } ;
struct TYPE_5__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_3__* shadow; TYPE_2__ tbo; } ;
typedef int bp ;
struct TYPE_6__ {int shadow_list; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct amdgpu_device*,struct amdgpu_bo_param*,TYPE_3__**) ;
 int FUNC_1 (struct amdgpu_bo*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct amdgpu_bo_param*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_4,
       unsigned long VAR_5,
       struct amdgpu_bo *VAR_6)
{
 struct amdgpu_bo_param VAR_7;
 int VAR_8;

 if (VAR_6->shadow)
  return 0;

 FUNC_3(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.size = VAR_5;
 VAR_7.domain = VAR_2;
 VAR_7.flags = VAR_0 |
  VAR_1;
 VAR_7.type = VAR_3;
 VAR_7.resv = VAR_6->tbo.base.resv;

 VAR_8 = FUNC_0(VAR_4, &VAR_7, &VAR_6->shadow);
 if (!VAR_8) {
  VAR_6->shadow->parent = FUNC_1(VAR_6);
  FUNC_4(&VAR_4->shadow_list_lock);
  FUNC_2(&VAR_6->shadow->shadow_list, &VAR_4->shadow_list);
  FUNC_5(&VAR_4->shadow_list_lock);
 }

 return VAR_8;
}
