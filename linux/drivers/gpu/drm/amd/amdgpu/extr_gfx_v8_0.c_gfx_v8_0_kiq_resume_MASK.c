
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ready; } ;
struct amdgpu_ring {TYPE_1__ sched; int mqd_obj; int * mqd_ptr; } ;
struct TYPE_5__ {struct amdgpu_ring ring; } ;
struct TYPE_6__ {TYPE_2__ kiq; } ;
struct amdgpu_device {TYPE_3__ gfx; } ;


 int FUNC_0 (int ,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct amdgpu_ring*) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct amdgpu_device *VAR_0)
{
 struct amdgpu_ring *VAR_1;
 int VAR_2;

 VAR_1 = &VAR_0->gfx.kiq.ring;

 VAR_2 = FUNC_2(VAR_1->mqd_obj, 0);
 if (FUNC_5(VAR_2 != 0))
  return VAR_2;

 VAR_2 = FUNC_0(VAR_1->mqd_obj, &VAR_1->mqd_ptr);
 if (FUNC_5(VAR_2 != 0))
  return VAR_2;

 FUNC_4(VAR_1);
 FUNC_1(VAR_1->mqd_obj);
 VAR_1->mqd_ptr = ((void*)0);
 FUNC_3(VAR_1->mqd_obj);
 VAR_1->sched.ready = 1;
 return 0;
}
