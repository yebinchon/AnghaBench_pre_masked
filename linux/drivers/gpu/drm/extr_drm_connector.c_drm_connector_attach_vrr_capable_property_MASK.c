
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {int base; struct drm_property* vrr_capable_property; struct drm_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct drm_property*,int ) ;
 struct drm_property* FUNC_1 (struct drm_device*,int ,char*) ;

int FUNC_2(
 struct drm_connector *VAR_2)
{
 struct drm_device *VAR_3 = VAR_2->dev;
 struct drm_property *VAR_4;

 if (!VAR_2->vrr_capable_property) {
  VAR_4 = FUNC_1(VAR_3, VAR_0,
   "vrr_capable");
  if (!VAR_4)
   return -VAR_1;

  VAR_2->vrr_capable_property = VAR_4;
  FUNC_0(&VAR_2->base, VAR_4, 0);
 }

 return 0;
}
