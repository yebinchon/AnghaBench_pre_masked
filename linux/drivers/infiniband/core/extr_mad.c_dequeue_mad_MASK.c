
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_mad_queue {int lock; int count; } ;
struct ib_mad_list_head {int list; struct ib_mad_queue* mad_queue; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct ib_mad_list_head *VAR_0)
{
 struct ib_mad_queue *VAR_1;
 unsigned long VAR_2;

 VAR_1 = VAR_0->mad_queue;
 FUNC_1(&VAR_1->lock, VAR_2);
 FUNC_0(&VAR_0->list);
 VAR_1->count--;
 FUNC_2(&VAR_1->lock, VAR_2);
}
