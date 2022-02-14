
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct spu_context {size_t prio; int rq; } ;
struct TYPE_2__ {int nr_waiting; int bitmap; int * runq; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (size_t,int ) ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_4(struct spu_context *VAR_4)
{
 if (FUNC_1(&VAR_4->rq)) {
  FUNC_0(&VAR_4->rq, &VAR_2->runq[VAR_4->prio]);
  FUNC_3(VAR_4->prio, VAR_2->bitmap);
  if (!VAR_2->nr_waiting++)
   FUNC_2(&VAR_3, VAR_1 + VAR_0);
 }
}
