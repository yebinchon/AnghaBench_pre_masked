
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(uint8_t VAR_0, uint8_t VAR_1)
{
 static char VAR_2[16];

 switch (VAR_0) {
 case 135:
  return ("RAID-0");
 case 134:
  if (VAR_1 != 0)
   return ("RAID-10");
  else
   return ("RAID-1");
 case 133:
  return ("RAID-1E");
 case 132:
  return ("RAID-3");
 case 131:
  if (VAR_1 != 0)
   return ("RAID-50");
  else
   return ("RAID-5");
 case 130:
  return ("RAID-5E");
 case 129:
  return ("RAID-5EE");
 case 128:
  if (VAR_1 != 0)
   return ("RAID-60");
  else
   return ("RAID-6");
 case 136:
  return ("JBOD");
 case 137:
  return ("CONCAT");
 default:
  FUNC_0(VAR_2, "LVL 0x%02x", VAR_0);
  return (VAR_2);
 }
}
