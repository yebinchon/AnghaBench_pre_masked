
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxe_cq {int is_dying; int cq_lock; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct rxe_cq *VAR_0)
{
 unsigned long VAR_1;

 FUNC_0(&VAR_0->cq_lock, VAR_1);
 VAR_0->is_dying = 1;
 FUNC_1(&VAR_0->cq_lock, VAR_1);
}
