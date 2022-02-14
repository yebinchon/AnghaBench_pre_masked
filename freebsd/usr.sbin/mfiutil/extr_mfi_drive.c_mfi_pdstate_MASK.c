
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum mfi_pd_state { ____Placeholder_mfi_pd_state } mfi_pd_state ;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(enum mfi_pd_state VAR_0)
{
 static char VAR_1[16];

 switch (VAR_0) {
 case 128:
  return ("UNCONFIGURED GOOD");
 case 129:
  return ("UNCONFIGURED BAD");
 case 134:
  return ("HOT SPARE");
 case 133:
  return ("OFFLINE");
 case 135:
  return ("FAILED");
 case 131:
  return ("REBUILD");
 case 132:
  return ("ONLINE");
 case 136:
  return ("COPYBACK");
 case 130:
  return ("JBOD");
 default:
  FUNC_0(VAR_1, "PSTATE 0x%04x", VAR_0);
  return (VAR_1);
 }
}
