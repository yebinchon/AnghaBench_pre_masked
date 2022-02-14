
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_tracker_list {int head; int lock; TYPE_1__* list; } ;
struct TYPE_2__ {int next_tag; int * dma; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dma_tracker_list *VAR_0, int VAR_1)
{
 FUNC_0(&VAR_0->lock);
 VAR_0->list[VAR_1].next_tag = VAR_0->head;
 VAR_0->head = VAR_1;
 VAR_0->list[VAR_1].dma = ((void*)0);
 FUNC_1(&VAR_0->lock);
}
