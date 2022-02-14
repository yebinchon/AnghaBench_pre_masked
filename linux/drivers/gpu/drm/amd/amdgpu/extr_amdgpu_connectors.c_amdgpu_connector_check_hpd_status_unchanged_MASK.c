
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_device {struct amdgpu_device* dev_private; } ;
struct drm_connector {int status; struct drm_device* dev; } ;
struct amdgpu_device {int dummy; } ;
struct TYPE_2__ {scalar_t__ hpd; } ;
struct amdgpu_connector {TYPE_1__ hpd; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct amdgpu_device*,scalar_t__) ;
 int VAR_1 ;
 int VAR_2 ;
 struct amdgpu_connector* FUNC_1 (struct drm_connector*) ;

__attribute__((used)) static bool
FUNC_2(struct drm_connector *VAR_3)
{
 struct drm_device *VAR_4 = VAR_3->dev;
 struct amdgpu_device *VAR_5 = VAR_4->dev_private;
 struct amdgpu_connector *VAR_6 = FUNC_1(VAR_3);
 enum drm_connector_status VAR_7;

 if (VAR_6->hpd.hpd != VAR_0) {
  if (FUNC_0(VAR_5, VAR_6->hpd.hpd))
   VAR_7 = VAR_1;
  else
   VAR_7 = VAR_2;
  if (VAR_3->status == VAR_7)
   return 1;
 }

 return 0;
}
