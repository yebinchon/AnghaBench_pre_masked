
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int dummy; } ;
struct bridge_if {int dummy; } ;


 int * FUNC_0 (struct bridge_if*,struct snmp_value*) ;
 struct bridge_if* FUNC_1 () ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *,struct snmp_value*,...) ;

__attribute__((used)) static void
FUNC_3(struct bridge_if *VAR_2)
{
 struct snmp_value VAR_3;

 if (FUNC_1() == VAR_2)
  FUNC_2(&VAR_0,
      (struct snmp_value *) ((void*)0));

 if (FUNC_0(VAR_2, &VAR_3) == ((void*)0))
  return;

 FUNC_2(&VAR_1,
     &VAR_3, (struct snmp_value *) ((void*)0));
}
