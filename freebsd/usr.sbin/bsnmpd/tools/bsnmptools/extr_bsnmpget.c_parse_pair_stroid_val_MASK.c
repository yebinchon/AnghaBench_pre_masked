
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
struct snmp_object {int dummy; } ;
typedef int int32_t ;


 scalar_t__ FUNC_0 (struct snmp_toolinfo*,struct snmp_object*,char*) ;
 char* FUNC_1 (struct snmp_toolinfo*,struct snmp_object*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_toolinfo *VAR_0,
    struct snmp_object *VAR_1, char *VAR_2)
{
 char *VAR_3;

 if ((VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_2)) == ((void*)0))
  return (-1);

 if (*VAR_3 != '=') {
  FUNC_2("Value to set expected after OID");
  return (-1);
 }

 if (FUNC_0(VAR_0, VAR_1, VAR_3 + 1) < 0)
  return (-1);

 return (1);
}
