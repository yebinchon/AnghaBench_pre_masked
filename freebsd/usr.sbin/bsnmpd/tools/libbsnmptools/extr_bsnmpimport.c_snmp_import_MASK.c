
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct snmp_toolinfo*) ;
 int FUNC_1 (struct snmp_toolinfo*,int*) ;

__attribute__((used)) static int32_t
FUNC_2(struct snmp_toolinfo *VAR_0)
{
 int VAR_1;
 int32_t VAR_2;

 VAR_2 = FUNC_0(VAR_0);

 do
  VAR_1 = FUNC_1(VAR_0, &VAR_2);
 while (VAR_1 > 0);

 return (VAR_1);
}
