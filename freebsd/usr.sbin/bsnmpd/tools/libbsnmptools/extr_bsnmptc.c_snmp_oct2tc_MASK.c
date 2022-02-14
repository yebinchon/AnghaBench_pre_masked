
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;
struct TYPE_2__ {scalar_t__ len; int * (* oct2tc ) (int,char*,char*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int,char*,char*) ;
 int FUNC_5 (int ,char*,int ) ;
 TYPE_1__* VAR_3 ;

char *
FUNC_6(enum snmp_tc VAR_4, uint32_t VAR_5, char *VAR_6)
{
 uint32_t VAR_7;
 char * VAR_8;

 if (VAR_4 > VAR_1)
  VAR_4 = VAR_1;

 if (VAR_3[VAR_4].len > 0)
  VAR_7 = VAR_3[VAR_4].len;
 else
  VAR_7 = 2 * VAR_5 + 3;

 if ((VAR_8 = FUNC_1(VAR_7)) == ((void*)0) ) {
  FUNC_5(VAR_0, "malloc failed - %s", FUNC_3(VAR_2));
  return (((void*)0));
 }

 FUNC_2(VAR_8, 0, VAR_7);
 if (VAR_3[VAR_4].oct2tc(VAR_5, VAR_6, VAR_8) == ((void*)0)) {
  FUNC_0(VAR_8);
  return (((void*)0));
 }

 return (VAR_8);
}
