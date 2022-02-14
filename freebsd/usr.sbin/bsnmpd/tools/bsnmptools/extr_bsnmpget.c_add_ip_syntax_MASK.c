
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * ipaddress; } ;
struct snmp_value {TYPE_1__ v; int syntax; } ;
typedef int int8_t ;
typedef int int32_t ;


 int VAR_0 ;

__attribute__((used)) static int32_t
FUNC_0(struct snmp_value *VAR_1, struct snmp_value *VAR_2)
{
 int8_t VAR_3;

 VAR_1->syntax = VAR_0;
 for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
  VAR_1->v.ipaddress[VAR_3] = VAR_2->v.ipaddress[VAR_3];

 return (1);
}
