
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c4iw_rdev {int dummy; } ;
struct c4iw_dev_ucontext {int lock; int cqids; int qpids; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct c4iw_rdev *VAR_0,
       struct c4iw_dev_ucontext *VAR_1)
{
 FUNC_0(&VAR_1->qpids);
 FUNC_0(&VAR_1->cqids);
 FUNC_1(&VAR_1->lock);
}
