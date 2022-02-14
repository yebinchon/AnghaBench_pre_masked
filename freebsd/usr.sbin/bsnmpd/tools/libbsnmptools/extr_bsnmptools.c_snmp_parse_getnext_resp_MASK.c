
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct snmp_pdu {size_t nbindings; scalar_t__ version; TYPE_1__* bindings; } ;
typedef int int32_t ;
struct TYPE_2__ {scalar_t__ syntax; int var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int *,int *) ;

int32_t
FUNC_1(struct snmp_pdu *VAR_2, struct snmp_pdu *VAR_3)
{
 uint32_t VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->nbindings; VAR_4++) {
  if (FUNC_0(&VAR_3->bindings[VAR_4].var, &VAR_2->bindings[VAR_4].var)
      == 0)
   return (0);

  if (VAR_2->version != VAR_1 && VAR_2->bindings[VAR_4].syntax ==
      VAR_0)
   return (0);
 }

 return (1);
}
