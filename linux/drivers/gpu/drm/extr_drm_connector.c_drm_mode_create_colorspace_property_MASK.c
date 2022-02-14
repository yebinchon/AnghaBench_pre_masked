
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_property {int dummy; } ;
struct drm_device {int dummy; } ;
struct drm_connector {scalar_t__ connector_type; struct drm_property* colorspace_property; struct drm_device* dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct drm_property* FUNC_2 (struct drm_device*,int ,char*,int ,int ) ;
 int VAR_4 ;

int FUNC_3(struct drm_connector *VAR_5)
{
 struct drm_device *VAR_6 = VAR_5->dev;
 struct drm_property *VAR_7;

 if (VAR_5->connector_type == VAR_0 ||
     VAR_5->connector_type == VAR_1) {
  VAR_7 = FUNC_2(VAR_6, VAR_2,
      "Colorspace",
      VAR_4,
      FUNC_0(VAR_4));
  if (!VAR_7)
   return -VAR_3;
 } else {
  FUNC_1("Colorspace property not supported\n");
  return 0;
 }

 VAR_5->colorspace_property = VAR_7;

 return 0;
}
