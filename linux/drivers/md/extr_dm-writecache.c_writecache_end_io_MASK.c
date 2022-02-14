
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_writecache {int * bio_in_progress_wait; int * bio_in_progress; } ;
struct dm_target {struct dm_writecache* private; } ;
struct bio {int * bi_private; } ;
typedef int blk_status_t ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct dm_target *VAR_0, struct bio *VAR_1, blk_status_t *VAR_2)
{
 struct dm_writecache *VAR_3 = VAR_0->private;

 if (VAR_1->bi_private != ((void*)0)) {
  int VAR_4 = FUNC_1(VAR_1);
  if (FUNC_0(&VAR_3->bio_in_progress[VAR_4]))
   if (FUNC_2(FUNC_3(&VAR_3->bio_in_progress_wait[VAR_4])))
    FUNC_4(&VAR_3->bio_in_progress_wait[VAR_4]);
 }
 return 0;
}
