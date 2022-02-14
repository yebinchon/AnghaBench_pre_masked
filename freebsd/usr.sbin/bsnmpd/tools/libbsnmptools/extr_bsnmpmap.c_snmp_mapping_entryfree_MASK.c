
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_oid2str {scalar_t__ tc; int snmp_enum; struct snmp_oid2str* string; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct snmp_oid2str*) ;

void
FUNC_2(struct snmp_oid2str *VAR_1)
{
 if (VAR_1->string)
  FUNC_1(VAR_1->string);

 if (VAR_1->tc == VAR_0)
  FUNC_0(VAR_1->snmp_enum);

 FUNC_1(VAR_1);
}
