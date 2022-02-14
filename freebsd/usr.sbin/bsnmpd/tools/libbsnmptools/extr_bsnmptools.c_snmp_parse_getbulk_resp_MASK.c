
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_pdu {scalar_t__ error_status; scalar_t__ error_index; TYPE_1__* bindings; scalar_t__ nbindings; } ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ syntax; int var; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (char*) ;

int32_t
FUNC_2(struct snmp_pdu *VAR_1, struct snmp_pdu *VAR_2)
{
 int32_t VAR_3, VAR_4, VAR_5, VAR_6;

 if (VAR_2->error_status > (int32_t) VAR_1->nbindings) {
  FUNC_1("Bad number of bindings in response");
  return (-1);
 }

 for (VAR_3 = 0; VAR_3 < VAR_2->error_status; VAR_3++) {
  if (FUNC_0(&VAR_2->bindings[VAR_3].var,
      &VAR_1->bindings[VAR_3].var) == 0)
   return (0);
  if (VAR_1->bindings[VAR_3].syntax == VAR_0)
   return (0);
 }

 for (VAR_4 = VAR_3 , VAR_6 = VAR_3; VAR_4 < (int32_t) VAR_2->nbindings; VAR_4++) {
  for (VAR_5 = 0; VAR_5 < VAR_2->error_index && (VAR_6 + VAR_5) <
      (int32_t) VAR_1->nbindings; VAR_5++) {
   if (FUNC_0(&VAR_2->bindings[VAR_4].var,
       &VAR_1->bindings[VAR_6 + VAR_5].var) == 0)
    return (0);

   if (VAR_1->bindings[VAR_6 + VAR_5].syntax ==
       VAR_0) {
    VAR_5++;
    break;
   }
  }
  VAR_6 += VAR_5;
 }

 return (0);
}
