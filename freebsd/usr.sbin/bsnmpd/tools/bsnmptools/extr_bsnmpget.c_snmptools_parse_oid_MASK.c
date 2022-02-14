
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_toolinfo {int dummy; } ;
struct TYPE_2__ {int var; } ;
struct snmp_object {TYPE_1__ val; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*) ;
 scalar_t__ FUNC_1 (char*,int *) ;
 int * FUNC_2 (struct snmp_toolinfo*,struct snmp_object*,char*) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_toolinfo *VAR_0,
    struct snmp_object *VAR_1, char *VAR_2)
{
 if (VAR_2 == ((void*)0))
  return (-1);

 if (FUNC_0(VAR_0)) {
  if (FUNC_1(VAR_2, &(VAR_1->val.var)) < 0)
   return (-1);
 } else {
  if (FUNC_2(VAR_0, VAR_1, VAR_2) == ((void*)0) &&
      FUNC_1(VAR_2, &(VAR_1->val.var)) < 0)
   return (-1);
 }

 return (1);
}
