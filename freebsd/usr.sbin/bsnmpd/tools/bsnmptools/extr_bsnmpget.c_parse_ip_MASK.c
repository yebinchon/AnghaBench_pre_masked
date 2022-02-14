
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {scalar_t__* ipaddress; } ;
struct snmp_value {int syntax; TYPE_1__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char**,int) ;

__attribute__((used)) static int32_t
FUNC_1(struct snmp_value * VAR_1, char * VAR_2)
{
 char *VAR_3, *VAR_4;
 int32_t VAR_5;
 uint32_t VAR_6;

 VAR_4 = VAR_2;
 for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
  VAR_6 = FUNC_0(VAR_4, &VAR_3, 10);
  if (VAR_6 > 0xff)
   return (-1);
  if (*VAR_3 != '.' && *VAR_3 != '\0' && VAR_5 != 3)
   break;
  VAR_4 = VAR_3 + 1;
  VAR_1->v.ipaddress[VAR_5] = (uint8_t) VAR_6;
 }
 VAR_1->syntax = VAR_0;

 return (0);
}
