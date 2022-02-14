
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct vmw_private {int dummy; } ;
struct vmw_display_unit {scalar_t__ unit; scalar_t__ pref_active; } ;
struct drm_device {int dummy; } ;
struct drm_connector {struct drm_device* dev; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct vmw_display_unit* FUNC_0 (struct drm_connector*) ;
 struct vmw_private* FUNC_1 (struct drm_device*) ;
 scalar_t__ FUNC_2 (struct vmw_private*,int ) ;

enum drm_connector_status
FUNC_3(struct drm_connector *VAR_3, bool VAR_4)
{
 uint32_t VAR_5;
 struct drm_device *VAR_6 = VAR_3->dev;
 struct vmw_private *VAR_7 = FUNC_1(VAR_6);
 struct vmw_display_unit *VAR_8 = FUNC_0(VAR_3);

 VAR_5 = FUNC_2(VAR_7, VAR_0);

 return ((FUNC_0(VAR_3)->unit < VAR_5 &&
   VAR_8->pref_active) ?
  VAR_1 : VAR_2);
}
