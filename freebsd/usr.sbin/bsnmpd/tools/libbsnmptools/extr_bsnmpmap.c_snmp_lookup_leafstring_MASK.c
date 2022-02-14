
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int snmp_cnt64list; int snmp_ticklist; int snmp_gaugelist; int snmp_cntlist; int snmp_iplist; int snmp_oidlist; int snmp_octlist; int snmp_intlist; int * mappings; } ;
struct TYPE_2__ {int syntax; } ;
struct snmp_object {TYPE_1__ val; } ;
typedef int int32_t ;
 int FUNC_0 (struct snmp_toolinfo*,struct snmp_object*) ;
 int FUNC_1 (int *,struct snmp_object*) ;
 int FUNC_2 (char*,int) ;

int32_t
FUNC_3(struct snmp_toolinfo *VAR_0, struct snmp_object *VAR_1)
{
 if (VAR_0 == ((void*)0) || VAR_0->mappings == ((void*)0) || VAR_1 == ((void*)0))
  return (-1);

 switch (VAR_1->val.syntax) {
  case 134:
   return (FUNC_1(&VAR_0->snmp_intlist, VAR_1));
  case 130:
   return (FUNC_1(&VAR_0->snmp_octlist, VAR_1));
  case 129:
   return (FUNC_1(&VAR_0->snmp_oidlist, VAR_1));
  case 133:
   return (FUNC_1(&VAR_0->snmp_iplist, VAR_1));
  case 138:
   return (FUNC_1(&VAR_0->snmp_cntlist, VAR_1));
  case 135:
   return (FUNC_1(
       &VAR_0->snmp_gaugelist, VAR_1));
  case 128:
   return (FUNC_1(
       &VAR_0->snmp_ticklist, VAR_1));
  case 137:
   return (FUNC_1(
       &VAR_0->snmp_cnt64list, VAR_1));
  case 131:

  case 132:

  case 136:
   return (FUNC_0(VAR_0, VAR_1));
  default:
   FUNC_2("Unknown syntax - %d", VAR_1->val.syntax);
   break;
 }

 return (-1);
}
