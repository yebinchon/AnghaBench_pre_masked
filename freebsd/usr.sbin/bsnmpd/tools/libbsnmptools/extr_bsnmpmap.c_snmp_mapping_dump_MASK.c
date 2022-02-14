
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int snmp_tablelist; int snmp_enumlist; int snmp_cnt64list; int snmp_gaugelist; int snmp_cntlist; int snmp_ticklist; int snmp_iplist; int snmp_oidlist; int snmp_octlist; int snmp_intlist; int snmp_nodelist; int * mappings; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void
FUNC_3(struct snmp_toolinfo *VAR_2 )
{
 if (!VAR_0)
  return;

 if (VAR_2 == ((void*)0)) {
  FUNC_0(VAR_1,"No snmptool context!\n");
  return;
 }

 if (VAR_2->mappings == ((void*)0)) {
  FUNC_0(VAR_1,"No mappings!\n");
  return;
 }

 FUNC_0(VAR_1,"snmp_nodelist:\n");
 FUNC_1(&VAR_2->snmp_nodelist);

 FUNC_0(VAR_1,"snmp_intlist:\n");
 FUNC_1(&VAR_2->snmp_intlist);

 FUNC_0(VAR_1,"snmp_octlist:\n");
 FUNC_1(&VAR_2->snmp_octlist);

 FUNC_0(VAR_1,"snmp_oidlist:\n");
 FUNC_1(&VAR_2->snmp_oidlist);

 FUNC_0(VAR_1,"snmp_iplist:\n");
 FUNC_1(&VAR_2->snmp_iplist);

 FUNC_0(VAR_1,"snmp_ticklist:\n");
 FUNC_1(&VAR_2->snmp_ticklist);

 FUNC_0(VAR_1,"snmp_cntlist:\n");
 FUNC_1(&VAR_2->snmp_cntlist);

 FUNC_0(VAR_1,"snmp_gaugelist:\n");
 FUNC_1(&VAR_2->snmp_gaugelist);

 FUNC_0(VAR_1,"snmp_cnt64list:\n");
 FUNC_1(&VAR_2->snmp_cnt64list);

 FUNC_0(VAR_1,"snmp_enumlist:\n");
 FUNC_1(&VAR_2->snmp_enumlist);

 FUNC_0(VAR_1,"snmp_tablelist:\n");
 FUNC_2(&VAR_2->snmp_tablelist);
}
