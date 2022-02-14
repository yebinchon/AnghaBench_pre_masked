
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_ctx_queue {int * rq_list; int lock; } ;


 int FUNC_0 (int *) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct kyber_ctx_queue *VAR_1)
{
 unsigned int VAR_2;

 FUNC_1(&VAR_1->lock);
 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  FUNC_0(&VAR_1->rq_list[VAR_2]);
}
