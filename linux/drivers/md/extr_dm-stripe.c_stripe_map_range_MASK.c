
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint32_t ;
struct stripe_c {TYPE_2__* stripe; } ;
struct TYPE_6__ {int bi_size; scalar_t__ bi_sector; } ;
struct bio {TYPE_3__ bi_iter; } ;
typedef scalar_t__ sector_t ;
struct TYPE_5__ {scalar_t__ physical_start; TYPE_1__* dev; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*,int ) ;
 int FUNC_3 (struct stripe_c*,scalar_t__,size_t,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static int FUNC_5(struct stripe_c *VAR_2, struct bio *VAR_3,
       uint32_t VAR_4)
{
 sector_t VAR_5, VAR_6;

 FUNC_3(VAR_2, VAR_3->bi_iter.bi_sector,
    VAR_4, &VAR_5);
 FUNC_3(VAR_2, FUNC_0(VAR_3),
    VAR_4, &VAR_6);
 if (VAR_5 < VAR_6) {
  FUNC_2(VAR_3, VAR_2->stripe[VAR_4].dev->bdev);
  VAR_3->bi_iter.bi_sector = VAR_5 +
   VAR_2->stripe[VAR_4].physical_start;
  VAR_3->bi_iter.bi_size = FUNC_4(VAR_6 - VAR_5);
  return VAR_0;
 } else {

  FUNC_1(VAR_3);
  return VAR_1;
 }
}
