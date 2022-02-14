
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {TYPE_1__* type; } ;
struct dm_table {int num_targets; TYPE_2__* md; struct dm_target* targets; } ;
typedef enum suspend_mode { ____Placeholder_suspend_mode } suspend_mode ;
struct TYPE_4__ {int suspend_lock; } ;
struct TYPE_3__ {int (* postsuspend ) (struct dm_target*) ;int (* presuspend_undo ) (struct dm_target*) ;int (* presuspend ) (struct dm_target*) ;} ;





 int FUNC_0 (int *) ;
 int FUNC_1 (struct dm_target*) ;
 int FUNC_2 (struct dm_target*) ;
 int FUNC_3 (struct dm_target*) ;

__attribute__((used)) static void FUNC_4(struct dm_table *VAR_0, enum suspend_mode VAR_1)
{
 int VAR_2 = VAR_0->num_targets;
 struct dm_target *VAR_3 = VAR_0->targets;

 FUNC_0(&VAR_0->md->suspend_lock);

 while (VAR_2--) {
  switch (VAR_1) {
  case 129:
   if (VAR_3->type->presuspend)
    VAR_3->type->presuspend(VAR_3);
   break;
  case 128:
   if (VAR_3->type->presuspend_undo)
    VAR_3->type->presuspend_undo(VAR_3);
   break;
  case 130:
   if (VAR_3->type->postsuspend)
    VAR_3->type->postsuspend(VAR_3);
   break;
  }
  VAR_3++;
 }
}
