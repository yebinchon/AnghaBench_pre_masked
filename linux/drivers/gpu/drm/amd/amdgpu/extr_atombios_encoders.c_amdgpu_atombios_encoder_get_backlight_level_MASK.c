
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct TYPE_3__ {struct drm_device* dev; } ;
struct amdgpu_encoder {TYPE_1__ base; } ;
struct TYPE_4__ {int firmware_flags; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*) ;

u8
FUNC_1(struct amdgpu_encoder *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;

 if (!(VAR_3->mode_info.firmware_flags & VAR_0))
  return 0;

 return FUNC_0(VAR_3);
}
