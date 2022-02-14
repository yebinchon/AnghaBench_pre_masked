
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_connector_force { ____Placeholder_drm_connector_force } drm_connector_force ;







const char *FUNC_0(enum drm_connector_force VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "unspecified";
 case 131:
  return "off";
 case 130:
  return "on";
 case 129:
  return "digital";
 default:
  return "unknown";
 }
}
