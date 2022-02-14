
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(u_char *VAR_0, int VAR_1, const char *VAR_2)
{
 static const char *VAR_3[] =
 {"512b", "2Kb", "8Kb", "32Kb", "128Kb", "512Kb", "2Mb", "reserved"};
 static const char *VAR_4[] =
 {"No speed", "250nS", "200nS", "150nS",
 "100nS", "Reserved", "Reserved"};
 static const char *VAR_5[] =
 {"No device", "Mask ROM", "OTPROM", "UV EPROM",
  "EEPROM", "FLASH EEPROM", "SRAM", "DRAM",
  "Reserved", "Reserved", "Reserved", "Reserved",
  "Reserved", "Function specific", "Extended",
 "Reserved"};
 int VAR_6 = 0;

 while (*VAR_0 != 0xFF && VAR_1 > 0) {
  u_char VAR_7;

  VAR_7 = *VAR_0++;
  VAR_1 -= 2;
  if (VAR_6++ == 0)
   FUNC_1("\t%s memory device information:\n", VAR_2);
  FUNC_1("\t\tDevice number %d, type %s, WPS = %s\n",
      VAR_6, VAR_5[VAR_7 >> 4], (VAR_7 & 0x8) ? "ON" : "OFF");
  if ((VAR_7 & 7) == 7) {
   VAR_1--;
   if (*VAR_0) {
    FUNC_1("\t\t");
    FUNC_0(*VAR_0, 0);
    while (*VAR_0 & 0x80) {
     VAR_0++;
     VAR_1--;
    }
   }
   VAR_0++;
  } else
   FUNC_1("\t\tSpeed = %s", VAR_4[VAR_7 & 7]);
  FUNC_1(", Memory block size = %s, %d units\n",
      VAR_3[*VAR_0 & 7], (*VAR_0 >> 3) + 1);
  VAR_0++;
 }
}
