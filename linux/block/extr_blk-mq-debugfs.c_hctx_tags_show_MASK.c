
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct seq_file {int dummy; } ;
struct request_queue {int sysfs_lock; } ;
struct blk_mq_hw_ctx {scalar_t__ tags; struct request_queue* queue; } ;


 int FUNC_0 (struct seq_file*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(void *VAR_0, struct seq_file *VAR_1)
{
 struct blk_mq_hw_ctx *VAR_2 = VAR_0;
 struct request_queue *VAR_3 = VAR_2->queue;
 int VAR_4;

 VAR_4 = FUNC_1(&VAR_3->sysfs_lock);
 if (VAR_4)
  goto out;
 if (VAR_2->tags)
  FUNC_0(VAR_1, VAR_2->tags);
 FUNC_2(&VAR_3->sysfs_lock);

out:
 return VAR_4;
}
