
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_connector {int base; TYPE_1__* dev; } ;
struct dc_link {int connector_signal; scalar_t__ type; } ;
struct TYPE_4__ {int aux; } ;
struct amdgpu_dm_connector {struct drm_connector* i2c; TYPE_2__ dm_dp_aux; int * dc_sink; int * dc_em_sink; struct dc_link* dc_link; } ;
struct amdgpu_display_manager {int * backlight_dev; } ;
struct amdgpu_device {struct amdgpu_display_manager dm; } ;
struct TYPE_3__ {struct amdgpu_device* dev_private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct drm_connector*) ;
 int FUNC_3 (struct drm_connector*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_connector*) ;
 struct amdgpu_dm_connector* FUNC_7 (struct drm_connector*) ;

__attribute__((used)) static void FUNC_8(struct drm_connector *VAR_3)
{
 struct amdgpu_dm_connector *VAR_4 = FUNC_7(VAR_3);
 const struct dc_link *VAR_5 = VAR_4->dc_link;
 struct amdgpu_device *VAR_6 = VAR_3->dev->dev_private;
 struct amdgpu_display_manager *VAR_7 = &VAR_6->dm;
 if (VAR_4->dc_em_sink)
  FUNC_1(VAR_4->dc_em_sink);
 VAR_4->dc_em_sink = ((void*)0);
 if (VAR_4->dc_sink)
  FUNC_1(VAR_4->dc_sink);
 VAR_4->dc_sink = ((void*)0);

 FUNC_4(&VAR_4->dm_dp_aux.aux);
 FUNC_3(VAR_3);
 FUNC_2(VAR_3);
 if (VAR_4->i2c) {
  FUNC_5(&VAR_4->i2c->base);
  FUNC_6(VAR_4->i2c);
 }

 FUNC_6(VAR_3);
}
