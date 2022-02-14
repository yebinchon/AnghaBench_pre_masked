
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {scalar_t__ max_free_space; int iounit_wait; int io_list_lock; TYPE_2__* rdev; } ;
struct r5l_io_unit {struct r5l_log* log; } ;
struct r5conf {int cache_state; } ;
struct TYPE_4__ {TYPE_1__* mddev; } ;
struct TYPE_3__ {struct r5conf* private; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct r5l_io_unit*,int ) ;
 int FUNC_1 (struct r5l_log*) ;
 scalar_t__ FUNC_2 (struct r5l_log*) ;
 int FUNC_3 (struct r5l_log*,int ) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;
 scalar_t__ FUNC_6 (int ,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct r5l_io_unit *VAR_2)
{
 struct r5l_log *VAR_3 = VAR_2->log;
 struct r5conf *VAR_4 = VAR_3->rdev->mddev->private;
 unsigned long VAR_5;

 FUNC_4(&VAR_3->io_list_lock, VAR_5);
 FUNC_0(VAR_2, VAR_0);

 if (!FUNC_1(VAR_3)) {
  FUNC_5(&VAR_3->io_list_lock, VAR_5);
  return;
 }

 if (FUNC_2(VAR_3) > VAR_3->max_free_space ||
     FUNC_6(VAR_1, &VAR_4->cache_state))
  FUNC_3(VAR_3, 0);

 FUNC_5(&VAR_3->io_list_lock, VAR_5);
 FUNC_7(&VAR_3->iounit_wait);
}
