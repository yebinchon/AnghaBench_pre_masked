
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct blk_flush_queue {struct blk_flush_queue* flush_rq; } ;


 int FUNC_0 (struct blk_flush_queue*) ;

void FUNC_1(struct blk_flush_queue *VAR_0)
{

 if (!VAR_0)
  return;

 FUNC_0(VAR_0->flush_rq);
 FUNC_0(VAR_0);
}
