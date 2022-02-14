
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct enum_pairs {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct enum_pairs*,int ,int ) ;
 int FUNC_1 (struct snmp_toolinfo*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_toolinfo *VAR_4, int32_t *VAR_5,
    struct enum_pairs *VAR_6)
{
 while ((*VAR_5 = FUNC_1(VAR_4)) == VAR_1) {
  if (FUNC_0(VAR_6, VAR_3, VAR_2) < 0)
   return (-1);
  if ((*VAR_5 = FUNC_1(VAR_4)) != VAR_0)
   break;
 }

 if (*VAR_5 != ')') {
  FUNC_2("')' at end of enums");
  return (-1);
 }

 return (1);
}
