
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int rh; } ;
struct dm_target {struct mirror_set* private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ (* postsuspend ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 struct dm_dirty_log* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct dm_dirty_log*) ;

__attribute__((used)) static void FUNC_3(struct dm_target *VAR_0)
{
 struct mirror_set *VAR_1 = VAR_0->private;
 struct dm_dirty_log *VAR_2 = FUNC_1(VAR_1->rh);

 if (VAR_2->type->postsuspend && VAR_2->type->postsuspend(VAR_2))

  FUNC_0("log postsuspend failed");
}
