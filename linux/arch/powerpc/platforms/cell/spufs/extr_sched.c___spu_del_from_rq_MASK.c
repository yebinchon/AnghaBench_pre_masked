
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {int prio; int rq; } ;
struct TYPE_2__ {int bitmap; int * runq; int nr_waiting; } ;


 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 TYPE_1__* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_4(struct spu_context *VAR_2)
{
 int VAR_3 = VAR_2->prio;

 if (!FUNC_3(&VAR_2->rq)) {
  if (!--VAR_0->nr_waiting)
   FUNC_1(&VAR_1);
  FUNC_2(&VAR_2->rq);

  if (FUNC_3(&VAR_0->runq[VAR_3]))
   FUNC_0(VAR_3, VAR_0->bitmap);
 }
}
