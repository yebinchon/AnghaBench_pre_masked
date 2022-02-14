
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mapped_device {int dummy; } ;
struct dm_dev_internal {struct dm_dev* dm_dev; } ;
struct dm_dev {int mode; TYPE_1__* bdev; } ;
typedef int fmode_t ;
struct TYPE_2__ {int bd_dev; } ;


 int FUNC_0 (struct mapped_device*,int ,int,struct dm_dev**) ;
 int FUNC_1 (struct mapped_device*,struct dm_dev*) ;

__attribute__((used)) static int FUNC_2(struct dm_dev_internal *VAR_0, fmode_t VAR_1,
   struct mapped_device *VAR_2)
{
 int VAR_3;
 struct dm_dev *VAR_4, *VAR_5;

 VAR_4 = VAR_0->dm_dev;

 VAR_3 = FUNC_0(VAR_2, VAR_0->dm_dev->bdev->bd_dev,
    VAR_0->dm_dev->mode | VAR_1, &VAR_5);
 if (VAR_3)
  return VAR_3;

 VAR_0->dm_dev = VAR_5;
 FUNC_1(VAR_2, VAR_4);

 return 0;
}
