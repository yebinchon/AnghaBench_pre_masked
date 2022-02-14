
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct flakey_c {scalar_t__ start; TYPE_1__* dev; } ;
struct dm_target {scalar_t__ len; struct flakey_c* private; } ;
struct block_device {int bd_inode; } ;
struct TYPE_2__ {struct block_device* bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct block_device **VAR_2)
{
 struct flakey_c *VAR_3 = VAR_1->private;

 *VAR_2 = VAR_3->dev->bdev;




 if (VAR_3->start ||
     VAR_1->len != FUNC_0((*VAR_2)->bd_inode) >> VAR_0)
  return 1;
 return 0;
}
