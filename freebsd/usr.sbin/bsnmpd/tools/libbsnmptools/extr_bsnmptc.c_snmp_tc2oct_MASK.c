
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_value {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {int (* tc2oct ) (struct snmp_value*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct snmp_value*,char*) ;
 TYPE_1__* VAR_1 ;

int32_t
FUNC_1(enum snmp_tc VAR_2, struct snmp_value *VAR_3, char *VAR_4)
{
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return (VAR_1[VAR_2].tc2oct(VAR_3, VAR_4));
}
