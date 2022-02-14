
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {scalar_t__ rq_disk; scalar_t__ write_hint; scalar_t__ ioprio; int bio; int q; } ;
struct bio {scalar_t__ bi_disk; scalar_t__ bi_write_hint; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*) ;
 scalar_t__ FUNC_2 (struct bio*) ;
 scalar_t__ FUNC_3 (struct bio*) ;
 int FUNC_4 (int ,struct request*,struct bio*) ;
 int FUNC_5 (int ,struct bio*) ;
 scalar_t__ FUNC_6 (struct request*) ;
 scalar_t__ FUNC_7 (struct request*) ;
 int FUNC_8 (struct request*) ;

bool FUNC_9(struct request *VAR_1, struct bio *VAR_2)
{
 if (!FUNC_8(VAR_1) || !FUNC_1(VAR_2))
  return 0;

 if (FUNC_6(VAR_1) != FUNC_2(VAR_2))
  return 0;


 if (FUNC_0(VAR_2) != FUNC_7(VAR_1))
  return 0;


 if (VAR_1->rq_disk != VAR_2->bi_disk)
  return 0;


 if (FUNC_4(VAR_1->q, VAR_1, VAR_2) == 0)
  return 0;


 if (FUNC_6(VAR_1) == VAR_0 &&
     !FUNC_5(VAR_1->bio, VAR_2))
  return 0;





 if (VAR_1->write_hint != VAR_2->bi_write_hint)
  return 0;

 if (VAR_1->ioprio != FUNC_3(VAR_2))
  return 0;

 return 1;
}
