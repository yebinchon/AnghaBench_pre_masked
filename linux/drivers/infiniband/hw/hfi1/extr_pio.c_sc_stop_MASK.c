
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct send_context {int flags; int halt_wait; int alloc_lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct send_context *VAR_1, int VAR_2)
{
 unsigned long VAR_3;


 FUNC_0(&VAR_1->alloc_lock, VAR_3);

 VAR_1->flags |= VAR_2;
 VAR_1->flags &= ~VAR_0;
 FUNC_1(&VAR_1->alloc_lock, VAR_3);
 FUNC_2(&VAR_1->halt_wait);
}
