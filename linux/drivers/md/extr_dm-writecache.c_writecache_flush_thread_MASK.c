
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dm_writecache {TYPE_2__* dev; int flush_list; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {int bi_status; TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int bdev; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 struct bio* FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (struct bio*,int ) ;
 int FUNC_5 (struct bio*) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (struct dm_writecache*) ;
 int FUNC_11 (struct dm_writecache*) ;
 int FUNC_12 (struct dm_writecache*,int ,int ) ;
 int FUNC_13 (struct dm_writecache*) ;
 scalar_t__ FUNC_14 (struct dm_writecache*) ;

__attribute__((used)) static int FUNC_15(void *VAR_4)
{
 struct dm_writecache *VAR_5 = VAR_4;

 while (1) {
  struct bio *VAR_6;

  FUNC_10(VAR_5);
  VAR_6 = FUNC_2(&VAR_5->flush_list);
  if (!VAR_6) {
   FUNC_8(VAR_2);
   FUNC_11(VAR_5);

   if (FUNC_9(FUNC_6())) {
    FUNC_8(VAR_3);
    break;
   }

   FUNC_7();
   continue;
  }

  if (FUNC_3(VAR_6) == VAR_1) {
   FUNC_12(VAR_5, VAR_6->bi_iter.bi_sector,
        FUNC_0(VAR_6));
   FUNC_11(VAR_5);
   FUNC_4(VAR_6, VAR_5->dev->bdev);
   FUNC_5(VAR_6);
  } else {
   FUNC_13(VAR_5);
   FUNC_11(VAR_5);
   if (FUNC_14(VAR_5))
    VAR_6->bi_status = VAR_0;
   FUNC_1(VAR_6);
  }
 }

 return 0;
}
