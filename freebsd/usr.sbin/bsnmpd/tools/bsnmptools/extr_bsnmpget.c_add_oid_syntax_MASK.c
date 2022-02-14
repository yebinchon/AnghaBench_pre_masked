
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int oid; } ;
struct snmp_value {int syntax; TYPE_1__ v; } ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int32_t
FUNC_1(struct snmp_value *VAR_1, struct snmp_value *VAR_2)
{
 FUNC_0(&(VAR_1->v.oid), &(VAR_2->v.oid));
 VAR_1->syntax = VAR_0;
 return (0);
}
