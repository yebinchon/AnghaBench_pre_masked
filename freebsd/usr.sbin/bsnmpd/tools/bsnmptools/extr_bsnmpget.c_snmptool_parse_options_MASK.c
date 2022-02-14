
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;





 int VAR_0 ;
 int FUNC_0 (int,char**,char const*) ;
 int VAR_1 ;
 int FUNC_1 (struct snmp_toolinfo*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct snmp_toolinfo*,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct snmp_toolinfo*) ;
 int FUNC_6 (struct snmp_toolinfo*) ;
 int FUNC_7 (struct snmp_toolinfo*,int ) ;
 int FUNC_8 (struct snmp_toolinfo*,int ) ;
 int FUNC_9 (struct snmp_toolinfo*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (struct snmp_toolinfo*,int ) ;
 int FUNC_12 (struct snmp_toolinfo*,int ) ;
 int FUNC_13 (struct snmp_toolinfo*) ;
 int FUNC_14 (struct snmp_toolinfo*,int ) ;
 int FUNC_15 (struct snmp_toolinfo*,int ) ;
 int FUNC_16 (struct snmp_toolinfo*,int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (struct snmp_toolinfo*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (struct snmp_toolinfo*,int ) ;
 int FUNC_22 (int ) ;
 int VAR_2 ;
 int FUNC_23 () ;

__attribute__((used)) static int32_t
FUNC_24(struct snmp_toolinfo *VAR_3, int VAR_4, char **VAR_5)
{
 int32_t VAR_6, VAR_7 = 0;
 int VAR_8;
 const char *VAR_9;

 switch (VAR_2) {
  case 128:
   VAR_9 = "dhnKA:b:C:I:i:l:M:N:o:P:p:r:s:t:U:v:";
   break;
  case 130:
   VAR_9 = "aDdehnKA:b:C:I:i:l:M:N:o:P:p:r:s:t:U:v:";
   break;
  case 129:
   VAR_9 = "adehnKA:b:C:I:i:l:o:P:r:s:t:U:v:";
   break;
  default:
   return (-1);
 }

 while ((VAR_8 = FUNC_0(VAR_4, VAR_5, VAR_9)) != VAR_0) {
  switch (VAR_8) {
  case 'A':
   VAR_6 = FUNC_1(VAR_3, VAR_1);
   break;
  case 'a':
   VAR_6 = FUNC_19(VAR_3);
   break;
  case 'b':
   VAR_6 = FUNC_2(VAR_1);
   break;
  case 'D':
   VAR_6 = FUNC_5(VAR_3);
   break;
  case 'd':
   VAR_6 = FUNC_4();
   break;
  case 'e':
   VAR_6 = FUNC_6(VAR_3);
   break;
  case 'h':
   FUNC_23();
   return (-2);
  case 'C':
   VAR_6 = FUNC_3(VAR_3, VAR_1);
   break;
  case 'I':
   VAR_6 = FUNC_8(VAR_3, VAR_1);
   break;
  case 'i':
   VAR_6 = FUNC_7(VAR_3, VAR_1);
   break;
  case 'K':
   VAR_6 = FUNC_9(VAR_3);
   break;
  case 'l':
   VAR_6 = FUNC_10(VAR_1);
   break;
  case 'M':
   VAR_6 = FUNC_11(VAR_3, VAR_1);
   break;
  case 'N':
   VAR_6 = FUNC_12(VAR_3, VAR_1);
   break;
  case 'n':
   VAR_6 = FUNC_13(VAR_3);
   break;
  case 'o':
   VAR_6 = FUNC_14(VAR_3, VAR_1);
   break;
  case 'P':
   VAR_6 = FUNC_16(VAR_3, VAR_1);
   break;
  case 'p':
   VAR_6 = FUNC_15(VAR_3, VAR_1);
   break;
  case 'r':
   VAR_6 = FUNC_17(VAR_1);
   break;
  case 's':
   VAR_6 = FUNC_18(VAR_1);
   break;
  case 't':
   VAR_6 = FUNC_20(VAR_1);
   break;
  case 'U':
   VAR_6 = FUNC_21(VAR_3, VAR_1);
   break;
  case 'v':
   VAR_6 = FUNC_22(VAR_1);
   break;
  case '?':
  default:
   FUNC_23();
   return (-1);
  }
  if (VAR_6 < 0)
   return (-1);
     VAR_7 += VAR_6;
 }

 return (VAR_7);
}
