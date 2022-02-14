
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int resv; } ;
struct ttm_buffer_object {int type; int * ttm; TYPE_2__ base; struct ttm_bo_device* bdev; } ;
struct ttm_bo_device {TYPE_1__* driver; scalar_t__ no_retry; scalar_t__ need_dma32; } ;
struct TYPE_3__ {int * (* ttm_tt_create ) (struct ttm_buffer_object*,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int * FUNC_2 (struct ttm_buffer_object*,int ) ;



 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct ttm_buffer_object *VAR_6, bool VAR_7)
{
 struct ttm_bo_device *VAR_8 = VAR_6->bdev;
 uint32_t VAR_9 = 0;

 FUNC_0(VAR_6->base.resv);

 if (VAR_8->need_dma32)
  VAR_9 |= VAR_2;

 if (VAR_8->no_retry)
  VAR_9 |= VAR_3;

 switch (VAR_6->type) {
 case 130:
  if (VAR_7)
   VAR_9 |= VAR_5;
  break;
 case 129:
  break;
 case 128:
  VAR_9 |= VAR_4;
  break;
 default:
  VAR_6->ttm = ((void*)0);
  FUNC_1("Illegal buffer object type\n");
  return -VAR_0;
 }

 VAR_6->ttm = VAR_8->driver->ttm_tt_create(VAR_6, VAR_9);
 if (FUNC_3(VAR_6->ttm == ((void*)0)))
  return -VAR_1;

 return 0;
}
