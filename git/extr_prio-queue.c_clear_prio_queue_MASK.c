
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct prio_queue {scalar_t__ insertion_ctr; scalar_t__ alloc; scalar_t__ nr; int array; } ;


 int FUNC_0 (int ) ;

void FUNC_1(struct prio_queue *VAR_0)
{
 FUNC_0(VAR_0->array);
 VAR_0->nr = 0;
 VAR_0->alloc = 0;
 VAR_0->insertion_ctr = 0;
}
