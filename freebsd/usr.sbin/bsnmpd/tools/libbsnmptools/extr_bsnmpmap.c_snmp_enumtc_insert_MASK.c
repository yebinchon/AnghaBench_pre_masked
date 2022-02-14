
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int snmp_tclist; int * mappings; } ;
struct enum_type {int dummy; } ;


 int FUNC_0 (int *,struct enum_type*,int ) ;
 int VAR_0 ;

void
FUNC_1(struct snmp_toolinfo *VAR_1, struct enum_type *VAR_2)
{
 if (VAR_1 == ((void*)0) || VAR_1->mappings == ((void*)0))
  return;

 FUNC_0(&VAR_1->snmp_tclist, VAR_2, VAR_0);
}
