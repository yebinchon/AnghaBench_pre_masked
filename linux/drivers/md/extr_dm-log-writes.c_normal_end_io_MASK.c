
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct per_bio_data {struct pending_block* block; } ;
struct pending_block {int flags; int list; } ;
struct log_writes_c {int blocks_lock; int unflushed_blocks; int log_kthread; int logging_blocks; } ;
struct dm_target {struct log_writes_c* private; } ;
struct bio {int dummy; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 struct per_bio_data* FUNC_1 (struct bio*,int) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_4, struct bio *VAR_5,
  blk_status_t *VAR_6)
{
 struct log_writes_c *VAR_7 = VAR_4->private;
 struct per_bio_data *VAR_8 = FUNC_1(VAR_5, sizeof(struct per_bio_data));

 if (FUNC_0(VAR_5) == VAR_3 && VAR_8->block) {
  struct pending_block *VAR_9 = VAR_8->block;
  unsigned long VAR_10;

  FUNC_4(&VAR_7->blocks_lock, VAR_10);
  if (VAR_9->flags & VAR_1) {
   FUNC_3(&VAR_9->list, &VAR_7->logging_blocks);
   FUNC_2(&VAR_9->list, &VAR_7->logging_blocks);
   FUNC_6(VAR_7->log_kthread);
  } else if (VAR_9->flags & VAR_2) {
   FUNC_2(&VAR_9->list, &VAR_7->logging_blocks);
   FUNC_6(VAR_7->log_kthread);
  } else
   FUNC_2(&VAR_9->list, &VAR_7->unflushed_blocks);
  FUNC_5(&VAR_7->blocks_lock, VAR_10);
 }

 return VAR_0;
}
