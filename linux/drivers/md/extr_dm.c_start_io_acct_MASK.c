
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mapped_device {int stats; int queue; } ;
struct dm_io {int stats_aux; int start_time; struct bio* orig_bio; struct mapped_device* md; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int part0; } ;


 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 TYPE_2__* FUNC_3 (struct mapped_device*) ;
 int FUNC_4 (int *,int ,int ,int ,int,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ,int ,int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(struct dm_io *VAR_1)
{
 struct mapped_device *VAR_2 = VAR_1->md;
 struct bio *VAR_3 = VAR_1->orig_bio;

 VAR_1->start_time = VAR_0;

 FUNC_6(VAR_2->queue, FUNC_1(VAR_3), FUNC_2(VAR_3),
         &FUNC_3(VAR_2)->part0);

 if (FUNC_7(FUNC_5(&VAR_2->stats)))
  FUNC_4(&VAR_2->stats, FUNC_0(VAR_3),
        VAR_3->bi_iter.bi_sector, FUNC_2(VAR_3),
        0, 0, &VAR_1->stats_aux);
}
