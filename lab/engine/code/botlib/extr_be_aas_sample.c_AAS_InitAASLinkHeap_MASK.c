
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next_ent; struct TYPE_3__* prev_ent; } ;
typedef TYPE_1__ aas_link_t ;
struct TYPE_4__ {int linkheapsize; TYPE_1__* linkheap; TYPE_1__* freelinks; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (char*,char*) ;
 TYPE_2__ VAR_0 ;
 int VAR_1 ;

void FUNC_2(void)
{
 int VAR_2, VAR_3;

 VAR_3 = VAR_0.linkheapsize;

 if (!VAR_0.linkheap)
 {



  VAR_3 = (int) FUNC_1("max_aaslinks", "6144");

  if (VAR_3 < 0) VAR_3 = 0;
  VAR_0.linkheapsize = VAR_3;
  VAR_0.linkheap = (aas_link_t *) FUNC_0(VAR_3 * sizeof(aas_link_t));
 }

 VAR_0.linkheap[0].prev_ent = ((void*)0);
 VAR_0.linkheap[0].next_ent = &VAR_0.linkheap[1];
 for (VAR_2 = 1; VAR_2 < VAR_3-1; VAR_2++)
 {
  VAR_0.linkheap[VAR_2].prev_ent = &VAR_0.linkheap[VAR_2 - 1];
  VAR_0.linkheap[VAR_2].next_ent = &VAR_0.linkheap[VAR_2 + 1];
 }
 VAR_0.linkheap[VAR_3-1].prev_ent = &VAR_0.linkheap[VAR_3-2];
 VAR_0.linkheap[VAR_3-1].next_ent = ((void*)0);

 VAR_0.freelinks = &VAR_0.linkheap[0];

 VAR_1 = VAR_3;
}
