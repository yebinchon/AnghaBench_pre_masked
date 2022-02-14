
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_dss_device {TYPE_1__* ops; } ;
struct drm_connector {int connector_type; int name; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {scalar_t__ (* detect ) (struct omap_dss_device*) ;} ;





 int VAR_0 ;
 int FUNC_0 (char*,int ,int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct omap_dss_device* FUNC_1 (struct drm_connector*,int ) ;
 int FUNC_2 (struct drm_connector*,int) ;
 scalar_t__ FUNC_3 (struct omap_dss_device*) ;

__attribute__((used)) static enum drm_connector_status FUNC_4(
  struct drm_connector *VAR_4, bool VAR_5)
{
 struct omap_dss_device *VAR_6;
 enum drm_connector_status VAR_7;

 VAR_6 = FUNC_1(VAR_4,
         VAR_0);

 if (VAR_6) {
  VAR_7 = VAR_6->ops->detect(VAR_6)
         ? VAR_1
         : VAR_2;

  FUNC_2(VAR_4, VAR_7);
 } else {
  switch (VAR_4->connector_type) {
  case 130:
  case 128:
  case 129:
   VAR_7 = VAR_1;
   break;
  default:
   VAR_7 = VAR_3;
   break;
  }
 }

 FUNC_0("%s: %d (force=%d)", VAR_4->name, VAR_7, VAR_5);

 return VAR_7;
}
