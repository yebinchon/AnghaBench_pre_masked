
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int dummy; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* inst; } ;
struct amdgpu_device {TYPE_2__ uvd; } ;
struct TYPE_3__ {int ring; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 FUNC_0("IH: UVD TRAP\n");
 FUNC_1(&VAR_0->uvd.inst->ring);
 return 0;
}
