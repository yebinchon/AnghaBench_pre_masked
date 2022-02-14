
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct amdgpu_iv_entry {int src_id; } ;
struct amdgpu_irq_src {int dummy; } ;
struct TYPE_4__ {TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {int ring; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static int FUNC_1(struct amdgpu_device *VAR_0,
          struct amdgpu_irq_src *VAR_1,
          struct amdgpu_iv_entry *VAR_2)
{
 if (VAR_2->src_id == 224)
  FUNC_0(&VAR_0->sdma.instance[0].ring);
 else
  FUNC_0(&VAR_0->sdma.instance[1].ring);
 return 0;
}
