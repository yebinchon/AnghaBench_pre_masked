
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_region_hash {int region_lock; int quiesced_regions; int hash_lock; TYPE_2__* log; } ;
struct dm_region {int list; int pending; int state; } ;
typedef int region_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* get_resync_work ) (TYPE_2__*,int *) ;} ;


 int VAR_0 ;
 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int *) ;

__attribute__((used)) static int FUNC_9(struct dm_region_hash *VAR_1)
{
 int VAR_2;
 region_t VAR_3;
 struct dm_region *VAR_4;




 VAR_2 = VAR_1->log->type->get_resync_work(VAR_1->log, &VAR_3);
 if (VAR_2 <= 0)
  return VAR_2;





 FUNC_4(&VAR_1->hash_lock);
 VAR_4 = FUNC_0(VAR_1, VAR_3);
 FUNC_5(&VAR_1->hash_lock);

 FUNC_6(&VAR_1->region_lock);
 VAR_4->state = VAR_0;


 if (FUNC_1(&VAR_4->pending))
  FUNC_2(&VAR_4->list);
 else
  FUNC_3(&VAR_4->list, &VAR_1->quiesced_regions);

 FUNC_7(&VAR_1->region_lock);

 return 1;
}
