
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int n_sectors; int logical_sector; } ;
struct dm_integrity_io {int write; int bi_status; int work; TYPE_1__ range; struct dm_integrity_c* ic; int in_flight; } ;
struct dm_integrity_c {int wait_wq; } ;
struct bio {int bi_status; } ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*,int) ;
 int FUNC_3 (struct bio*) ;
 struct bio* FUNC_4 (struct dm_integrity_io*,int) ;
 int FUNC_5 (struct dm_integrity_c*,struct dm_integrity_io*) ;
 int VAR_1 ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (struct dm_integrity_c*,TYPE_1__*) ;
 int FUNC_9 (struct dm_integrity_c*) ;
 scalar_t__ FUNC_10 (int) ;

__attribute__((used)) static void FUNC_11(struct dm_integrity_io *VAR_2)
{
 if (FUNC_1(&VAR_2->in_flight)) {
  struct dm_integrity_c *VAR_3 = VAR_2->ic;
  struct bio *VAR_4;

  FUNC_8(VAR_3, &VAR_2->range);

  if (FUNC_10(VAR_2->write))
   FUNC_9(VAR_3);

  VAR_4 = FUNC_4(VAR_2, sizeof(struct dm_integrity_io));

  if (FUNC_10(VAR_2->bi_status) && !VAR_4->bi_status)
   VAR_4->bi_status = VAR_2->bi_status;
  if (FUNC_6(!VAR_4->bi_status) && FUNC_10(FUNC_3(VAR_4) != VAR_2->range.n_sectors)) {
   VAR_2->range.logical_sector += VAR_2->range.n_sectors;
   FUNC_2(VAR_4, VAR_2->range.n_sectors << VAR_0);
   FUNC_0(&VAR_2->work, VAR_1);
   FUNC_7(VAR_3->wait_wq, &VAR_2->work);
   return;
  }
  FUNC_5(VAR_3, VAR_2);
 }
}
