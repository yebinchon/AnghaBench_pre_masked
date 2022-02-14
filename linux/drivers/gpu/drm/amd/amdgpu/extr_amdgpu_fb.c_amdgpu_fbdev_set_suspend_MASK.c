
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* rfbdev; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_3__ {int helper; } ;


 int FUNC_0 (int *,int) ;

void FUNC_1(struct amdgpu_device *VAR_0, int VAR_1)
{
 if (VAR_0->mode_info.rfbdev)
  FUNC_0(&VAR_0->mode_info.rfbdev->helper,
         VAR_1);
}
