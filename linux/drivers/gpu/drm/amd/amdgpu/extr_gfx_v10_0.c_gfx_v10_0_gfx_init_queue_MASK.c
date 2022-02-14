
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v10_gfx_mqd {int dummy; } ;
struct amdgpu_ring {int queue; int pipe; int me; scalar_t__ wptr; struct v10_gfx_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
struct TYPE_3__ {struct v10_gfx_mqd** mqd_backup; } ;
struct TYPE_4__ {TYPE_1__ me; } ;
struct amdgpu_device {int srbm_mutex; TYPE_2__ gfx; scalar_t__ in_gpu_reset; int in_suspend; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct v10_gfx_mqd*,struct v10_gfx_mqd*,int) ;
 int FUNC_4 (void*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 struct v10_gfx_mqd *VAR_3 = VAR_1->mqd_ptr;

 if (!VAR_2->in_gpu_reset && !VAR_2->in_suspend) {
  FUNC_4((void *)VAR_3, 0, sizeof(*VAR_3));
  FUNC_5(&VAR_2->srbm_mutex);
  FUNC_7(VAR_2, VAR_1->me, VAR_1->pipe, VAR_1->queue, 0);
  FUNC_1(VAR_1);



  FUNC_7(VAR_2, 0, 0, 0, 0);
  FUNC_6(&VAR_2->srbm_mutex);
  if (VAR_2->gfx.me.mqd_backup[VAR_0])
   FUNC_3(VAR_2->gfx.me.mqd_backup[VAR_0], VAR_3, sizeof(*VAR_3));
 } else if (VAR_2->in_gpu_reset) {

  if (VAR_2->gfx.me.mqd_backup[VAR_0])
   FUNC_3(VAR_3, VAR_2->gfx.me.mqd_backup[VAR_0], sizeof(*VAR_3));

  VAR_1->wptr = 0;
  FUNC_0(VAR_1);







 } else {
  FUNC_0(VAR_1);
 }

 return 0;
}
