
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int mode; int dax_dev; struct block_device* bdev; } ;
struct table_device {TYPE_2__ dm_dev; } ;
struct mapped_device {int dummy; } ;
struct block_device {TYPE_1__* bd_disk; } ;
typedef int dev_t ;
struct TYPE_3__ {int disk_name; } ;


 int FUNC_0 (struct block_device*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct block_device*) ;
 int FUNC_2 (struct block_device*) ;
 int VAR_1 ;
 int FUNC_3 (struct block_device*,int ) ;
 struct block_device* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (struct block_device*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct mapped_device*) ;

__attribute__((used)) static int FUNC_8(struct table_device *VAR_2, dev_t VAR_3,
        struct mapped_device *VAR_4)
{
 struct block_device *VAR_5;

 int VAR_6;

 FUNC_0(VAR_2->dm_dev.bdev);

 VAR_5 = FUNC_4(VAR_3, VAR_2->dm_dev.mode | VAR_0, VAR_1);
 if (FUNC_1(VAR_5))
  return FUNC_2(VAR_5);

 VAR_6 = FUNC_3(VAR_5, FUNC_7(VAR_4));
 if (VAR_6) {
  FUNC_5(VAR_5, VAR_2->dm_dev.mode | VAR_0);
  return VAR_6;
 }

 VAR_2->dm_dev.bdev = VAR_5;
 VAR_2->dm_dev.dax_dev = FUNC_6(VAR_5->bd_disk->disk_name);
 return 0;
}
