
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {int bio_set; struct faulty_conf* private; } ;
struct faulty_conf {TYPE_2__* rdev; int * counters; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {int bi_end_io; struct bio* bi_private; TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct faulty_conf*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 struct bio* FUNC_2 (struct bio*,int ,int *) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 (struct bio*,int ) ;
 scalar_t__ FUNC_7 (struct faulty_conf*,int ) ;
 scalar_t__ FUNC_8 (struct faulty_conf*,int ,int ,scalar_t__) ;
 int VAR_9 ;
 int FUNC_9 (struct bio*) ;

__attribute__((used)) static bool FUNC_10(struct mddev *VAR_10, struct bio *VAR_11)
{
 struct faulty_conf *VAR_12 = VAR_10->private;
 int VAR_13 = 0;

 if (FUNC_3(VAR_11) == VAR_5) {

  if (FUNC_1(&VAR_12->counters[VAR_6])) {



   FUNC_5(VAR_11);
   return 1;
  }

  if (FUNC_8(VAR_12, VAR_11->bi_iter.bi_sector,
     FUNC_4(VAR_11), VAR_5))
   VAR_13 = 1;
  if (FUNC_7(VAR_12, VAR_7)) {
   FUNC_0(VAR_12, VAR_11->bi_iter.bi_sector,
       VAR_7);
   VAR_13 = 1;
  }
  if (FUNC_7(VAR_12, VAR_8))
   VAR_13 = 1;
 } else {

  if (FUNC_8(VAR_12, VAR_11->bi_iter.bi_sector,
     FUNC_4(VAR_11), VAR_1))
   VAR_13 = 1;
  if (FUNC_7(VAR_12, VAR_4))
   VAR_13 = 1;
  if (FUNC_7(VAR_12, VAR_3)) {
   FUNC_0(VAR_12, VAR_11->bi_iter.bi_sector,
       VAR_3);
   VAR_13 = 1;
  }
  if (FUNC_7(VAR_12, VAR_2)) {
   FUNC_0(VAR_12, VAR_11->bi_iter.bi_sector,
       VAR_2);
   VAR_13 = 1;
  }
 }
 if (VAR_13) {
  struct bio *VAR_14 = FUNC_2(VAR_11, VAR_0, &VAR_10->bio_set);

  FUNC_6(VAR_14, VAR_12->rdev->bdev);
  VAR_14->bi_private = VAR_11;
  VAR_14->bi_end_io = VAR_9;
  VAR_11 = VAR_14;
 } else
  FUNC_6(VAR_11, VAR_12->rdev->bdev);

 FUNC_9(VAR_11);
 return 1;
}
