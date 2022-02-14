
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dust_device {int fail_read_on_bb; scalar_t__ start; TYPE_1__* dev; } ;
struct dm_target {struct dust_device* private; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int bdev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;
 scalar_t__ FUNC_2 (struct dm_target*,scalar_t__) ;
 int FUNC_3 (struct dust_device*,scalar_t__,int ) ;
 int FUNC_4 (struct dust_device*,scalar_t__,int ) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_1, struct bio *VAR_2)
{
 struct dust_device *VAR_3 = VAR_1->private;
 int VAR_4;

 FUNC_1(VAR_2, VAR_3->dev->bdev);
 VAR_2->bi_iter.bi_sector = VAR_3->start + FUNC_2(VAR_1, VAR_2->bi_iter.bi_sector);

 if (FUNC_0(VAR_2) == VAR_0)
  VAR_4 = FUNC_3(VAR_3, VAR_2->bi_iter.bi_sector, VAR_3->fail_read_on_bb);
 else
  VAR_4 = FUNC_4(VAR_3, VAR_2->bi_iter.bi_sector, VAR_3->fail_read_on_bb);

 return VAR_4;
}
