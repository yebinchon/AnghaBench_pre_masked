
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int disp_priority; } ;
struct amdgpu_device {TYPE_1__ mode_info; } ;


 int VAR_0 ;

void FUNC_0(struct amdgpu_device *VAR_1)
{

 if ((VAR_0 == 0) || (VAR_0 > 2))
  VAR_1->mode_info.disp_priority = 0;
 else
  VAR_1->mode_info.disp_priority = VAR_0;

}
