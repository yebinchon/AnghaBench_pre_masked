
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct stripe_c {unsigned int stripes; TYPE_3__* stripe; } ;
struct dm_target {struct stripe_c* private; } ;
struct TYPE_4__ {int bi_sector; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
struct TYPE_6__ {TYPE_2__* dev; scalar_t__ physical_start; } ;
struct TYPE_5__ {int bdev; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 unsigned int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct stripe_c*,struct bio*,unsigned int) ;
 int FUNC_5 (struct stripe_c*,int ,size_t*,int *) ;
 scalar_t__ FUNC_6 (int) ;

__attribute__((used)) static int FUNC_7(struct dm_target *VAR_6, struct bio *VAR_7)
{
 struct stripe_c *VAR_8 = VAR_6->private;
 uint32_t VAR_9;
 unsigned VAR_10;

 if (VAR_7->bi_opf & VAR_5) {
  VAR_10 = FUNC_3(VAR_7);
  FUNC_0(VAR_10 >= VAR_8->stripes);
  FUNC_2(VAR_7, VAR_8->stripe[VAR_10].dev->bdev);
  return VAR_0;
 }
 if (FUNC_6(FUNC_1(VAR_7) == VAR_1) ||
     FUNC_6(FUNC_1(VAR_7) == VAR_2) ||
     FUNC_6(FUNC_1(VAR_7) == VAR_4) ||
     FUNC_6(FUNC_1(VAR_7) == VAR_3)) {
  VAR_10 = FUNC_3(VAR_7);
  FUNC_0(VAR_10 >= VAR_8->stripes);
  return FUNC_4(VAR_8, VAR_7, VAR_10);
 }

 FUNC_5(VAR_8, VAR_7->bi_iter.bi_sector,
     &VAR_9, &VAR_7->bi_iter.bi_sector);

 VAR_7->bi_iter.bi_sector += VAR_8->stripe[VAR_9].physical_start;
 FUNC_2(VAR_7, VAR_8->stripe[VAR_9].dev->bdev);

 return VAR_0;
}
