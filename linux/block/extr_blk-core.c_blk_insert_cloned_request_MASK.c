
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int dummy; } ;
struct request {TYPE_1__* rq_disk; } ;
typedef int blk_status_t ;
struct TYPE_2__ {int part0; } ;


 int VAR_0 ;
 int FUNC_0 (struct request*,int) ;
 scalar_t__ FUNC_1 (struct request_queue*,struct request*) ;
 int FUNC_2 (struct request*,int) ;
 scalar_t__ FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct request*) ;
 scalar_t__ FUNC_5 (int *,int ) ;

blk_status_t FUNC_6(struct request_queue *VAR_1, struct request *VAR_2)
{
 if (FUNC_1(VAR_1, VAR_2))
  return VAR_0;

 if (VAR_2->rq_disk &&
     FUNC_5(&VAR_2->rq_disk->part0, FUNC_4(VAR_2)))
  return VAR_0;

 if (FUNC_3(VAR_1))
  FUNC_0(VAR_2, 1);






 return FUNC_2(VAR_2, 1);
}
