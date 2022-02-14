
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct snmp_pdu {size_t nbindings; TYPE_1__* bindings; } ;
typedef int int32_t ;
struct TYPE_4__ {scalar_t__ version; } ;
struct TYPE_3__ {scalar_t__ syntax; int var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (char*) ;

int32_t
FUNC_2(struct snmp_pdu *VAR_4, struct snmp_pdu *VAR_5)
{
 uint32_t VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_5->nbindings; VAR_6++) {
  if (FUNC_0(&VAR_5->bindings[VAR_6].var,
      &VAR_4->bindings[VAR_6].var) != 0) {
   FUNC_1("Bad OID in response");
   return (-1);
  }

  if (VAR_3.version != VAR_2 && (VAR_4->bindings[VAR_6].syntax
      == VAR_1 || VAR_4->bindings[VAR_6].syntax ==
      VAR_0))
   return (0);
 }

 return (1);
}
