
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct log_writes_c {struct dm_dev* dev; } ;
struct dm_target {scalar_t__ len; struct log_writes_c* private; } ;
struct dm_dev {struct block_device* bdev; } ;
struct block_device {int bd_inode; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1,
        struct block_device **VAR_2)
{
 struct log_writes_c *VAR_3 = VAR_1->private;
 struct dm_dev *VAR_4 = VAR_3->dev;

 *VAR_2 = VAR_4->bdev;



 if (VAR_1->len != FUNC_0(VAR_4->bdev->bd_inode) >> VAR_0)
  return 1;
 return 0;
}
