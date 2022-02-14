
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int dummy; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct snmp_toolinfo*,char*,int *,int *) ;

int32_t
FUNC_2(struct snmp_toolinfo *VAR_1, char *VAR_2)
{
 FUNC_0(VAR_2 != ((void*)0));

 if (FUNC_1(VAR_1, VAR_2, ((void*)0), &VAR_0) < 0)
  return (-1);

 return (2);
}
