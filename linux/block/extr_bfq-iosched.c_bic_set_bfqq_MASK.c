
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bfq_queue {int dummy; } ;
struct bfq_io_cq {struct bfq_queue** bfqq; } ;



void FUNC_0(struct bfq_io_cq *VAR_0, struct bfq_queue *VAR_1, bool VAR_2)
{
 VAR_0->bfqq[VAR_2] = VAR_1;
}
