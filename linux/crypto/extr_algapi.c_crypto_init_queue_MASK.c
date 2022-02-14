
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_queue {unsigned int max_qlen; scalar_t__ qlen; int list; int * backlog; } ;


 int FUNC_0 (int *) ;

void FUNC_1(struct crypto_queue *VAR_0, unsigned int VAR_1)
{
 FUNC_0(&VAR_0->list);
 VAR_0->backlog = &VAR_0->list;
 VAR_0->qlen = 0;
 VAR_0->max_qlen = VAR_1;
}
