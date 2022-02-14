
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int rpcvers_t ;
typedef size_t rpcproc_t ;
struct TYPE_2__ {int * info; } ;





 TYPE_1__* VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;

void
FUNC_0(rpcvers_t VAR_4, rpcproc_t VAR_5)
{
 switch (VAR_4 + 2) {






 case 129:
  if (VAR_5 > VAR_2)
   return;
  break;
 case 128:
  if (VAR_5 > VAR_3)
   return;
  break;
 default: return;
 }
 VAR_0[VAR_4].info[VAR_5]++;
 return;
}
