
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct r5conf {int wait_for_quiescent; int active_aligned_reads; int mddev; } ;
struct mddev {struct r5conf* private; } ;
struct md_rdev {struct mddev* mddev; } ;
struct bio {int * bi_next; int bi_status; struct bio* bi_private; } ;
typedef int blk_status_t ;


 int FUNC_0 (struct bio*,struct r5conf*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct bio*) ;
 int FUNC_3 (struct bio*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct md_rdev*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct bio *VAR_0)
{
 struct bio* VAR_1 = VAR_0->bi_private;
 struct mddev *VAR_2;
 struct r5conf *VAR_3;
 struct md_rdev *VAR_4;
 blk_status_t VAR_5 = VAR_0->bi_status;

 FUNC_3(VAR_0);

 VAR_4 = (void*)VAR_1->bi_next;
 VAR_1->bi_next = ((void*)0);
 VAR_2 = VAR_4->mddev;
 VAR_3 = VAR_2->private;

 FUNC_5(VAR_4, VAR_3->mddev);

 if (!VAR_5) {
  FUNC_2(VAR_1);
  if (FUNC_1(&VAR_3->active_aligned_reads))
   FUNC_6(&VAR_3->wait_for_quiescent);
  return;
 }

 FUNC_4("raid5_align_endio : io error...handing IO for a retry\n");

 FUNC_0(VAR_1, VAR_3);
}
