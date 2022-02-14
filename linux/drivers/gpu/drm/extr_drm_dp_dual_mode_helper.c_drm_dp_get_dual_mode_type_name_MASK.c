
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_dp_dual_mode_type { ____Placeholder_drm_dp_dual_mode_type } drm_dp_dual_mode_type ;
 int VAR_0 ;
 int FUNC_0 (int) ;

const char *FUNC_1(enum drm_dp_dual_mode_type VAR_1)
{
 switch (VAR_1) {
 case 132:
  return "none";
 case 131:
  return "type 1 DVI";
 case 130:
  return "type 1 HDMI";
 case 129:
  return "type 2 DVI";
 case 128:
  return "type 2 HDMI";
 case 133:
  return "lspcon";
 default:
  FUNC_0(VAR_1 != VAR_0);
  return "unknown";
 }
}
