
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_enum_tc {int dummy; } ;
struct enum_type {int snmp_enum; struct enum_type* name; } ;


 struct enum_type* FUNC_0 (struct snmp_enum_tc*) ;
 int FUNC_1 (struct snmp_enum_tc*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct enum_type*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct snmp_enum_tc *VAR_1)
{
 struct enum_type *VAR_2;

 while ((VAR_2 = FUNC_0(VAR_1)) != ((void*)0)) {
  FUNC_1(VAR_1, VAR_0);

  if (VAR_2->name)
   FUNC_3(VAR_2->name);
  FUNC_2(VAR_2->snmp_enum);
  FUNC_3(VAR_2);
 }
}
