
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drbd_device {TYPE_1__* bitmap; } ;
typedef int sector_t ;
struct TYPE_2__ {int bm_dev_capacity; } ;


 int FUNC_0 (TYPE_1__*) ;

sector_t FUNC_1(struct drbd_device *VAR_0)
{
 if (!FUNC_0(VAR_0->bitmap))
  return 0;
 return VAR_0->bitmap->bm_dev_capacity;
}
