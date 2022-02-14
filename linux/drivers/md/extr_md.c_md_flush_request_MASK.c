
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mddev {TYPE_2__* pers; int flush_work; int lock; struct bio* flush_bio; int last_flush; int sb_wait; } ;
struct TYPE_3__ {scalar_t__ bi_size; } ;
struct bio {int bi_opf; TYPE_1__ bi_iter; } ;
typedef int ktime_t ;
struct TYPE_4__ {int (* make_request ) (struct mddev*,struct bio*) ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bio*) ;
 int FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int VAR_1 ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct mddev*,struct bio*) ;
 int VAR_2 ;
 int FUNC_9 (int ,int,int ) ;

void FUNC_10(struct mddev *VAR_3, struct bio *VAR_4)
{
 ktime_t VAR_5 = FUNC_4();
 FUNC_6(&VAR_3->lock);
 FUNC_9(VAR_3->sb_wait,
       !VAR_3->flush_bio ||
       FUNC_3(VAR_3->last_flush, VAR_5),
       VAR_3->lock);
 if (!FUNC_3(VAR_3->last_flush, VAR_5)) {
  FUNC_1(VAR_3->flush_bio);
  VAR_3->flush_bio = VAR_4;
  VAR_4 = ((void*)0);
 }
 FUNC_7(&VAR_3->lock);

 if (!VAR_4) {
  FUNC_0(&VAR_3->flush_work, VAR_2);
  FUNC_5(VAR_1, &VAR_3->flush_work);
 } else {

  if (VAR_4->bi_iter.bi_size == 0)

   FUNC_2(VAR_4);
  else {
   VAR_4->bi_opf &= ~VAR_0;
   VAR_3->pers->make_request(VAR_3, VAR_4);
  }
 }
}
