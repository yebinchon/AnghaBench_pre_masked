
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct snmp_pdu {size_t nbindings; TYPE_1__* bindings; } ;
struct TYPE_4__ {int var; } ;
struct snmp_object {scalar_t__ error; TYPE_2__ val; } ;
typedef size_t int32_t ;
struct TYPE_3__ {int var; } ;


 int FUNC_0 (int *,int *) ;

__attribute__((used)) static int32_t
FUNC_1(struct snmp_pdu *VAR_0, struct snmp_object *VAR_1)
{
 if (VAR_1->error > 0)
  return (0);

 FUNC_0(&(VAR_0->bindings[VAR_0->nbindings].var), &(VAR_1->val.var));
 VAR_0->nbindings++;

 return (VAR_0->nbindings);
}
