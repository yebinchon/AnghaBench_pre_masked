
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct thin_c {TYPE_1__* origin_dev; int origin_size; } ;
struct dm_target {struct thin_c* private; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct dm_target *VAR_0)
{
 struct thin_c *VAR_1 = VAR_0->private;

 if (VAR_1->origin_dev)
  VAR_1->origin_size = FUNC_0(VAR_1->origin_dev->bdev);

 return 0;
}
