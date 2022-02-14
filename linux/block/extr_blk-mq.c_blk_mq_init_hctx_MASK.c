
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct blk_mq_tag_set {TYPE_2__* ops; int driver_data; int * tags; } ;
struct blk_mq_hw_ctx {unsigned int queue_num; int numa_node; TYPE_1__* fq; int tags; int cpuhp_dead; } ;
struct TYPE_4__ {int (* exit_hctx ) (struct blk_mq_hw_ctx*,unsigned int) ;scalar_t__ (* init_hctx ) (struct blk_mq_hw_ctx*,int ,unsigned int) ;} ;
struct TYPE_3__ {int flush_rq; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct blk_mq_tag_set*,int ,unsigned int,int ) ;
 int FUNC_1 (struct blk_mq_hw_ctx*) ;
 int FUNC_2 (int ,int *) ;
 scalar_t__ FUNC_3 (struct blk_mq_hw_ctx*,int ,unsigned int) ;
 int FUNC_4 (struct blk_mq_hw_ctx*,unsigned int) ;

__attribute__((used)) static int FUNC_5(struct request_queue *VAR_1,
  struct blk_mq_tag_set *VAR_2,
  struct blk_mq_hw_ctx *VAR_3, unsigned VAR_4)
{
 VAR_3->queue_num = VAR_4;

 FUNC_2(VAR_0, &VAR_3->cpuhp_dead);

 VAR_3->tags = VAR_2->tags[VAR_4];

 if (VAR_2->ops->init_hctx &&
     VAR_2->ops->init_hctx(VAR_3, VAR_2->driver_data, VAR_4))
  goto unregister_cpu_notifier;

 if (FUNC_0(VAR_2, VAR_3->fq->flush_rq, VAR_4,
    VAR_3->numa_node))
  goto exit_hctx;
 return 0;

 exit_hctx:
 if (VAR_2->ops->exit_hctx)
  VAR_2->ops->exit_hctx(VAR_3, VAR_4);
 unregister_cpu_notifier:
 FUNC_1(VAR_3);
 return -1;
}
