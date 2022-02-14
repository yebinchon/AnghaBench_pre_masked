
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ttm_buffer_object {int list_kref; int lru; int swap; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_1__* driver; } ;
struct TYPE_2__ {int (* del_from_lru_notify ) (struct ttm_buffer_object*) ;} ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ttm_buffer_object*) ;
 int VAR_0 ;

void FUNC_4(struct ttm_buffer_object *VAR_1)
{
 struct ttm_bo_device *VAR_2 = VAR_1->bdev;
 bool VAR_3 = 0;

 if (!FUNC_2(&VAR_1->swap)) {
  FUNC_1(&VAR_1->swap);
  FUNC_0(&VAR_1->list_kref, VAR_0);
  VAR_3 = 1;
 }
 if (!FUNC_2(&VAR_1->lru)) {
  FUNC_1(&VAR_1->lru);
  FUNC_0(&VAR_1->list_kref, VAR_0);
  VAR_3 = 1;
 }

 if (VAR_3 && VAR_2->driver->del_from_lru_notify)
  VAR_2->driver->del_from_lru_notify(VAR_1);
}
