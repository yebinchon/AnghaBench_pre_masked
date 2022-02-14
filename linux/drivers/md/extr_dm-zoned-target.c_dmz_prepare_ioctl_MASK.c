
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dmz_target {TYPE_1__* dev; } ;
struct dm_target {struct dmz_target* private; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct block_device* bdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_1, struct block_device **VAR_2)
{
 struct dmz_target *VAR_3 = VAR_1->private;

 if (FUNC_0(VAR_3->dev))
  return -VAR_0;

 *VAR_2 = VAR_3->dev->bdev;

 return 0;
}
