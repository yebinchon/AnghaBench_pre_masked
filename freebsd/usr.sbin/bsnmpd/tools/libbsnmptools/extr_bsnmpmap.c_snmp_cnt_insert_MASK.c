
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snmp_toolinfo {int snmp_cntlist; scalar_t__ mappings; } ;
struct snmp_oid2str {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int *,struct snmp_oid2str*) ;

__attribute__((used)) static int32_t
FUNC_1(struct snmp_toolinfo *VAR_0, struct snmp_oid2str *VAR_1)
{
 if (VAR_0 != ((void*)0) && VAR_0->mappings)
  return (FUNC_0(&VAR_0->snmp_cntlist,VAR_1));

 return (-1);
}
