
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {int (* make_request_fn ) (struct request_queue*,struct bio*) ;} ;
struct bio {int bi_opf; int bi_status; TYPE_1__* bi_disk; } ;
typedef int blk_qc_t ;
struct TYPE_2__ {struct request_queue* queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct request_queue*) ;
 int FUNC_2 (struct request_queue*,int ) ;
 int FUNC_3 (struct request_queue*) ;
 int FUNC_4 (struct bio*) ;
 int FUNC_5 (struct request_queue*,struct bio*) ;
 scalar_t__ FUNC_6 (int ) ;

blk_qc_t FUNC_7(struct bio *VAR_5)
{
 struct request_queue *VAR_6 = VAR_5->bi_disk->queue;
 bool VAR_7 = VAR_5->bi_opf & VAR_4;
 blk_qc_t VAR_8;

 if (!FUNC_4(VAR_5))
  return VAR_1;

 if (FUNC_6(FUNC_2(VAR_6, VAR_7 ? VAR_0 : 0))) {
  if (VAR_7 && !FUNC_1(VAR_6))
   VAR_5->bi_status = VAR_2;
  else
   VAR_5->bi_status = VAR_3;
  FUNC_0(VAR_5);
  return VAR_1;
 }

 VAR_8 = VAR_6->make_request_fn(VAR_6, VAR_5);
 FUNC_3(VAR_6);
 return VAR_8;
}
