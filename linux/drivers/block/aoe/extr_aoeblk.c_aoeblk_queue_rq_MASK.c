
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct blk_mq_queue_data {TYPE_2__* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
struct aoedev {int flags; int lock; int rq_list; int aoeminor; int aoemajor; } ;
typedef int blk_status_t ;
struct TYPE_4__ {int queuelist; } ;
struct TYPE_3__ {struct aoedev* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aoedev*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static blk_status_t FUNC_6(struct blk_mq_hw_ctx *VAR_3,
        const struct blk_mq_queue_data *VAR_4)
{
 struct aoedev *VAR_5 = VAR_3->queue->queuedata;

 FUNC_4(&VAR_5->lock);

 if ((VAR_5->flags & VAR_2) == 0) {
  FUNC_3("aoe: device %ld.%d is not up\n",
   VAR_5->aoemajor, VAR_5->aoeminor);
  FUNC_5(&VAR_5->lock);
  FUNC_1(VAR_4->rq);
  return VAR_0;
 }

 FUNC_2(&VAR_4->rq->queuelist, &VAR_5->rq_list);
 FUNC_0(VAR_5);
 FUNC_5(&VAR_5->lock);
 return VAR_1;
}
