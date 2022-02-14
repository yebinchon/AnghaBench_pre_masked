
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int num_instances; TYPE_1__* instance; } ;
struct amdgpu_device {TYPE_2__ sdma; } ;
struct TYPE_3__ {int ring; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct amdgpu_device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_0)
{
 struct amdgpu_device *VAR_1 = (struct amdgpu_device *)VAR_0;
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->sdma.num_instances; VAR_2++)
  FUNC_0(&VAR_1->sdma.instance[VAR_2].ring);

 FUNC_1(VAR_1);
 return 0;
}
