
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct request_queue {TYPE_1__* elevator; } ;
struct TYPE_4__ {struct bfq_queue** priv; int icq; } ;
struct request {TYPE_2__ elv; struct bio* bio; struct request_queue* q; } ;
struct bio {int dummy; } ;
struct bfq_queue {int saved_in_large_burst; struct bfq_queue* bic; int ref; int allocated; } ;
struct bfq_io_cq {int saved_in_large_burst; struct bfq_io_cq* bic; int ref; int allocated; } ;
struct bfq_data {scalar_t__ burst_size; struct bfq_queue oom_bfqq; } ;
struct TYPE_3__ {struct bfq_data* elevator_data; } ;


 scalar_t__ FUNC_0 (struct bfq_queue*) ;
 scalar_t__ FUNC_1 (struct bfq_queue*) ;
 scalar_t__ FUNC_2 (struct bfq_queue*) ;
 int FUNC_3 (struct bfq_queue*,struct bfq_data*,struct bfq_queue*,int) ;
 scalar_t__ FUNC_4 (struct bfq_queue*) ;
 int FUNC_5 (struct bfq_queue*,struct bio*) ;
 int FUNC_6 (struct bfq_queue*,struct bio*) ;
 struct bfq_queue* FUNC_7 (struct bfq_data*,struct bfq_queue*,struct bio*,int,int const,int*) ;
 int FUNC_8 (struct bfq_data*,struct bfq_queue*) ;
 int FUNC_9 (struct bfq_data*,struct bfq_queue*,char*,...) ;
 struct bfq_queue* FUNC_10 (struct bfq_queue*,struct bfq_queue*) ;
 scalar_t__ FUNC_11 (struct bfq_data*) ;
 int FUNC_12 (struct bfq_queue*) ;
 struct bfq_queue* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (int) ;
 int FUNC_15 (struct request*) ;
 scalar_t__ FUNC_16 (int) ;

__attribute__((used)) static struct bfq_queue *FUNC_17(struct request *VAR_0)
{
 struct request_queue *VAR_1 = VAR_0->q;
 struct bio *VAR_2 = VAR_0->bio;
 struct bfq_data *VAR_3 = VAR_1->elevator->elevator_data;
 struct bfq_io_cq *VAR_4;
 const int VAR_5 = FUNC_15(VAR_0);
 struct bfq_queue *VAR_6;
 bool VAR_7 = 0;
 bool VAR_8 = 0, VAR_9 = 0;

 if (FUNC_16(!VAR_0->elv.icq))
  return ((void*)0);
 if (VAR_0->elv.priv[1])
  return VAR_0->elv.priv[1];

 VAR_4 = FUNC_13(VAR_0->elv.icq);

 FUNC_6(VAR_4, VAR_2);

 FUNC_5(VAR_4, VAR_2);

 VAR_6 = FUNC_7(VAR_3, VAR_4, VAR_2, 0, VAR_5,
      &VAR_7);

 if (FUNC_14(!VAR_7)) {

  if (FUNC_0(VAR_6) && FUNC_4(VAR_6)) {
   FUNC_9(VAR_3, VAR_6, "breaking apart bfqq");


   if (FUNC_1(VAR_6))
    VAR_4->saved_in_large_burst = 1;

   VAR_6 = FUNC_10(VAR_4, VAR_6);
   VAR_9 = 1;

   if (!VAR_6)
    VAR_6 = FUNC_7(VAR_3, VAR_4, VAR_2,
         1, VAR_5,
         ((void*)0));
   else
    VAR_8 = 1;
  }
 }

 VAR_6->allocated++;
 VAR_6->ref++;
 FUNC_9(VAR_3, VAR_6, "get_request %p: bfqq %p, %d",
       VAR_0, VAR_6, VAR_6->ref);

 VAR_0->elv.priv[0] = VAR_4;
 VAR_0->elv.priv[1] = VAR_6;







 if (FUNC_14(VAR_6 != &VAR_3->oom_bfqq) && FUNC_12(VAR_6) == 1) {
  VAR_6->bic = VAR_4;
  if (VAR_9) {





   FUNC_3(VAR_6, VAR_3, VAR_4,
           VAR_8);
  }
 }
 if (FUNC_16(FUNC_2(VAR_6) &&
       (VAR_3->burst_size > 0 ||
        FUNC_11(VAR_3) == 0)))
  FUNC_8(VAR_3, VAR_6);

 return VAR_6;
}
