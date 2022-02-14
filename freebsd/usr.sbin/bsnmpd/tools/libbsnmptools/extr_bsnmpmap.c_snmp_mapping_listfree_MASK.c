
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_oid2str {scalar_t__ tc; int snmp_enum; struct snmp_oid2str* string; } ;
struct snmp_mapping {int dummy; } ;


 struct snmp_oid2str* FUNC_0 (struct snmp_mapping*) ;
 int FUNC_1 (struct snmp_mapping*) ;
 int FUNC_2 (struct snmp_mapping*,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct snmp_oid2str*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(struct snmp_mapping *VAR_2)
{
 struct snmp_oid2str *VAR_3;

 while ((VAR_3 = FUNC_0(VAR_2)) != ((void*)0)) {
  FUNC_2(VAR_2, VAR_1);

  if (VAR_3->string)
   FUNC_4(VAR_3->string);

  if (VAR_3->tc == VAR_0)
   FUNC_3(VAR_3->snmp_enum);
  FUNC_4(VAR_3);
 }

 FUNC_1(VAR_2);
}
