
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ocrdma_dev {int flush_q_lock; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct ocrdma_cq {int comp_handler_lock; TYPE_1__ ibcq; } ;


 struct ocrdma_cq* FUNC_0 (struct ocrdma_dev*,struct ocrdma_cq*,int) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_4(struct ocrdma_dev *VAR_0,
           struct ocrdma_cq *VAR_1)
{
 unsigned long VAR_2;
 struct ocrdma_cq *VAR_3 = ((void*)0);







 FUNC_1(&VAR_0->flush_q_lock, VAR_2);




 VAR_3 = FUNC_0(VAR_0, VAR_1, 1);
 if (VAR_3 == ((void*)0))
  VAR_3 = FUNC_0(VAR_0, VAR_1, 0);
 FUNC_2(&VAR_0->flush_q_lock, VAR_2);


 if (VAR_3 && VAR_3->ibcq.comp_handler) {
  FUNC_1(&VAR_3->comp_handler_lock, VAR_2);
  (*VAR_3->ibcq.comp_handler) (&VAR_3->ibcq, VAR_3->ibcq.cq_context);
  FUNC_2(&VAR_3->comp_handler_lock, VAR_2);
 }
}
