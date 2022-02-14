
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct log_writes_c {TYPE_1__* dev; } ;
struct dm_target {struct log_writes_c* private; } ;
struct bio {int dummy; } ;
struct TYPE_2__ {int bdev; } ;


 int FUNC_0 (struct bio*,int ) ;

__attribute__((used)) static void FUNC_1(struct dm_target *VAR_0, struct bio *VAR_1)
{
 struct log_writes_c *VAR_2 = VAR_0->private;

 FUNC_0(VAR_1, VAR_2->dev->bdev);
}
