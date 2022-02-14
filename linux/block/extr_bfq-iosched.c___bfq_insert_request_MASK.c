
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct bfq_queue** priv; } ;
struct request {int queuelist; scalar_t__ fifo_time; TYPE_1__ elv; } ;
struct bfq_queue {int fifo; int ref; int allocated; } ;
struct bfq_data {scalar_t__* bfq_fifo_expire; } ;


 struct bfq_queue* FUNC_0 (struct request*) ;
 int FUNC_1 (struct request*) ;
 int FUNC_2 (struct request*) ;
 scalar_t__ FUNC_3 (struct bfq_queue*) ;
 int FUNC_4 (struct bfq_queue*) ;
 int FUNC_5 (struct bfq_data*,int ,struct bfq_queue*,struct bfq_queue*) ;
 int FUNC_6 (struct bfq_queue*) ;
 int FUNC_7 (struct bfq_data*,struct bfq_queue*,struct request*) ;
 struct bfq_queue* FUNC_8 (struct bfq_data*,struct bfq_queue*,struct request*,int) ;
 int FUNC_9 (struct bfq_data*,struct bfq_queue*,int ) ;
 int FUNC_10 (struct bfq_data*,struct bfq_queue*,struct request*) ;
 int FUNC_11 (struct bfq_data*,struct bfq_queue*) ;
 struct bfq_queue* FUNC_12 (int ,int) ;
 scalar_t__ FUNC_13 () ;
 int FUNC_14 (int *,int *) ;
 size_t FUNC_15 (struct request*) ;

__attribute__((used)) static bool FUNC_16(struct bfq_data *VAR_0, struct request *VAR_1)
{
 struct bfq_queue *VAR_2 = FUNC_0(VAR_1),
  *VAR_3 = FUNC_8(VAR_0, VAR_2, VAR_1, 1);
 bool VAR_4, VAR_5 = 0;

 if (VAR_3) {




  VAR_3->allocated++;
  VAR_2->allocated--;
  VAR_3->ref++;
  if (FUNC_12(FUNC_1(VAR_1), 1) == VAR_2)
   FUNC_5(VAR_0, FUNC_1(VAR_1),
     VAR_2, VAR_3);

  FUNC_4(VAR_2);




  FUNC_6(VAR_2);
  VAR_1->elv.priv[1] = VAR_3;
  VAR_2 = VAR_3;
 }

 FUNC_11(VAR_0, VAR_2);
 FUNC_9(VAR_0, VAR_2, FUNC_1(VAR_1));
 FUNC_10(VAR_0, VAR_2, VAR_1);

 VAR_4 = VAR_2 && FUNC_3(VAR_2);
 FUNC_2(VAR_1);
 VAR_5 = VAR_4 && !FUNC_3(VAR_2);

 VAR_1->fifo_time = FUNC_13() + VAR_0->bfq_fifo_expire[FUNC_15(VAR_1)];
 FUNC_14(&VAR_1->queuelist, &VAR_2->fifo);

 FUNC_7(VAR_0, VAR_2, VAR_1);

 return VAR_5;
}
