
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_pipe_per_mec; int num_queue_per_pipe; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;



int FUNC_0(struct amdgpu_device *VAR_0, int VAR_1,
    int VAR_2, int VAR_3)
{
 int VAR_4 = 0;

 VAR_4 += VAR_1 * VAR_0->gfx.mec.num_pipe_per_mec
  * VAR_0->gfx.mec.num_queue_per_pipe;
 VAR_4 += VAR_2 * VAR_0->gfx.mec.num_queue_per_pipe;
 VAR_4 += VAR_3;

 return VAR_4;
}
