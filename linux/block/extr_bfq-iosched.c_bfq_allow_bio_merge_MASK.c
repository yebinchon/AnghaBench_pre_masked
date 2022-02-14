
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct request {int dummy; } ;
struct bio {int bi_opf; } ;
struct bfq_queue {int dummy; } ;
struct bfq_data {struct bfq_queue* bio_bfqq; int bio_bic; } ;
struct TYPE_2__ {struct bfq_data* elevator_data; } ;


 struct bfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (struct bfq_data*,int ,struct bfq_queue*,struct bfq_queue*) ;
 struct bfq_queue* FUNC_2 (struct bfq_data*,struct bfq_queue*,struct bio*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct request*) ;

__attribute__((used)) static bool FUNC_5(struct request_queue *VAR_0, struct request *VAR_1,
    struct bio *VAR_2)
{
 struct bfq_data *VAR_3 = VAR_0->elevator->elevator_data;
 bool VAR_4 = FUNC_3(VAR_2->bi_opf);
 struct bfq_queue *VAR_5 = VAR_3->bio_bfqq, *VAR_6;




 if (VAR_4 && !FUNC_4(VAR_1))
  return 0;





 if (!VAR_5)
  return 0;





 VAR_6 = FUNC_2(VAR_3, VAR_5, VAR_2, 0);
 if (VAR_6) {







  FUNC_1(VAR_3, VAR_3->bio_bic, VAR_5,
    VAR_6);





  VAR_5 = VAR_6;







  VAR_3->bio_bfqq = VAR_5;
 }

 return VAR_5 == FUNC_0(VAR_1);
}
