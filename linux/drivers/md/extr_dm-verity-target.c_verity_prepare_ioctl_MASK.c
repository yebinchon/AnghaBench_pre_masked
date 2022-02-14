
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dm_verity {TYPE_1__* data_dev; scalar_t__ data_start; } ;
struct dm_target {scalar_t__ len; struct dm_verity* private; } ;
struct block_device {int bd_inode; } ;
struct TYPE_2__ {struct block_device* bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct block_device **VAR_2)
{
 struct dm_verity *VAR_3 = VAR_1->private;

 *VAR_2 = VAR_3->data_dev->bdev;

 if (VAR_3->data_start ||
     VAR_1->len != FUNC_0(VAR_3->data_dev->bdev->bd_inode) >> VAR_0)
  return 1;
 return 0;
}
