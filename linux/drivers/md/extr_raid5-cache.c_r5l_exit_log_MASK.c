
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct r5l_log {int io_kc; int io_pool; int bs; int meta_pool; int reclaim_thread; int disable_writeback_work; } ;
struct r5conf {TYPE_1__* mddev; struct r5l_log* log; } ;
struct TYPE_2__ {int sb_wait; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct r5l_log*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;

void FUNC_8(struct r5conf *VAR_0)
{
 struct r5l_log *VAR_1 = VAR_0->log;

 VAR_0->log = ((void*)0);
 FUNC_6();


 FUNC_7(&VAR_0->mddev->sb_wait);
 FUNC_1(&VAR_1->disable_writeback_work);
 FUNC_4(&VAR_1->reclaim_thread);
 FUNC_5(&VAR_1->meta_pool);
 FUNC_0(&VAR_1->bs);
 FUNC_5(&VAR_1->io_pool);
 FUNC_3(VAR_1->io_kc);
 FUNC_2(VAR_1);
}
