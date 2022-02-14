
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int rbuf ;
 int FUNC_0 (char*,int,char*,int) ;

const char *
FUNC_1(u_char VAR_0)
{
 static char VAR_1[32];
 switch (VAR_0 & 0xf) {
 case 128:
  return ("Unsupported");
 case 131:
  return ("OK");
 case 136:
  return ("Critical");
 case 134:
  return ("Noncritical");
 case 129:
  return ("Unrecoverable");
 case 132:
  return ("Not Installed");
 case 130:
  return ("Unknown");
 case 133:
  return ("Not Available");
 case 135:
  return ("No Access Allowed");
 default:
  FUNC_0(VAR_1, sizeof(VAR_1), "<Status 0x%x>", VAR_0 & 0xf);
  return (VAR_1);
 }
}
