
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int * mappings; int snmp_tclist; int snmp_tablelist; int snmp_enumlist; int snmp_cnt64list; int snmp_gaugelist; int snmp_cntlist; int snmp_ticklist; int snmp_iplist; int snmp_oidlist; int snmp_octlist; int snmp_intlist; int snmp_nodelist; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct snmp_toolinfo *VAR_0)
{
 if (VAR_0 == ((void*)0) || VAR_0->mappings == ((void*)0))
  return (-1);

 FUNC_2(&VAR_0->snmp_nodelist);
 FUNC_2(&VAR_0->snmp_intlist);
 FUNC_2(&VAR_0->snmp_octlist);
 FUNC_2(&VAR_0->snmp_oidlist);
 FUNC_2(&VAR_0->snmp_iplist);
 FUNC_2(&VAR_0->snmp_ticklist);
 FUNC_2(&VAR_0->snmp_cntlist);
 FUNC_2(&VAR_0->snmp_gaugelist);
 FUNC_2(&VAR_0->snmp_cnt64list);
 FUNC_2(&VAR_0->snmp_enumlist);
 FUNC_3(&VAR_0->snmp_tablelist);
 FUNC_1(&VAR_0->snmp_tclist);
 FUNC_0(VAR_0->mappings);

 return (0);
}
