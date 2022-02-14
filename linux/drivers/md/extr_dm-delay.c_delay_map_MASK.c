
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {struct delay_c* private; } ;
struct dm_delay_info {struct delay_class* class; } ;
struct delay_class {scalar_t__ start; TYPE_1__* dev; } ;
struct delay_c {struct delay_class read; struct delay_class write; struct delay_class flush; } ;
struct TYPE_4__ {scalar_t__ bi_sector; } ;
struct bio {int bi_opf; TYPE_2__ bi_iter; } ;
struct TYPE_3__ {int bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct delay_c*,struct delay_class*,struct bio*) ;
 struct dm_delay_info* FUNC_4 (struct bio*,int) ;
 scalar_t__ FUNC_5 (struct dm_target*,scalar_t__) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_2, struct bio *VAR_3)
{
 struct delay_c *VAR_4 = VAR_2->private;
 struct delay_class *VAR_5;
 struct dm_delay_info *VAR_6 = FUNC_4(VAR_3, sizeof(struct dm_delay_info));

 if (FUNC_0(VAR_3) == VAR_1) {
  if (FUNC_6(VAR_3->bi_opf & VAR_0))
   VAR_5 = &VAR_4->flush;
  else
   VAR_5 = &VAR_4->write;
 } else {
  VAR_5 = &VAR_4->read;
 }
 VAR_6->class = VAR_5;
 FUNC_2(VAR_3, VAR_5->dev->bdev);
 if (FUNC_1(VAR_3))
  VAR_3->bi_iter.bi_sector = VAR_5->start + FUNC_5(VAR_2, VAR_3->bi_iter.bi_sector);

 return FUNC_3(VAR_4, VAR_5, VAR_3);
}
