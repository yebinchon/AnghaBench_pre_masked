
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gf100_gr {int tpc_max; int gpc_nr; int* tpc_nr; size_t sm_nr; TYPE_1__* sm; } ;
struct TYPE_2__ {int gpc; int tpc; } ;



void
FUNC_0(struct gf100_gr *VAR_0)
{
 int VAR_1, VAR_2;
 for (VAR_1 = 0; VAR_1 < VAR_0->tpc_max; VAR_1++) {
  for (VAR_2 = 0; VAR_2 < VAR_0->gpc_nr; VAR_2++) {
   if (VAR_1 < VAR_0->tpc_nr[VAR_2]) {
    VAR_0->sm[VAR_0->sm_nr].gpc = VAR_2;
    VAR_0->sm[VAR_0->sm_nr].tpc = VAR_1;
    VAR_0->sm_nr++;
   }
  }
 }
}
