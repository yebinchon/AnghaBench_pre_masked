
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int me; int pipe; int queue; } ;
struct TYPE_3__ {int num_mec; int num_pipe_per_mec; int num_queue_per_pipe; int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ mec; } ;
struct amdgpu_device {int dev; TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int,int*,int*,int*) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ FUNC_2 (int,int ) ;

__attribute__((used)) static int FUNC_3(struct amdgpu_device *VAR_1,
      struct amdgpu_ring *VAR_2)
{
 int VAR_3;
 int VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_1->gfx.mec.num_mec
      * VAR_1->gfx.mec.num_pipe_per_mec
      * VAR_1->gfx.mec.num_queue_per_pipe;

 while (VAR_3-- >= 0) {
  if (FUNC_2(VAR_3, VAR_1->gfx.mec.queue_bitmap))
   continue;

  FUNC_0(VAR_1, VAR_3, &VAR_4, &VAR_5, &VAR_6);






  if ((VAR_4 == 1 && VAR_5 > 1) || VAR_6 != 0)
   continue;

  VAR_2->me = VAR_4 + 1;
  VAR_2->pipe = VAR_5;
  VAR_2->queue = VAR_6;

  return 0;
 }

 FUNC_1(VAR_1->dev, "Failed to find a queue for KIQ\n");
 return -VAR_0;
}
