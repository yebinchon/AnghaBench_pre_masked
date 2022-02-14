
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct amdgpu_ring {int mqd_obj; int * mqd_ptr; } ;
struct TYPE_2__ {int num_compute_rings; struct amdgpu_ring* compute_ring; } ;
struct amdgpu_device {TYPE_1__ gfx; } ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_device*,int) ;
 int FUNC_5 (struct amdgpu_ring*) ;
 int FUNC_6 (struct amdgpu_device*) ;
 int FUNC_7 (struct amdgpu_device*) ;
 scalar_t__ FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ring *VAR_1 = ((void*)0);
 int VAR_2 = 0, VAR_3;

 FUNC_4(VAR_0, 1);

 for (VAR_3 = 0; VAR_3 < VAR_0->gfx.num_compute_rings; VAR_3++) {
  VAR_1 = &VAR_0->gfx.compute_ring[VAR_3];

  VAR_2 = FUNC_2(VAR_1->mqd_obj, 0);
  if (FUNC_8(VAR_2 != 0))
   goto done;
  VAR_2 = FUNC_0(VAR_1->mqd_obj, &VAR_1->mqd_ptr);
  if (!VAR_2) {
   VAR_2 = FUNC_5(VAR_1);
   FUNC_1(VAR_1->mqd_obj);
   VAR_1->mqd_ptr = ((void*)0);
  }
  FUNC_3(VAR_1->mqd_obj);
  if (VAR_2)
   goto done;
 }

 FUNC_7(VAR_0);

 VAR_2 = FUNC_6(VAR_0);
 if (VAR_2)
  goto done;

done:
 return VAR_2;
}
