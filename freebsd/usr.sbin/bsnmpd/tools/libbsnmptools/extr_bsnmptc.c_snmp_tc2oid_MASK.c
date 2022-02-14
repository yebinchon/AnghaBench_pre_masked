
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asn_oid {int dummy; } ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {char* (* tc2oid ) (char*,struct asn_oid*) ;} ;


 int VAR_0 ;
 char* FUNC_0 (char*,struct asn_oid*) ;
 TYPE_1__* VAR_1 ;

char *
FUNC_1(enum snmp_tc VAR_2, char *VAR_3, struct asn_oid *VAR_4)
{
 if (VAR_2 > VAR_0)
  VAR_2 = VAR_0;

 return (VAR_1[VAR_2].tc2oid(VAR_3, VAR_4));
}
