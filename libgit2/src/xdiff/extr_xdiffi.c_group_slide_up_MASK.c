
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* rchg; int * recs; } ;
typedef TYPE_1__ xdfile_t ;
struct xdlgroup {int start; int end; } ;


 scalar_t__ FUNC_0 (int ,int ,long) ;

__attribute__((used)) static int FUNC_1(xdfile_t *VAR_0, struct xdlgroup *VAR_1, long VAR_2)
{
 if (VAR_1->start > 0 &&
     FUNC_0(VAR_0->recs[VAR_1->start - 1], VAR_0->recs[VAR_1->end - 1], VAR_2)) {
  VAR_0->rchg[--VAR_1->start] = 1;
  VAR_0->rchg[--VAR_1->end] = 0;

  while (VAR_0->rchg[VAR_1->start - 1])
   VAR_1->start--;

  return 0;
 } else {
  return -1;
 }
}
