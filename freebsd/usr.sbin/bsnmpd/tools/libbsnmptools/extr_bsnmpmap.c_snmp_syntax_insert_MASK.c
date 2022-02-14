
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_idxlist {int dummy; } ;
struct index {int syntax; int tc; struct enum_pairs* snmp_enum; } ;
struct enum_pairs {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
typedef enum snmp_syntax { ____Placeholder_snmp_syntax } snmp_syntax ;


 int VAR_0 ;
 struct index* FUNC_0 (int,int) ;
 int VAR_1 ;
 int FUNC_1 (struct index*) ;
 scalar_t__ FUNC_2 (struct snmp_idxlist*,struct index*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,int ) ;

int32_t
FUNC_5(struct snmp_idxlist *VAR_2, struct enum_pairs *VAR_3,
    enum snmp_syntax VAR_4, enum snmp_tc VAR_5)
{
 struct index *VAR_6;

 if ((VAR_6 = FUNC_0(1, sizeof(struct index))) == ((void*)0)) {
  FUNC_4(VAR_0, "malloc() failed: %s", FUNC_3(VAR_1));
  return (-1);
 }

 if (FUNC_2(VAR_2, VAR_6) < 0) {
  FUNC_1(VAR_6);
  return (-1);
 }

 VAR_6->syntax = VAR_4;
 VAR_6->snmp_enum = VAR_3;
 VAR_6->tc = VAR_5;

 return (1);
}
