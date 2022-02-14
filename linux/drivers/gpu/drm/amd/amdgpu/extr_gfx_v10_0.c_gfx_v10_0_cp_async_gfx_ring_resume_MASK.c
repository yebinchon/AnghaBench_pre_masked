
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int ready; } ;
struct amdgpu_ring {TYPE_2__ sched; int mqd_obj; int * mqd_ptr; } ;
struct TYPE_3__ {int num_gfx_rings; struct amdgpu_ring* gfx_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int ,void**) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8(struct amdgpu_device *VAR_0)
{
 int VAR_1, VAR_2;
 struct amdgpu_ring *VAR_3;

 for (VAR_2 = 0; VAR_2 < VAR_0->gfx.num_gfx_rings; VAR_2++) {
  VAR_3 = &VAR_0->gfx.gfx_ring[VAR_2];

  VAR_1 = FUNC_2(VAR_3->mqd_obj, 0);
  if (FUNC_7(VAR_1 != 0))
   goto done;

  VAR_1 = FUNC_0(VAR_3->mqd_obj, (void **)&VAR_3->mqd_ptr);
  if (!VAR_1) {
   VAR_1 = FUNC_5(VAR_3);
   FUNC_1(VAR_3->mqd_obj);
   VAR_3->mqd_ptr = ((void*)0);
  }
  FUNC_3(VAR_3->mqd_obj);
  if (VAR_1)
   goto done;
 }

 VAR_1 = FUNC_6(VAR_0);
 if (VAR_1)
  goto done;

 VAR_1 = FUNC_4(VAR_0);
 if (VAR_1)
  goto done;

 for (VAR_2 = 0; VAR_2 < VAR_0->gfx.num_gfx_rings; VAR_2++) {
  VAR_3 = &VAR_0->gfx.gfx_ring[VAR_2];
  VAR_3->sched.ready = 1;
 }
done:
 return VAR_1;
}
