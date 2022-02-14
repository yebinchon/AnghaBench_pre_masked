
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {int logdev; int dev; int unflushed_blocks; int logging_blocks; int log_kthread; int pending_blocks; int io_blocks; int wait; int blocks_lock; } ;
struct dm_target {struct log_writes_c* private; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct dm_target*,int ) ;
 int FUNC_3 (struct log_writes_c*) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct log_writes_c*,char*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ,int) ;
 int FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct dm_target *VAR_0)
{
 struct log_writes_c *VAR_1 = VAR_0->private;

 FUNC_8(&VAR_1->blocks_lock);
 FUNC_6(&VAR_1->unflushed_blocks, &VAR_1->logging_blocks);
 FUNC_9(&VAR_1->blocks_lock);





 FUNC_7(VAR_1, "dm-log-writes-end");
 FUNC_11(VAR_1->log_kthread);
 FUNC_10(VAR_1->wait, !FUNC_1(&VAR_1->io_blocks) &&
     !FUNC_1(&VAR_1->pending_blocks));
 FUNC_4(VAR_1->log_kthread);

 FUNC_0(!FUNC_5(&VAR_1->logging_blocks));
 FUNC_0(!FUNC_5(&VAR_1->unflushed_blocks));
 FUNC_2(VAR_0, VAR_1->dev);
 FUNC_2(VAR_0, VAR_1->logdev);
 FUNC_3(VAR_1);
}
