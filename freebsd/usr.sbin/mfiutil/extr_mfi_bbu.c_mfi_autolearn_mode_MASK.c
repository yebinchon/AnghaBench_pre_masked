
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*,size_t,char*,...) ;

void
FUNC_1(uint8_t VAR_0, char *VAR_1, size_t VAR_2)
{

 switch (VAR_0) {
 case 0:
  FUNC_0(VAR_1, VAR_2, "enabled");
  break;
 case 1:
  FUNC_0(VAR_1, VAR_2, "disabled");
  break;
 case 2:
  FUNC_0(VAR_1, VAR_2, "warn via event");
  break;
 default:
  FUNC_0(VAR_1, VAR_2, "mode 0x%02x", VAR_0);
  break;
 }
}
