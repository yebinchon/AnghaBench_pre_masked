
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct queue {size_t pipe; int queue; } ;
struct device_queue_manager {int* allocated_queues; } ;



__attribute__((used)) static inline void FUNC_0(struct device_queue_manager *VAR_0,
    struct queue *VAR_1)
{
 VAR_0->allocated_queues[VAR_1->pipe] |= (1 << VAR_1->queue);
}
