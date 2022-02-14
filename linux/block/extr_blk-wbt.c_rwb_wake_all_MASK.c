
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rq_wb {struct rq_wait* rq_wait; } ;
struct rq_wait {int wait; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct rq_wb *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++) {
  struct rq_wait *VAR_3 = &VAR_1->rq_wait[VAR_2];

  if (FUNC_1(&VAR_3->wait))
   FUNC_0(&VAR_3->wait);
 }
}
