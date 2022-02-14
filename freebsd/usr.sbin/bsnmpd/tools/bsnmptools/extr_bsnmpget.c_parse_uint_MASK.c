
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_2__ {int uint32; } ;
struct snmp_value {TYPE_1__ v; } ;
typedef int int32_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,char**,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_2(struct snmp_value *VAR_1, char *VAR_2)
{
 char *VAR_3;
 uint32_t VAR_4 = 0;
 int32_t VAR_5;

 VAR_5 = VAR_0;
 VAR_0 = 0;

 VAR_4 = FUNC_0(VAR_2, &VAR_3, 10);

 if (VAR_0 != 0) {
  FUNC_1("Value %s not supported", VAR_2);
  VAR_0 = VAR_5;
  return (-1);
 }

 VAR_1->v.uint32 = VAR_4;
 VAR_0 = VAR_5;

 return (0);
}
