
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct ubd {int lock; } ;
struct request {int dummy; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct ubd* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





 int FUNC_0 (int) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct blk_mq_hw_ctx*,struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct blk_mq_hw_ctx*,struct request*,int,int *) ;

__attribute__((used)) static blk_status_t FUNC_8(struct blk_mq_hw_ctx *VAR_5,
     const struct blk_mq_queue_data *VAR_6)
{
 struct ubd *VAR_7 = VAR_5->queue->queuedata;
 struct request *VAR_8 = VAR_6->rq;
 int VAR_9 = 0, VAR_10 = VAR_2;

 FUNC_1(VAR_8);

 FUNC_5(&VAR_7->lock);

 switch (FUNC_4(VAR_8)) {

 case 131:
  VAR_9 = FUNC_7(VAR_5, VAR_8, 0, ((void*)0));
  break;
 case 130:
 case 129:
  VAR_9 = FUNC_3(VAR_5, VAR_8);
  break;
 case 132:
 case 128:
  VAR_9 = FUNC_7(VAR_5, VAR_8, (u64)FUNC_2(VAR_8) << 9, ((void*)0));
  break;
 default:
  FUNC_0(1);
  VAR_10 = VAR_1;
 }

 FUNC_6(&VAR_7->lock);

 if (VAR_9 < 0) {
  if (VAR_9 == -VAR_4)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_0;
 }

 return VAR_10;
}
