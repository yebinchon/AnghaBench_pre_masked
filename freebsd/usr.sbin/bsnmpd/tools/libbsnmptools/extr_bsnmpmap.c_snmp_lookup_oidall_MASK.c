
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int snmp_tablelist; int snmp_nodelist; int snmp_cnt64list; int snmp_gaugelist; int snmp_cntlist; int snmp_ticklist; int snmp_iplist; int snmp_oidlist; int snmp_octlist; int snmp_intlist; } ;
struct snmp_object {int dummy; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (int *,struct snmp_object*,char*) ;
 scalar_t__ FUNC_1 (struct snmp_toolinfo*,int *,struct snmp_object*,char*) ;

int32_t
FUNC_2(struct snmp_toolinfo *VAR_0, struct snmp_object *VAR_1,
    char *VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0) || VAR_2 == ((void*)0))
  return (-1);

 if (FUNC_0(&VAR_0->snmp_intlist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_octlist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_oidlist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_iplist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_ticklist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_cntlist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_gaugelist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_cnt64list, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_0(&VAR_0->snmp_nodelist, VAR_1, VAR_2) > 0)
  return (1);
 if (FUNC_1(VAR_0, &VAR_0->snmp_tablelist,
     VAR_1, VAR_2) > 0)
  return (1);

 return (-1);
}
