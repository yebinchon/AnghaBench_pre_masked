
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_mappings {int dummy; } ;


 int VAR_0 ;
 struct snmp_mappings* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

struct snmp_mappings *
FUNC_3(void)
{
 struct snmp_mappings *VAR_2;

 if ((VAR_2 = FUNC_0(1, sizeof(struct snmp_mappings))) == ((void*)0)) {
  FUNC_2(VAR_0, "malloc() failed: %s", FUNC_1(VAR_1));
  return (((void*)0));
 }

 return (VAR_2);
}
