
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;


 int VAR_0 ;
 int FUNC_0 (struct snmp_value*,char*) ;
 int FUNC_1 (struct snmp_value*,char*) ;
 int FUNC_2 (struct snmp_value*,char*) ;
 int FUNC_3 (struct snmp_value*,char*) ;
 int FUNC_4 (struct snmp_value*,char*) ;
 int FUNC_5 (struct snmp_value*,char*) ;
 int FUNC_6 (struct snmp_value*,char*) ;
 int FUNC_7 (int ,struct snmp_value*,char*) ;

__attribute__((used)) static int32_t
FUNC_8(struct snmp_value *VAR_1, enum snmp_syntax VAR_2, char *VAR_3)
{
 switch (VAR_2) {
  case 132:
   return (FUNC_2(VAR_1, VAR_3));
  case 131:
   return (FUNC_3(VAR_1, VAR_3));
  case 135:
   return (FUNC_0(VAR_1, VAR_3));
  case 133:
   return (FUNC_1(VAR_1, VAR_3));
  case 128:
   return (FUNC_5(VAR_1, VAR_3));
  case 134:
   return (FUNC_6(VAR_1, VAR_3));
  case 130:
   return (FUNC_7(VAR_0, VAR_1, VAR_3));
  case 129:
   return (FUNC_4(VAR_1, VAR_3));
  default:

   break;
 }

 return (-1);
}
