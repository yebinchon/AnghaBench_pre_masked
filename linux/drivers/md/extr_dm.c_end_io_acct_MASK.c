
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int wait; int stats; int queue; } ;
struct dm_io {unsigned long start_time; int stats_aux; struct bio* orig_bio; struct mapped_device* md; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int part0; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 TYPE_2__* FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *,int ,int ,int ,int,unsigned long,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int *,unsigned long) ;
 unsigned long VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct dm_io *VAR_1)
{
 struct mapped_device *VAR_2 = VAR_1->md;
 struct bio *VAR_3 = VAR_1->orig_bio;
 unsigned long VAR_4 = VAR_0 - VAR_1->start_time;

 FUNC_6(VAR_2->queue, FUNC_1(VAR_3), &FUNC_3(VAR_2)->part0,
       VAR_1->start_time);

 if (FUNC_7(FUNC_5(&VAR_2->stats)))
  FUNC_4(&VAR_2->stats, FUNC_0(VAR_3),
        VAR_3->bi_iter.bi_sector, FUNC_2(VAR_3),
        1, VAR_4, &VAR_1->stats_aux);


 if (FUNC_7(FUNC_9(&VAR_2->wait)))
  FUNC_8(&VAR_2->wait);
}
