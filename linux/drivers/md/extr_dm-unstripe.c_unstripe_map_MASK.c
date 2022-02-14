
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct unstripe_c {scalar_t__ physical_start; TYPE_1__* dev; } ;
struct dm_target {struct unstripe_c* private; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 int FUNC_0 (struct bio*,int ) ;
 scalar_t__ FUNC_1 (struct dm_target*,struct bio*) ;

__attribute__((used)) static int FUNC_2(struct dm_target *VAR_1, struct bio *VAR_2)
{
 struct unstripe_c *VAR_3 = VAR_1->private;

 FUNC_0(VAR_2, VAR_3->dev->bdev);
 VAR_2->bi_iter.bi_sector = FUNC_1(VAR_1, VAR_2) + VAR_3->physical_start;

 return VAR_0;
}
