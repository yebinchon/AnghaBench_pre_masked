
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (struct snmp_toolinfo*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_4(struct snmp_toolinfo *VAR_3, char *VAR_4)
{
 FUNC_1(VAR_4 != ((void*)0));

 if (FUNC_2(VAR_4, "getbulk") == 0)
  FUNC_0(VAR_3, VAR_1);
 else if (FUNC_2(VAR_4, "getnext") == 0)
  FUNC_0(VAR_3, VAR_2);
 else if (FUNC_2(VAR_4, "get") == 0)
  FUNC_0(VAR_3, VAR_0);
 else {
  FUNC_3("PDU type '%s' not supported.", VAR_4);
  return (-1);
 }

 return (2);
}
