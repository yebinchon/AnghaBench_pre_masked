
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int snmp_enumlist; } ;
struct snmp_object {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int *,struct snmp_object*,char*) ;

int32_t
FUNC_1(struct snmp_toolinfo *VAR_0, struct snmp_object *VAR_1,
    char *VAR_2)
{
 if (VAR_0 == ((void*)0) || VAR_1 == ((void*)0))
  return (-1);

 return (FUNC_0(&VAR_0->snmp_enumlist, VAR_1, VAR_2));
}
