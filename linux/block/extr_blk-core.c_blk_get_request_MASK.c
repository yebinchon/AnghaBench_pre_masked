
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* mq_ops; } ;
struct request {int dummy; } ;
typedef unsigned int blk_mq_req_flags_t ;
struct TYPE_2__ {int (* initialize_rq_fn ) (struct request*) ;} ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct request*) ;
 unsigned int VAR_2 ;
 int FUNC_1 (unsigned int) ;
 struct request* FUNC_2 (struct request_queue*,unsigned int,unsigned int) ;
 int FUNC_3 (struct request*) ;

struct request *FUNC_4(struct request_queue *VAR_3, unsigned int VAR_4,
    blk_mq_req_flags_t VAR_5)
{
 struct request *VAR_6;

 FUNC_1(VAR_4 & VAR_2);
 FUNC_1(VAR_5 & ~(VAR_0 | VAR_1));

 VAR_6 = FUNC_2(VAR_3, VAR_4, VAR_5);
 if (!FUNC_0(VAR_6) && VAR_3->mq_ops->initialize_rq_fn)
  VAR_3->mq_ops->initialize_rq_fn(VAR_6);

 return VAR_6;
}
