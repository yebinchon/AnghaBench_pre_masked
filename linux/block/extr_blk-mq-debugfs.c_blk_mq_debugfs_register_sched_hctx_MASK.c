
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct elevator_type {int hctx_debugfs_attrs; } ;
struct blk_mq_hw_ctx {int sched_debugfs_dir; int debugfs_dir; } ;
struct TYPE_2__ {struct elevator_type* type; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,struct blk_mq_hw_ctx*,int ) ;

void FUNC_2(struct request_queue *VAR_0,
     struct blk_mq_hw_ctx *VAR_1)
{
 struct elevator_type *VAR_2 = VAR_0->elevator->type;

 if (!VAR_2->hctx_debugfs_attrs)
  return;

 VAR_1->sched_debugfs_dir = FUNC_0("sched",
           VAR_1->debugfs_dir);
 FUNC_1(VAR_1->sched_debugfs_dir, VAR_1,
        VAR_2->hctx_debugfs_attrs);
}
