
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t nrec; int* rchg; int * recs; } ;
typedef TYPE_1__ xdfile_t ;
struct xdlgroup {size_t end; size_t start; } ;


 scalar_t__ FUNC_0 (int ,int ,long) ;

__attribute__((used)) static int FUNC_1(xdfile_t *VAR_0, struct xdlgroup *VAR_1, long VAR_2)
{
 if (VAR_1->end < VAR_0->nrec &&
     FUNC_0(VAR_0->recs[VAR_1->start], VAR_0->recs[VAR_1->end], VAR_2)) {
  VAR_0->rchg[VAR_1->start++] = 0;
  VAR_0->rchg[VAR_1->end++] = 1;

  while (VAR_0->rchg[VAR_1->end])
   VAR_1->end++;

  return 0;
 } else {
  return -1;
 }
}
