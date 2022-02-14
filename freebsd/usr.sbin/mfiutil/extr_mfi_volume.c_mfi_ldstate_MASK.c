
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mfi_ld_state { ____Placeholder_mfi_ld_state } mfi_ld_state ;






 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(enum mfi_ld_state VAR_0)
{
 static char VAR_1[16];

 switch (VAR_0) {
 case 130:
  return ("OFFLINE");
 case 128:
  return ("PARTIALLY DEGRADED");
 case 131:
  return ("DEGRADED");
 case 129:
  return ("OPTIMAL");
 default:
  FUNC_0(VAR_1, "LSTATE 0x%02x", VAR_0);
  return (VAR_1);
 }
}
