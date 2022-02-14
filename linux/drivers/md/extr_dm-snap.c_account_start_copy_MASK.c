
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lock; } ;
struct dm_snapshot {TYPE_1__ in_progress_wait; int in_progress; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(struct dm_snapshot *VAR_0)
{
 FUNC_0(&VAR_0->in_progress_wait.lock);
 VAR_0->in_progress++;
 FUNC_1(&VAR_0->in_progress_wait.lock);
}
