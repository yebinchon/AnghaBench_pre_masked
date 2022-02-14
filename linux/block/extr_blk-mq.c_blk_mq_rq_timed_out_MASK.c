
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request {TYPE_2__* q; int rq_flags; } ;
typedef enum blk_eh_timer_return { ____Placeholder_blk_eh_timer_return } blk_eh_timer_return ;
struct TYPE_4__ {TYPE_1__* mq_ops; } ;
struct TYPE_3__ {int (* timeout ) (struct request*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*,int) ;

__attribute__((used)) static void FUNC_3(struct request *VAR_3, bool VAR_4)
{
 VAR_3->rq_flags |= VAR_2;
 if (VAR_3->q->mq_ops->timeout) {
  enum blk_eh_timer_return VAR_5;

  VAR_5 = VAR_3->q->mq_ops->timeout(VAR_3, VAR_4);
  if (VAR_5 == VAR_0)
   return;
  FUNC_0(VAR_5 != VAR_1);
 }

 FUNC_1(VAR_3);
}
