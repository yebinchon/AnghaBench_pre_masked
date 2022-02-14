
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_pdu {size_t nbindings; TYPE_1__* bindings; } ;
struct TYPE_4__ {int var; } ;
struct snmp_object {scalar_t__ error; TYPE_2__ val; } ;
typedef int int32_t ;
struct TYPE_3__ {int var; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (TYPE_1__*,TYPE_2__*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int32_t
FUNC_3(struct snmp_pdu *VAR_1, struct snmp_object *VAR_2)
{
 if (VAR_1->nbindings > VAR_0) {
  FUNC_2("Too many OIDs for one PDU");
  return (-1);
 }

 if (VAR_2->error > 0)
  return (0);

 if (FUNC_1(&(VAR_1->bindings[VAR_1->nbindings]), &(VAR_2->val))
     < 0)
  return (-1);

 FUNC_0(&(VAR_1->bindings[VAR_1->nbindings].var), &(VAR_2->val.var));
 VAR_1->nbindings++;

 return (VAR_1->nbindings);
}
