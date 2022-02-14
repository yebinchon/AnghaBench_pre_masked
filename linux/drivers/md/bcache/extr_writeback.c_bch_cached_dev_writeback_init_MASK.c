
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int flags; } ;
struct TYPE_3__ {int rate; } ;
struct cached_dev {int writeback_metadata; int writeback_running; int writeback_percent; int writeback_delay; int writeback_rate_minimum; int writeback_rate_p_term_inverse; int writeback_rate_i_term_inverse; int writeback_rate_update; TYPE_2__ disk; int writeback_rate_update_seconds; TYPE_1__ writeback_rate; int writeback_keys; int writeback_lock; int in_flight; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int) ;
 int FUNC_6 (int ,int *) ;
 int VAR_2 ;

void FUNC_7(struct cached_dev *VAR_3)
{
 FUNC_5(&VAR_3->in_flight, 64);
 FUNC_4(&VAR_3->writeback_lock);
 FUNC_3(&VAR_3->writeback_keys);

 VAR_3->writeback_metadata = 1;
 VAR_3->writeback_running = 0;
 VAR_3->writeback_percent = 10;
 VAR_3->writeback_delay = 30;
 FUNC_2(&VAR_3->writeback_rate.rate, 1024);
 VAR_3->writeback_rate_minimum = 8;

 VAR_3->writeback_rate_update_seconds = VAR_1;
 VAR_3->writeback_rate_p_term_inverse = 40;
 VAR_3->writeback_rate_i_term_inverse = 10000;

 FUNC_1(FUNC_6(VAR_0, &VAR_3->disk.flags));
 FUNC_0(&VAR_3->writeback_rate_update, VAR_2);
}
