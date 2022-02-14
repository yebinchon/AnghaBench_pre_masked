
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct stripe_head {TYPE_2__* dev; } ;
struct r5conf {int retry_read_offset; int wait_for_quiescent; int active_aligned_reads; struct bio* retry_read_aligned; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
typedef int sector_t ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct stripe_head*,struct bio*,int,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (struct stripe_head*) ;
 int FUNC_5 (struct r5conf*,int,int ,int*,int *) ;
 struct stripe_head* FUNC_6 (struct r5conf*,int,int ,int,int) ;
 int FUNC_7 (struct stripe_head*) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct r5conf *VAR_2, struct bio *VAR_3,
          unsigned int VAR_4)
{
 struct stripe_head *VAR_5;
 int VAR_6;
 sector_t VAR_7, VAR_8, VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_8 = VAR_3->bi_iter.bi_sector &
  ~((sector_t)VAR_1-1);
 VAR_7 = FUNC_5(VAR_2, VAR_8,
          0, &VAR_6, ((void*)0));
 VAR_9 = FUNC_2(VAR_3);

 for (; VAR_8 < VAR_9;
      VAR_8 += VAR_1,
       VAR_7 += VAR_1,
       VAR_10++) {

  if (VAR_10 < VAR_4)

   continue;

  VAR_5 = FUNC_6(VAR_2, VAR_7, 0, 1, 1);

  if (!VAR_5) {

   VAR_2->retry_read_aligned = VAR_3;
   VAR_2->retry_read_offset = VAR_10;
   return VAR_11;
  }

  if (!FUNC_0(VAR_5, VAR_3, VAR_6, 0, 0)) {
   FUNC_7(VAR_5);
   VAR_2->retry_read_aligned = VAR_3;
   VAR_2->retry_read_offset = VAR_10;
   return VAR_11;
  }

  FUNC_8(VAR_0, &VAR_5->dev[VAR_6].flags);
  FUNC_4(VAR_5);
  FUNC_7(VAR_5);
  VAR_11++;
 }

 FUNC_3(VAR_3);

 if (FUNC_1(&VAR_2->active_aligned_reads))
  FUNC_9(&VAR_2->wait_for_quiescent);
 return VAR_11;
}
