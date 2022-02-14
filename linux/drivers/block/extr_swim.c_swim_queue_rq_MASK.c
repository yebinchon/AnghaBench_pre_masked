
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct swim_priv {int lock; } ;
struct request {int bio; } ;
struct floppy_state {int disk_in; struct swim_priv* swd; } ;
struct blk_mq_queue_data {struct request* rq; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
typedef int blk_status_t ;
struct TYPE_2__ {struct floppy_state* queuedata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct request*) ;
 int FUNC_3 (struct request*) ;
 int FUNC_4 (struct request*) ;
 int FUNC_5 (struct request*) ;
 scalar_t__ FUNC_6 (struct request*,int ,int ) ;
 int FUNC_7 (struct floppy_state*,int ,int ,int ) ;
 scalar_t__ FUNC_8 (struct request*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static blk_status_t FUNC_11(struct blk_mq_hw_ctx *VAR_4,
      const struct blk_mq_queue_data *VAR_5)
{
 struct floppy_state *VAR_6 = VAR_4->queue->queuedata;
 struct swim_priv *VAR_7 = VAR_6->swd;
 struct request *VAR_8 = VAR_5->rq;
 blk_status_t VAR_9;

 if (!FUNC_9(&VAR_7->lock))
  return VAR_0;

 FUNC_2(VAR_8);

 if (!VAR_6->disk_in || FUNC_8(VAR_8) == VAR_3) {
  VAR_9 = VAR_1;
  goto out;
 }

 do {
  VAR_9 = FUNC_7(VAR_6, FUNC_5(VAR_8),
       FUNC_4(VAR_8),
       FUNC_1(VAR_8->bio));
 } while (FUNC_6(VAR_8, VAR_9, FUNC_3(VAR_8)));
 FUNC_0(VAR_8, VAR_9);

 VAR_9 = VAR_2;
out:
 FUNC_10(&VAR_7->lock);
 return VAR_9;

}
