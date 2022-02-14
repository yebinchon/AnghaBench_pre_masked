
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending_queue {scalar_t__ front; } ;
struct pending_qinfo {scalar_t__ qlen; struct pending_queue* queue; } ;


 scalar_t__ FUNC_0 (int) ;

__attribute__((used)) static inline void FUNC_1(struct pending_qinfo *VAR_0,
        int VAR_1)
{
 struct pending_queue *VAR_2 = &VAR_0->queue[VAR_1];

 VAR_2->front++;
 if (FUNC_0(VAR_2->front == VAR_0->qlen))
  VAR_2->front = 0;
}
