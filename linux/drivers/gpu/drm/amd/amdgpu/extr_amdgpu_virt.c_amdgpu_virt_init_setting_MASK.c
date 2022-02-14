
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_crtc; } ;
struct amdgpu_device {int enable_virtual_display; scalar_t__ pg_flags; scalar_t__ cg_flags; TYPE_3__* ddev; TYPE_1__ mode_info; } ;
struct TYPE_6__ {TYPE_2__* driver; } ;
struct TYPE_5__ {int driver_features; } ;


 int VAR_0 ;

void FUNC_0(struct amdgpu_device *VAR_1)
{

 VAR_1->mode_info.num_crtc = 1;
 VAR_1->enable_virtual_display = 1;
 VAR_1->ddev->driver->driver_features &= ~VAR_0;
 VAR_1->cg_flags = 0;
 VAR_1->pg_flags = 0;
}
