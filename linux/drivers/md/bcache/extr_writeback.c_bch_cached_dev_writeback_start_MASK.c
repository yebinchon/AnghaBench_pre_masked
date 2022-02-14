
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int flags; } ;
struct cached_dev {int writeback_running; int writeback_rate_update_seconds; int writeback_rate_update; TYPE_1__ disk; int writeback_thread; int writeback_write_wq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (char*,int ,int ) ;
 int FUNC_4 (struct cached_dev*) ;
 int VAR_4 ;
 int FUNC_5 (struct cached_dev*) ;
 int FUNC_6 (struct cached_dev*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,struct cached_dev*,char*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int ,int *) ;

int FUNC_11(struct cached_dev *VAR_5)
{
 VAR_5->writeback_write_wq = FUNC_3("bcache_writeback_wq",
      VAR_3, 0);
 if (!VAR_5->writeback_write_wq)
  return -VAR_1;

 FUNC_5(VAR_5);
 VAR_5->writeback_thread = FUNC_8(VAR_4, VAR_5,
           "bcache_writeback");
 if (FUNC_0(VAR_5->writeback_thread)) {
  FUNC_6(VAR_5);
  FUNC_7(VAR_5->writeback_write_wq);
  return FUNC_1(VAR_5->writeback_thread);
 }
 VAR_5->writeback_running = 1;

 FUNC_2(FUNC_10(VAR_0, &VAR_5->disk.flags));
 FUNC_9(&VAR_5->writeback_rate_update,
         VAR_5->writeback_rate_update_seconds * VAR_2);

 FUNC_4(VAR_5);

 return 0;
}
