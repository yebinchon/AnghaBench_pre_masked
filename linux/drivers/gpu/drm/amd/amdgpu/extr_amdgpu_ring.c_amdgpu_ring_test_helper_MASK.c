
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ready; } ;
struct amdgpu_ring {TYPE_1__ sched; int name; struct amdgpu_device* adev; } ;
struct amdgpu_device {int dev; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*,int ,int) ;
 int FUNC_2 (struct amdgpu_ring*) ;

int FUNC_3(struct amdgpu_ring *VAR_0)
{
 struct amdgpu_device *VAR_1 = VAR_0->adev;
 int VAR_2;

 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2)
  FUNC_1(VAR_1->dev, "ring %s test failed (%d)\n",
         VAR_0->name, VAR_2);
 else
  FUNC_0(VAR_1->dev, "ring test on %s succeeded\n",
         VAR_0->name);

 VAR_0->sched.ready = !VAR_2;
 return VAR_2;
}
