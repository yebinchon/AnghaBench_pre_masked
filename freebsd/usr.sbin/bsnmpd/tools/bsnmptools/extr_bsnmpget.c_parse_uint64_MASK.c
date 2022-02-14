
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int counter64; } ;
struct snmp_value {TYPE_1__ v; int syntax; } ;
typedef int int32_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,char**,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_2(struct snmp_value *VAR_2, char *VAR_3)
{
 char *VAR_4;
 int32_t VAR_5;
 uint64_t VAR_6;

 VAR_5 = VAR_1;
 VAR_1 = 0;

 VAR_6 = FUNC_0(VAR_3, &VAR_4, 10);

 if (VAR_1 != 0) {
  FUNC_1("Value %s not supported", VAR_3);
  VAR_1 = VAR_5;
  return (-1);
 }

 VAR_2->syntax = VAR_0;
 VAR_2->v.counter64 = VAR_6;
 VAR_1 = VAR_5;

 return (0);
}
