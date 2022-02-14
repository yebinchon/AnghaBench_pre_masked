
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_target {struct dm_origin* private; } ;
struct dm_origin {unsigned int split_boundary; TYPE_2__* dev; } ;
struct TYPE_3__ {scalar_t__ bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 unsigned int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct bio*,unsigned int) ;
 int FUNC_4 (TYPE_2__*,struct bio*,int) ;
 scalar_t__ FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6(struct dm_target *VAR_3, struct bio *VAR_4)
{
 struct dm_origin *VAR_5 = VAR_3->private;
 unsigned VAR_6;

 FUNC_2(VAR_4, VAR_5->dev->bdev);

 if (FUNC_5(VAR_4->bi_opf & VAR_1))
  return VAR_0;

 if (FUNC_0(VAR_4) != VAR_2)
  return VAR_0;

 VAR_6 = VAR_5->split_boundary -
  ((unsigned)VAR_4->bi_iter.bi_sector & (VAR_5->split_boundary - 1));

 if (FUNC_1(VAR_4) > VAR_6)
  FUNC_3(VAR_4, VAR_6);


 return FUNC_4(VAR_5->dev, VAR_4, 1);
}
