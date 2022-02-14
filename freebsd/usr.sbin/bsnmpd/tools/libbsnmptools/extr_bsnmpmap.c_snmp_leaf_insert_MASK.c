
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct snmp_oid2str {int syntax; } ;
typedef int int32_t ;
 int FUNC_0 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_1 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_2 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_3 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_4 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_5 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_6 (struct snmp_toolinfo*,struct snmp_oid2str*) ;
 int FUNC_7 (struct snmp_toolinfo*,struct snmp_oid2str*) ;

int32_t
FUNC_8(struct snmp_toolinfo *VAR_0, struct snmp_oid2str *VAR_1)
{
 switch (VAR_1->syntax) {
  case 132:
   return (FUNC_3(VAR_0, VAR_1));
  case 130:
   return (FUNC_5(VAR_0, VAR_1));
  case 129:
   return (FUNC_6(VAR_0, VAR_1));
  case 131:
   return (FUNC_4(VAR_0, VAR_1));
  case 135:
   return (FUNC_1(VAR_0, VAR_1));
  case 133:
   return (FUNC_2(VAR_0, VAR_1));
  case 128:
   return (FUNC_7(VAR_0, VAR_1));
  case 134:
   return (FUNC_0(VAR_0, VAR_1));
  default:
   break;
 }

 return (-1);
}
