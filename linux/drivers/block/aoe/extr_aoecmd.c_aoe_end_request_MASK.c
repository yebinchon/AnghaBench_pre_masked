
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {struct bio* bio; } ;
struct TYPE_3__ {int bi_size; } ;
struct bio {int bi_status; TYPE_1__ bi_iter; } ;
struct TYPE_4__ {struct request* rq; } ;
struct aoedev {TYPE_2__ ip; struct request_queue* blkq; } ;
typedef int blk_status_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct request*,int ) ;
 int FUNC_1 (struct request_queue*,int) ;
 scalar_t__ FUNC_2 (struct request*,int ,int ) ;

void
FUNC_3(struct aoedev *VAR_2, struct request *VAR_3, int VAR_4)
{
 struct bio *VAR_5;
 int VAR_6;
 struct request_queue *VAR_7;
 blk_status_t VAR_8 = VAR_1;

 VAR_7 = VAR_2->blkq;
 if (VAR_3 == VAR_2->ip.rq)
  VAR_2->ip.rq = ((void*)0);
 do {
  VAR_5 = VAR_3->bio;
  VAR_6 = !VAR_4 && !VAR_5->bi_status;
  if (!VAR_6)
   VAR_8 = VAR_0;
 } while (FUNC_2(VAR_3, VAR_6 ? VAR_1 : VAR_0, VAR_5->bi_iter.bi_size));

 FUNC_0(VAR_3, VAR_8);


 if (!VAR_4)
  FUNC_1(VAR_7, 1);
}
