
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_connector {int dummy; } ;
struct analogix_dp_device {TYPE_1__* plat_data; } ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;
struct TYPE_2__ {scalar_t__ panel; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct analogix_dp_device*) ;
 int FUNC_2 (struct analogix_dp_device*,int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct analogix_dp_device* FUNC_3 (struct drm_connector*) ;

__attribute__((used)) static enum drm_connector_status
FUNC_4(struct drm_connector *VAR_2, bool VAR_3)
{
 struct analogix_dp_device *VAR_4 = FUNC_3(VAR_2);
 enum drm_connector_status VAR_5 = VAR_1;
 int VAR_6;

 if (VAR_4->plat_data->panel)
  return VAR_0;

 VAR_6 = FUNC_2(VAR_4, 1, 0);
 if (VAR_6) {
  FUNC_0("Failed to prepare panel (%d)\n", VAR_6);
  return VAR_1;
 }

 if (!FUNC_1(VAR_4))
  VAR_5 = VAR_0;

 VAR_6 = FUNC_2(VAR_4, 0, 0);
 if (VAR_6)
  FUNC_0("Failed to unprepare panel (%d)\n", VAR_6);

 return VAR_5;
}
