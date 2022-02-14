
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct show_busy_params {struct blk_mq_hw_ctx* hctx; struct seq_file* m; } ;
struct seq_file {int dummy; } ;
struct blk_mq_hw_ctx {TYPE_1__* queue; } ;
struct TYPE_2__ {int tag_set; } ;


 int FUNC_0 (int ,int ,struct show_busy_params*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(void *VAR_1, struct seq_file *VAR_2)
{
 struct blk_mq_hw_ctx *VAR_3 = VAR_1;
 struct show_busy_params VAR_4 = { .m = VAR_2, .hctx = VAR_3 };

 FUNC_0(VAR_3->queue->tag_set, VAR_0,
    &VAR_4);

 return 0;
}
