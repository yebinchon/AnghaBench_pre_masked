
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct c4iw_dev {int cqs; } ;
struct TYPE_2__ {int cq_context; int (* comp_handler ) (TYPE_1__*,int ) ;} ;
struct c4iw_cq {int wait; int refcnt; int comp_handler_lock; TYPE_1__ ibcq; int cq; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 struct c4iw_cq* FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

int FUNC_11(struct c4iw_dev *VAR_0, u32 VAR_1)
{
 struct c4iw_cq *VAR_2;
 unsigned long VAR_3;

 FUNC_9(&VAR_0->cqs, VAR_3);
 VAR_2 = FUNC_8(&VAR_0->cqs, VAR_1);
 if (VAR_2) {
  FUNC_1(&VAR_2->refcnt);
  FUNC_10(&VAR_0->cqs, VAR_3);
  FUNC_6(&VAR_2->cq);
  FUNC_3(&VAR_2->comp_handler_lock, VAR_3);
  (*VAR_2->ibcq.comp_handler)(&VAR_2->ibcq, VAR_2->ibcq.cq_context);
  FUNC_4(&VAR_2->comp_handler_lock, VAR_3);
  if (FUNC_0(&VAR_2->refcnt))
   FUNC_7(&VAR_2->wait);
 } else {
  FUNC_2("unknown cqid 0x%x\n", VAR_1);
  FUNC_10(&VAR_0->cqs, VAR_3);
 }
 return 0;
}
