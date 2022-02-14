
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct seq_file {int dummy; } ;
struct request_queue {int sysfs_lock; } ;
struct blk_mq_hw_ctx {TYPE_2__* tags; struct request_queue* queue; } ;
struct TYPE_3__ {int sb; } ;
struct TYPE_4__ {TYPE_1__ bitmap_tags; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct seq_file*) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct seq_file *VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0;
 struct request_queue *VAR_3 = VAR_2->queue;
 int VAR_4;

 VAR_4 = FUNC_0(&VAR_3->sysfs_lock);
 if (VAR_4)
  goto out;
 if (VAR_2->tags)
  FUNC_2(&VAR_2->tags->bitmap_tags.sb, VAR_1);
 FUNC_1(&VAR_3->sysfs_lock);

out:
 return VAR_4;
}
