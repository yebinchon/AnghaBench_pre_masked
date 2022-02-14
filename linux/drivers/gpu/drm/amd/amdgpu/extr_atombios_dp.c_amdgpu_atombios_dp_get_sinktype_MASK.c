
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct drm_device {struct amdgpu_device* dev_private; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_4__ {struct drm_device* dev; } ;
struct amdgpu_connector {TYPE_3__* ddc_bus; TYPE_1__ base; } ;
struct TYPE_5__ {int i2c_id; } ;
struct TYPE_6__ {TYPE_2__ rec; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdgpu_device*,int ,int ,int ,int ) ;

u8 FUNC_1(struct amdgpu_connector *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->base.dev;
 struct amdgpu_device *VAR_3 = VAR_2->dev_private;

 return FUNC_0(VAR_3, VAR_0, 0,
        VAR_1->ddc_bus->rec.i2c_id, 0);
}
