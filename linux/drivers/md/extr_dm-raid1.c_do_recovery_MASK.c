
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mirror_set {int in_sync; scalar_t__ nr_regions; TYPE_1__* ti; int rh; } ;
struct dm_region {int dummy; } ;
struct dm_dirty_log {TYPE_2__* type; } ;
struct TYPE_4__ {scalar_t__ (* get_sync_count ) (struct dm_dirty_log*) ;} ;
struct TYPE_3__ {int table; } ;


 struct dm_dirty_log* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct dm_region* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct mirror_set*,struct dm_region*) ;
 int FUNC_5 (struct mirror_set*) ;
 scalar_t__ FUNC_6 (struct dm_dirty_log*) ;

__attribute__((used)) static void FUNC_7(struct mirror_set *VAR_0)
{
 struct dm_region *VAR_1;
 struct dm_dirty_log *VAR_2 = FUNC_0(VAR_0->rh);




 FUNC_1(VAR_0->rh);




 while ((VAR_1 = FUNC_2(VAR_0->rh)))
  FUNC_4(VAR_0, VAR_1);




 if (!VAR_0->in_sync &&
     (VAR_2->type->get_sync_count(VAR_2) == VAR_0->nr_regions)) {

  FUNC_3(VAR_0->ti->table);
  VAR_0->in_sync = 1;
  FUNC_5(VAR_0);
 }
}
