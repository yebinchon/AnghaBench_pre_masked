
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vector_queue {int head; int max_depth; int queue_depth; int tail_lock; scalar_t__ tail; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct vector_queue *VAR_0, int VAR_1)
{
 int VAR_2;

 VAR_0->head =
  (VAR_0->head + VAR_1)
   % VAR_0->max_depth;


 FUNC_0(&VAR_0->tail_lock);
 VAR_0->queue_depth -= VAR_1;





 if (VAR_0->queue_depth == 0) {
  VAR_0->head = 0;
  VAR_0->tail = 0;
 }
 VAR_2 = VAR_0->queue_depth;
 FUNC_1(&VAR_0->tail_lock);
 return VAR_2;
}
