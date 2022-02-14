
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct ocrdma_dev {struct ocrdma_cq** cq_tbl; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct ocrdma_cq {int comp_handler_lock; TYPE_1__ ibcq; } ;


 int FUNC_0 () ;
 size_t VAR_0 ;
 int FUNC_1 (struct ocrdma_dev*,struct ocrdma_cq*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(struct ocrdma_dev *VAR_1, u16 VAR_2)
{
 unsigned long VAR_3;
 struct ocrdma_cq *VAR_4;

 if (VAR_2 >= VAR_0)
  FUNC_0();

 VAR_4 = VAR_1->cq_tbl[VAR_2];
 if (VAR_4 == ((void*)0))
  return;

 if (VAR_4->ibcq.comp_handler) {
  FUNC_2(&VAR_4->comp_handler_lock, VAR_3);
  (*VAR_4->ibcq.comp_handler) (&VAR_4->ibcq, VAR_4->ibcq.cq_context);
  FUNC_3(&VAR_4->comp_handler_lock, VAR_3);
 }
 FUNC_1(VAR_1, VAR_4);
}
