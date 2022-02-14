
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static char *
FUNC_0(uint32_t VAR_0, int *VAR_1)
{
 char *VAR_2;

 *VAR_1 = 0;
 switch (VAR_0 & 0xf) {
 case 0x01:
  VAR_2 = "Direct Attached SES-2";
  *VAR_1 = 1;
  break;
 case 0x02:
  VAR_2 = "Direct Attached SGPIO";
  break;
 case 0x03:
  VAR_2 = "Expander SGPIO";
  break;
 case 0x04:
  VAR_2 = "External SES-2";
  *VAR_1 = 1;
  break;
 case 0x05:
  VAR_2 = "Direct Attached GPIO";
  break;
 case 0x0:
 default:
  return ("Unknown");
 }

 return (VAR_2);
}
