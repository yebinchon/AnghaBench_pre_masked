
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_region_hash {int hash_lock; int region_lock; TYPE_2__* log; } ;
struct dm_region {scalar_t__ state; int key; int list; int pending; } ;
typedef int region_t ;
struct TYPE_4__ {TYPE_1__* type; } ;
struct TYPE_3__ {int (* mark_region ) (TYPE_2__*,int ) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 struct dm_region* FUNC_0 (struct dm_region_hash*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_8(struct dm_region_hash *VAR_2, region_t VAR_3)
{
 struct dm_region *VAR_4;

 FUNC_3(&VAR_2->hash_lock);
 VAR_4 = FUNC_0(VAR_2, VAR_3);

 FUNC_5(&VAR_2->region_lock);
 FUNC_1(&VAR_4->pending);

 if (VAR_4->state == VAR_0) {
  VAR_4->state = VAR_1;
  FUNC_2(&VAR_4->list);
  FUNC_6(&VAR_2->region_lock);

  VAR_2->log->type->mark_region(VAR_2->log, VAR_4->key);
 } else
  FUNC_6(&VAR_2->region_lock);


 FUNC_4(&VAR_2->hash_lock);
}
