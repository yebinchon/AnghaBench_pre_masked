
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;


 int FUNC_0 (char*,...) ;

__attribute__((used)) static int
FUNC_1(u_char *VAR_0)
{
 int VAR_1 = 1, VAR_2;
 u_char VAR_3;
 const char **VAR_4;
 static const char *VAR_5[] =
 {"Nominal operating supply voltage",
  "Minimum operating supply voltage",
  "Maximum operating supply voltage",
  "Continuous supply current",
  "Max current average over 1 second",
  "Max current average over 10 ms",
  "Power down supply current",
  "Reserved"
 };
 static const char *VAR_6[] =
 {"10uV", "100uV", "1mV", "10mV", "100mV", "1V", "10V", "100V"};
 static const char *VAR_7[] =
 {"10nA", "1uA", "10uA", "100uA", "1mA", "10mA", "100mA", "1A"};
 static const char *VAR_8[] =
 {"1", "1.2", "1.3", "1.5", "2", "2.5", "3", "3.5", "4", "4.5",
 "5", "5.5", "6", "7", "8", "9"};

 VAR_3 = *VAR_0++;
 VAR_4 = VAR_6;
 for (VAR_2 = 0; VAR_2 < 8; VAR_2++)
  if (VAR_3 & (1 << VAR_2)) {
   VAR_1++;
   if (VAR_2 >= 3)
    VAR_4 = VAR_7;
   FUNC_0("\t\t%s: ", VAR_5[VAR_2]);
   FUNC_0("%s x %s",
       VAR_8[(*VAR_0 >> 3) & 0xF],
       VAR_4[*VAR_0 & 7]);
   while (*VAR_0 & 0x80) {
    VAR_1++;
    VAR_0++;
    FUNC_0(", ext = 0x%x", *VAR_0);
   }
   FUNC_0("\n");
   VAR_0++;
  }
 return (VAR_1);
}
