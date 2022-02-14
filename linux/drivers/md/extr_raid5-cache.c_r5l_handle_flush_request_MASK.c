
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct r5l_log {scalar_t__ r5c_journal_mode; int io_mutex; TYPE_2__* current_io; } ;
struct TYPE_3__ {scalar_t__ bi_size; } ;
struct bio {TYPE_1__ bi_iter; int bi_opf; } ;
struct TYPE_4__ {int has_flush; int has_null_flush; int pending_stripe; int flush_barriers; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (int *,struct bio*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct r5l_log*,int ) ;
 int FUNC_6 (struct r5l_log*) ;

int FUNC_7(struct r5l_log *VAR_3, struct bio *VAR_4)
{
 if (VAR_3->r5c_journal_mode == VAR_1) {







  if (VAR_4->bi_iter.bi_size == 0) {
   FUNC_1(VAR_4);
   return 0;
  }
  VAR_4->bi_opf &= ~VAR_2;
 } else {

  if (VAR_4->bi_iter.bi_size == 0) {
   FUNC_3(&VAR_3->io_mutex);
   FUNC_5(VAR_3, 0);
   FUNC_2(&VAR_3->current_io->flush_barriers, VAR_4);
   VAR_3->current_io->has_flush = 1;
   VAR_3->current_io->has_null_flush = 1;
   FUNC_0(&VAR_3->current_io->pending_stripe);
   FUNC_6(VAR_3);
   FUNC_4(&VAR_3->io_mutex);
   return 0;
  }
 }
 return -VAR_0;
}
