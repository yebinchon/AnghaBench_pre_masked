
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
const char *
FUNC_0(uint8_t VAR_0)
{
 ;
 switch (VAR_0) {
 case 130:
  return ("LOW (1.5Mbps)");
 case 132:
  return ("FULL (12Mbps)");
 case 131:
  return ("HIGH (480Mbps)");
 case 128:
  return ("VARIABLE (52-480Mbps)");
 case 129:
  return ("SUPER (5.0Gbps)");
 default:
  break;
 }
 return ("UNKNOWN ()");
}
