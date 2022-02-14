
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct dm_snapshot {scalar_t__ in_progress; TYPE_1__ in_progress_wait; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_7(struct dm_snapshot *VAR_1)
{
 FUNC_2(&VAR_1->in_progress_wait.lock);
 FUNC_0(!VAR_1->in_progress);
 VAR_1->in_progress--;
 if (FUNC_1(VAR_1->in_progress <= VAR_0) &&
     FUNC_4(FUNC_5(&VAR_1->in_progress_wait)))
  FUNC_6(&VAR_1->in_progress_wait);
 FUNC_3(&VAR_1->in_progress_wait.lock);
}
