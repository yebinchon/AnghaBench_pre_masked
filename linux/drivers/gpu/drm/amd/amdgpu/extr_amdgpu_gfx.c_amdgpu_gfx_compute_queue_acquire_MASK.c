
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int num_queue_per_pipe; int num_pipe_per_mec; int num_mec; int queue_bitmap; } ;
struct TYPE_4__ {scalar_t__ num_compute_rings; TYPE_1__ mec; } ;
struct amdgpu_device {TYPE_2__ gfx; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct amdgpu_device*) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int,int ) ;

void FUNC_4(struct amdgpu_device *VAR_2)
{
 int VAR_3, VAR_4, VAR_5, VAR_6;
 bool VAR_7 = FUNC_1(VAR_2);


 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  VAR_4 = VAR_3 % VAR_2->gfx.mec.num_queue_per_pipe;
  VAR_5 = (VAR_3 / VAR_2->gfx.mec.num_queue_per_pipe)
   % VAR_2->gfx.mec.num_pipe_per_mec;
  VAR_6 = (VAR_3 / VAR_2->gfx.mec.num_queue_per_pipe)
   / VAR_2->gfx.mec.num_pipe_per_mec;


  if (VAR_6 >= VAR_2->gfx.mec.num_mec)
   break;

  if (VAR_7) {

   if (VAR_6 == 0 && VAR_4 < 2)
    FUNC_3(VAR_3, VAR_2->gfx.mec.queue_bitmap);
  } else {

   if (VAR_6 == 0 && VAR_5 == 0)
    FUNC_3(VAR_3, VAR_2->gfx.mec.queue_bitmap);
  }
 }


 VAR_2->gfx.num_compute_rings =
  FUNC_2(VAR_2->gfx.mec.queue_bitmap, VAR_0);



 if (FUNC_0(VAR_2->gfx.num_compute_rings > VAR_1))
  VAR_2->gfx.num_compute_rings = VAR_1;
}
