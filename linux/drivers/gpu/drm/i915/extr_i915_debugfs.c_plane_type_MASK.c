
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_plane_type { ____Placeholder_drm_plane_type } drm_plane_type ;






__attribute__((used)) static const char *FUNC_0(enum drm_plane_type VAR_0)
{
 switch (VAR_0) {
 case 129:
  return "OVL";
 case 128:
  return "PRI";
 case 130:
  return "CUR";




 }

 return "unknown";
}
