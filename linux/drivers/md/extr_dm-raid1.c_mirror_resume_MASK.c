
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mirror_set {int rh; int suspend; } ;
struct dm_target {struct mirror_set* private; } ;
struct dm_dirty_log {TYPE_1__* type; } ;
struct TYPE_2__ {scalar_t__ (* resume ) (struct dm_dirty_log*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 struct dm_dirty_log* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (struct dm_dirty_log*) ;

__attribute__((used)) static void FUNC_5(struct dm_target *VAR_0)
{
 struct mirror_set *VAR_1 = VAR_0->private;
 struct dm_dirty_log *VAR_2 = FUNC_2(VAR_1->rh);

 FUNC_1(&VAR_1->suspend, 0);
 if (VAR_2->type->resume && VAR_2->type->resume(VAR_2))

  FUNC_0("log resume failed");
 FUNC_3(VAR_1->rh);
}
