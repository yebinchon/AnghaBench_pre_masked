
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int U8 ;
 int FUNC_0 (char*,char*,int) ;

const char *
FUNC_1(U8 VAR_0)
{
 static char VAR_1[16];

 switch (VAR_0) {
 case 132:
  return ("RAID-0");
 case 134:
  return ("RAID-1");
 case 133:
  return ("RAID-1E");
 case 130:
  return ("RAID-5");
 case 128:
  return ("RAID-6");
 case 131:
  return ("RAID-10");
 case 129:
  return ("RAID-50");
 default:
  FUNC_0(VAR_1, "LVL 0x%02x", VAR_0);
  return (VAR_1);
 }
}
