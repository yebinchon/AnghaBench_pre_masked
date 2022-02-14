
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;
typedef enum snmp_tc { ____Placeholder_snmp_tc } snmp_tc ;


 int VAR_0 ;
 int FUNC_0 (struct snmp_toolinfo*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_toolinfo *VAR_2, int32_t *VAR_3,
    enum snmp_tc *VAR_4)
{
 if ((*VAR_3 = FUNC_0(VAR_2)) != VAR_0) {
  FUNC_2("subtype expected after '|'");
  return (-1);
 }

 *VAR_4 = FUNC_1(VAR_1);
 *VAR_3 = FUNC_0(VAR_2);

 return (1);
}
