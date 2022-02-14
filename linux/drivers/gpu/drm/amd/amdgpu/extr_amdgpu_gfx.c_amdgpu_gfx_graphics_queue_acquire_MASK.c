
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_queue_per_pipe; int num_pipe_per_me; int num_me; int queue_bitmap; } ;
struct TYPE_4__ {TYPE_1__ me; int num_gfx_rings; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int,int ) ;

void FUNC_2(struct amdgpu_device *VAR_1)
{
 int VAR_2, VAR_3, VAR_4, VAR_5;

 for (VAR_2 = 0; VAR_2 < VAR_0; ++VAR_2) {
  VAR_3 = VAR_2 % VAR_1->gfx.me.num_queue_per_pipe;
  VAR_4 = (VAR_2 / VAR_1->gfx.me.num_queue_per_pipe)
   % VAR_1->gfx.me.num_pipe_per_me;
  VAR_5 = (VAR_2 / VAR_1->gfx.me.num_queue_per_pipe)
        / VAR_1->gfx.me.num_pipe_per_me;

  if (VAR_5 >= VAR_1->gfx.me.num_me)
   break;


  if (VAR_5 == 0 && VAR_3 < 1)
   FUNC_1(VAR_2, VAR_1->gfx.me.queue_bitmap);
 }


 VAR_1->gfx.num_gfx_rings =
  FUNC_0(VAR_1->gfx.me.queue_bitmap, VAR_0);
}
