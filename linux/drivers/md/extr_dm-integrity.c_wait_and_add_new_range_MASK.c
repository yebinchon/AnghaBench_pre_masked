
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_integrity_range {int waiting; int task; int wait_entry; } ;
struct TYPE_2__ {int lock; } ;
struct dm_integrity_c {TYPE_1__ endio_wait; int wait_list; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static void FUNC_6(struct dm_integrity_c *VAR_2, struct dm_integrity_range *VAR_3)
{
 VAR_3->waiting = 1;
 FUNC_2(&VAR_3->wait_entry, &VAR_2->wait_list);
 VAR_3->task = VAR_1;
 do {
  FUNC_0(VAR_0);
  FUNC_4(&VAR_2->endio_wait.lock);
  FUNC_1();
  FUNC_3(&VAR_2->endio_wait.lock);
 } while (FUNC_5(VAR_3->waiting));
}
