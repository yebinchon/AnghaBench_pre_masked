
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_buffer_object {int ttm; } ;
struct file {int private_data; } ;
struct TYPE_3__ {int vma_node; } ;
struct TYPE_4__ {TYPE_1__ base; } ;
struct amdgpu_bo {TYPE_2__ tbo; scalar_t__ kfd_bo; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *,int ) ;
 struct amdgpu_bo* FUNC_2 (struct ttm_buffer_object*) ;

__attribute__((used)) static int FUNC_3(struct ttm_buffer_object *VAR_1, struct file *VAR_2)
{
 struct amdgpu_bo *VAR_3 = FUNC_2(VAR_1);





 if (VAR_3->kfd_bo)
  return 0;

 if (FUNC_0(VAR_1->ttm))
  return -VAR_0;
 return FUNC_1(&VAR_3->tbo.base.vma_node,
       VAR_2->private_data);
}
