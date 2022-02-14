
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {TYPE_3__* rfbdev; } ;
struct amdgpu_device {TYPE_4__ mode_info; } ;
struct amdgpu_bo {int dummy; } ;
struct TYPE_5__ {int * obj; } ;
struct TYPE_6__ {TYPE_1__ base; } ;
struct TYPE_7__ {TYPE_2__ rfb; } ;


 struct amdgpu_bo* FUNC_0 (int ) ;

bool FUNC_1(struct amdgpu_device *VAR_0, struct amdgpu_bo *VAR_1)
{
 if (!VAR_0->mode_info.rfbdev)
  return 0;
 if (VAR_1 == FUNC_0(VAR_0->mode_info.rfbdev->rfb.base.obj[0]))
  return 1;
 return 0;
}
