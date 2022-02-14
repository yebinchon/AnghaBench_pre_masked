
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int ready; } ;
struct amdgpu_ring {TYPE_3__ sched; int queue; int pipe; int me; } ;
struct TYPE_5__ {int num_gfx_rings; int num_compute_rings; struct amdgpu_ring* compute_ring; struct amdgpu_ring* gfx_ring; } ;
struct TYPE_4__ {scalar_t__ load_type; } ;
struct amdgpu_device {int flags; TYPE_2__ gfx; TYPE_1__ firmware; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct amdgpu_ring*) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_device*) ;
 int FUNC_6 (struct amdgpu_device*,int) ;
 int FUNC_7 (struct amdgpu_device*) ;
 int FUNC_8 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_3)
{
 int VAR_4, VAR_5;
 struct amdgpu_ring *VAR_6;

 if (!(VAR_3->flags & VAR_1))
  FUNC_6(VAR_3, 0);

 if (VAR_3->firmware.load_type == VAR_0) {

  VAR_4 = FUNC_4(VAR_3);
  if (VAR_4)
   return VAR_4;

  VAR_4 = FUNC_3(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 VAR_4 = FUNC_8(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  return VAR_4;

 if (!VAR_2) {
  VAR_4 = FUNC_5(VAR_3);
  if (VAR_4)
   return VAR_4;
 } else {
  VAR_4 = FUNC_2(VAR_3);
  if (VAR_4)
   return VAR_4;
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->gfx.num_gfx_rings; VAR_5++) {
  VAR_6 = &VAR_3->gfx.gfx_ring[VAR_5];
  FUNC_0("gfx %d ring me %d pipe %d q %d\n",
    VAR_5, VAR_6->me, VAR_6->pipe, VAR_6->queue);
  VAR_4 = FUNC_1(VAR_6);
  if (VAR_4) {
   VAR_6->sched.ready = 0;
   return VAR_4;
  }
 }

 for (VAR_5 = 0; VAR_5 < VAR_3->gfx.num_compute_rings; VAR_5++) {
  VAR_6 = &VAR_3->gfx.compute_ring[VAR_5];
  VAR_6->sched.ready = 1;
  FUNC_0("compute ring %d mec %d pipe %d q %d\n",
    VAR_5, VAR_6->me, VAR_6->pipe, VAR_6->queue);
  VAR_4 = FUNC_1(VAR_6);
  if (VAR_4)
   VAR_6->sched.ready = 0;
 }

 return 0;
}
