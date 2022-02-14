
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_value {int syntax; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct snmp_value*,char*) ;

__attribute__((used)) static int32_t
FUNC_1(struct snmp_value *VAR_1, char *VAR_2)
{
 if (FUNC_0(VAR_1, VAR_2) < 0)
  return (-1);

 VAR_1->syntax = VAR_0;
 return (0);
}
