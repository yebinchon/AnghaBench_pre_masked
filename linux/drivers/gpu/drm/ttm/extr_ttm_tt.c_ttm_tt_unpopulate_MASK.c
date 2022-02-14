
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ttm_tt {scalar_t__ state; TYPE_2__* bdev; } ;
struct TYPE_4__ {TYPE_1__* driver; } ;
struct TYPE_3__ {int (* ttm_tt_unpopulate ) (struct ttm_tt*) ;} ;


 int FUNC_0 (struct ttm_tt*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct ttm_tt*) ;
 int FUNC_2 (struct ttm_tt*) ;

void FUNC_3(struct ttm_tt *VAR_1)
{
 if (VAR_1->state == VAR_0)
  return;

 FUNC_2(VAR_1);
 if (VAR_1->bdev->driver->ttm_tt_unpopulate)
  VAR_1->bdev->driver->ttm_tt_unpopulate(VAR_1);
 else
  FUNC_1(VAR_1);
}
