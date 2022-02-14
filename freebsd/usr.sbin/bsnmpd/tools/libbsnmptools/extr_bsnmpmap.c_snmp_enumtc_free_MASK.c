
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enum_type {scalar_t__ snmp_enum; struct enum_type* name; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct enum_type*) ;

void
FUNC_2(struct enum_type *VAR_0)
{
 if (VAR_0->name)
  FUNC_1(VAR_0->name);
 if (VAR_0->snmp_enum)
  FUNC_0(VAR_0->snmp_enum);
 FUNC_1(VAR_0);
}
