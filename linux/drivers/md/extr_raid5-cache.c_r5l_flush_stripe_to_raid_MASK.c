
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int bi_opf; int bi_end_io; } ;
struct r5l_log {TYPE_2__ flush_bio; TYPE_1__* rdev; int io_list_lock; int flushing_ios; int io_end_ios; int need_cache_flush; } ;
struct TYPE_5__ {int bdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_2__*) ;

void FUNC_7(struct r5l_log *VAR_3)
{
 bool VAR_4;

 if (!VAR_3 || !VAR_3->need_cache_flush)
  return;

 FUNC_4(&VAR_3->io_list_lock);

 if (!FUNC_2(&VAR_3->flushing_ios)) {
  FUNC_5(&VAR_3->io_list_lock);
  return;
 }
 FUNC_3(&VAR_3->io_end_ios, &VAR_3->flushing_ios);
 VAR_4 = !FUNC_2(&VAR_3->flushing_ios);
 FUNC_5(&VAR_3->io_list_lock);

 if (!VAR_4)
  return;
 FUNC_0(&VAR_3->flush_bio);
 FUNC_1(&VAR_3->flush_bio, VAR_3->rdev->bdev);
 VAR_3->flush_bio.bi_end_io = VAR_2;
 VAR_3->flush_bio.bi_opf = VAR_0 | VAR_1;
 FUNC_6(&VAR_3->flush_bio);
}
