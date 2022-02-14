
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mode; int * dax_dev; int * bdev; } ;
struct table_device {TYPE_1__ dm_dev; } ;
struct mapped_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (struct mapped_device*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct table_device *VAR_1, struct mapped_device *VAR_2)
{
 if (!VAR_1->dm_dev.bdev)
  return;

 FUNC_0(VAR_1->dm_dev.bdev, FUNC_2(VAR_2));
 FUNC_1(VAR_1->dm_dev.bdev, VAR_1->dm_dev.mode | VAR_0);
 FUNC_3(VAR_1->dm_dev.dax_dev);
 VAR_1->dm_dev.bdev = ((void*)0);
 VAR_1->dm_dev.dax_dev = ((void*)0);
}
