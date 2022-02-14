
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct v9_mqd_allocation {int dynamic_cu_mask; int dynamic_rb_mask; } ;
struct v9_mqd {int dummy; } ;
struct amdgpu_ring {int queue; int pipe; int me; scalar_t__ wptr; struct v9_mqd* mqd_ptr; struct amdgpu_device* adev; } ;
struct TYPE_3__ {struct v9_mqd** mqd_backup; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; int srbm_mutex; scalar_t__ in_gpu_reset; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_ring*) ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_ring*) ;
 int FUNC_3 (struct amdgpu_ring*) ;
 int FUNC_4 (struct v9_mqd*,struct v9_mqd*,int) ;
 int FUNC_5 (void*,int ,int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct amdgpu_device*,int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_ring *VAR_1)
{
 struct amdgpu_device *VAR_2 = VAR_1->adev;
 struct v9_mqd *VAR_3 = VAR_1->mqd_ptr;
 int VAR_4 = VAR_0;

 FUNC_2(VAR_1);

 if (VAR_2->in_gpu_reset) {

  if (VAR_2->gfx.mec.mqd_backup[VAR_4])
   FUNC_4(VAR_3, VAR_2->gfx.mec.mqd_backup[VAR_4], sizeof(struct v9_mqd_allocation));


  VAR_1->wptr = 0;
  FUNC_0(VAR_1);

  FUNC_6(&VAR_2->srbm_mutex);
  FUNC_8(VAR_2, VAR_1->me, VAR_1->pipe, VAR_1->queue, 0);
  FUNC_1(VAR_1);
  FUNC_8(VAR_2, 0, 0, 0, 0);
  FUNC_7(&VAR_2->srbm_mutex);
 } else {
  FUNC_5((void *)VAR_3, 0, sizeof(struct v9_mqd_allocation));
  ((struct v9_mqd_allocation *)VAR_3)->dynamic_cu_mask = 0xFFFFFFFF;
  ((struct v9_mqd_allocation *)VAR_3)->dynamic_rb_mask = 0xFFFFFFFF;
  FUNC_6(&VAR_2->srbm_mutex);
  FUNC_8(VAR_2, VAR_1->me, VAR_1->pipe, VAR_1->queue, 0);
  FUNC_3(VAR_1);
  FUNC_1(VAR_1);
  FUNC_8(VAR_2, 0, 0, 0, 0);
  FUNC_7(&VAR_2->srbm_mutex);

  if (VAR_2->gfx.mec.mqd_backup[VAR_4])
   FUNC_4(VAR_2->gfx.mec.mqd_backup[VAR_4], VAR_3, sizeof(struct v9_mqd_allocation));
 }

 return 0;
}
