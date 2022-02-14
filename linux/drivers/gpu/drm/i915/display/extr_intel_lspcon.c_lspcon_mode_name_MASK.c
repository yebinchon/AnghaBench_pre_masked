
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum drm_lspcon_mode { ____Placeholder_drm_lspcon_mode } drm_lspcon_mode ;





 int FUNC_0 (int) ;

__attribute__((used)) static const char *FUNC_1(enum drm_lspcon_mode VAR_0)
{
 switch (VAR_0) {
 case 128:
  return "PCON";
 case 129:
  return "LS";
 case 130:
  return "INVALID";
 default:
  FUNC_0(VAR_0);
  return "INVALID";
 }
}
