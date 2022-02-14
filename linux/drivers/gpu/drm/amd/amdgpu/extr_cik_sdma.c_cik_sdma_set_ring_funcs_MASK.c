
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int num_instances; TYPE_2__* instance; } ;
struct amdgpu_device {TYPE_3__ sdma; } ;
struct TYPE_4__ {int me; int * funcs; } ;
struct TYPE_5__ {TYPE_1__ ring; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct amdgpu_device *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sdma.num_instances; VAR_2++) {
  VAR_1->sdma.instance[VAR_2].ring.funcs = &VAR_0;
  VAR_1->sdma.instance[VAR_2].ring.me = VAR_2;
 }
}
