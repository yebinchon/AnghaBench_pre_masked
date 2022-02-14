
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_ring {int name; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int irq; struct amdgpu_ring ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int,int *) ;
 int FUNC_1 (struct amdgpu_device*,struct amdgpu_ring*,int,int *,int ) ;
 int FUNC_2 (struct amdgpu_device*) ;
 int FUNC_3 (struct amdgpu_device*) ;
 int FUNC_4 (struct amdgpu_device*) ;
 int FUNC_5 (int ,char*) ;

__attribute__((used)) static int FUNC_6(void *VAR_1)
{
 struct amdgpu_ring *VAR_2;
 struct amdgpu_device *VAR_3 = (struct amdgpu_device *)VAR_1;
 int VAR_4;


 VAR_4 = FUNC_0(VAR_3, VAR_0, 124, &VAR_3->uvd.inst->irq);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_2 = &VAR_3->uvd.inst->ring;
 FUNC_5(VAR_2->name, "uvd");
 VAR_4 = FUNC_1(VAR_3, VAR_2, 512, &VAR_3->uvd.inst->irq, 0);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 if (VAR_4)
  return VAR_4;

 VAR_4 = FUNC_2(VAR_3);

 return VAR_4;
}
