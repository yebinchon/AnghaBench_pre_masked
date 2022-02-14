
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct rxe_cq {TYPE_1__ ibcq; int cq_lock; scalar_t__ is_dying; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_0)
{
 struct rxe_cq *VAR_1 = (struct rxe_cq *)VAR_0;
 unsigned long VAR_2;

 FUNC_0(&VAR_1->cq_lock, VAR_2);
 if (VAR_1->is_dying) {
  FUNC_1(&VAR_1->cq_lock, VAR_2);
  return;
 }
 FUNC_1(&VAR_1->cq_lock, VAR_2);

 VAR_1->ibcq.comp_handler(&VAR_1->ibcq, VAR_1->ibcq.cq_context);
}
