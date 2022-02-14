
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9_mqd_allocation {int dynamic_cu_mask; int dynamic_rb_mask; } ;
struct v9_mqd {int dummy; } ;
struct amdgpu_ring {scalar_t__ wptr; int queue; int pipe; int me; struct v9_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
struct TYPE_3__ {struct v9_mqd** mqd_backup; } ;
struct TYPE_4__ {TYPE_1__ mec; struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {TYPE_2__ gfx; scalar_t__ in_gpu_reset; int srbm_mutex; int in_suspend; } ;


 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct v9_mqd*,struct v9_mqd*,int) ;
 int FUNC_3 (void*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 struct v9_mqd *VAR_2 = VAR_0->mqd_ptr;
 int VAR_3 = VAR_0 - &VAR_1->gfx.compute_ring[0];

 if (!VAR_1->in_gpu_reset && !VAR_1->in_suspend) {
  FUNC_3((void *)VAR_2, 0, sizeof(struct v9_mqd_allocation));
  ((struct v9_mqd_allocation *)VAR_2)->dynamic_cu_mask = 0xFFFFFFFF;
  ((struct v9_mqd_allocation *)VAR_2)->dynamic_rb_mask = 0xFFFFFFFF;
  FUNC_4(&VAR_1->srbm_mutex);
  FUNC_6(VAR_1, VAR_0->me, VAR_0->pipe, VAR_0->queue, 0);
  FUNC_1(VAR_0);
  FUNC_6(VAR_1, 0, 0, 0, 0);
  FUNC_5(&VAR_1->srbm_mutex);

  if (VAR_1->gfx.mec.mqd_backup[VAR_3])
   FUNC_2(VAR_1->gfx.mec.mqd_backup[VAR_3], VAR_2, sizeof(struct v9_mqd_allocation));
 } else if (VAR_1->in_gpu_reset) {

  if (VAR_1->gfx.mec.mqd_backup[VAR_3])
   FUNC_2(VAR_2, VAR_1->gfx.mec.mqd_backup[VAR_3], sizeof(struct v9_mqd_allocation));


  VAR_0->wptr = 0;
  FUNC_0(VAR_0);
 } else {
  FUNC_0(VAR_0);
 }

 return 0;
}
