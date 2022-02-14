
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_2__ {unsigned int max_handles; int * handles; } ;
struct amdgpu_device {TYPE_1__ uvd; } ;


 scalar_t__ FUNC_0 (int *) ;

uint32_t FUNC_1(struct amdgpu_device *VAR_0)
{
 unsigned VAR_1;
 uint32_t VAR_2 = 0;

 for (VAR_1 = 0; VAR_1 < VAR_0->uvd.max_handles; ++VAR_1) {





  if (FUNC_0(&VAR_0->uvd.handles[VAR_1]))
   VAR_2++;
 }

 return VAR_2;
}
