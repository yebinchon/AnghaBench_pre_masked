
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {struct drm_device* dev; } ;
struct TYPE_4__ {TYPE_1__* rfbdev; } ;
struct amdgpu_device {TYPE_2__ mode_info; } ;
struct TYPE_3__ {int helper; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct drm_connector*) ;
 int FUNC_2 (int *,struct drm_connector*) ;

__attribute__((used)) static void FUNC_3(struct drm_connector *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct amdgpu_device *VAR_2 = VAR_1->dev_private;

 if (VAR_2->mode_info.rfbdev)
  FUNC_2(&VAR_2->mode_info.rfbdev->helper, VAR_0);
 else
  FUNC_0("adev->mode_info.rfbdev is NULL\n");

 FUNC_1(VAR_0);
}
