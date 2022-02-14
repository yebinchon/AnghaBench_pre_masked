
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; } ;
struct dm_snapshot {scalar_t__ in_progress; TYPE_1__ in_progress_wait; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int *) ;
 int VAR_4 ;

__attribute__((used)) static bool FUNC_10(struct dm_snapshot *VAR_5, bool VAR_6)
{
 if (FUNC_8(VAR_5->in_progress > VAR_2)) {
  FUNC_6(&VAR_5->in_progress_wait.lock);
  if (FUNC_4(VAR_5->in_progress > VAR_2)) {







   FUNC_0(VAR_4, VAR_3);
   FUNC_1(&VAR_5->in_progress_wait, &VAR_4);
   FUNC_2(VAR_0);
   FUNC_7(&VAR_5->in_progress_wait.lock);
   if (VAR_6)
    FUNC_9(&VAR_1);
   FUNC_3();
   FUNC_5(&VAR_5->in_progress_wait, &VAR_4);
   return 0;
  }
  FUNC_7(&VAR_5->in_progress_wait.lock);
 }
 return 1;
}
