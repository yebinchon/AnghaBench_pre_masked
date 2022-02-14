
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_2__ {int n_blacklist_ev; scalar_t__* blacklist_ev; } ;


 TYPE_1__* VAR_0 ;

__attribute__((used)) static bool FUNC_0(u64 VAR_1)
{
 int VAR_2;

 for (VAR_2=0; VAR_2 < VAR_0->n_blacklist_ev; VAR_2++) {
  if (VAR_0->blacklist_ev[VAR_2] == VAR_1)
   return 1;
 }

 return 0;
}
