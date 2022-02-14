
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct flakey_c {TYPE_1__* dev; } ;
struct dm_target {struct flakey_c* private; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int bdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct dm_target*,int ) ;

__attribute__((used)) static void FUNC_4(struct dm_target *VAR_1, struct bio *VAR_2)
{
 struct flakey_c *VAR_3 = VAR_1->private;

 FUNC_2(VAR_2, VAR_3->dev->bdev);
 if (FUNC_1(VAR_2) || FUNC_0(VAR_2) == VAR_0)
  VAR_2->bi_iter.bi_sector =
   FUNC_3(VAR_1, VAR_2->bi_iter.bi_sector);
}
