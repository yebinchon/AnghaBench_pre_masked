
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_queue_per_pipe; int num_pipe_per_me; } ;
struct TYPE_3__ {TYPE_2__ me; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;



void FUNC_0(struct amdgpu_device *VAR_0, int VAR_1,
    int *VAR_2, int *VAR_3, int *VAR_4)
{
 *VAR_4 = VAR_1 % VAR_0->gfx.me.num_queue_per_pipe;
 *VAR_3 = (VAR_1 / VAR_0->gfx.me.num_queue_per_pipe)
  % VAR_0->gfx.me.num_pipe_per_me;
 *VAR_2 = (VAR_1 / VAR_0->gfx.me.num_queue_per_pipe)
  / VAR_0->gfx.me.num_pipe_per_me;
}
