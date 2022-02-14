
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ dev; } ;
struct amdgpu_device {TYPE_1__ kfd; } ;


 int VAR_0 ;

bool FUNC_0(struct amdgpu_device *VAR_1, u32 VAR_2)
{
 if (VAR_1->kfd.dev) {
  if ((1 << VAR_2) & VAR_0)
   return 1;
 }

 return 0;
}
