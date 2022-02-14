
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct request {scalar_t__ fifo_time; int queuelist; } ;


 int FUNC_0 (struct request_queue*,struct request*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0, struct request *VAR_1,
          struct request *VAR_2)
{




 if (!FUNC_1(&VAR_1->queuelist) && !FUNC_1(&VAR_2->queuelist)) {
  if (FUNC_3((unsigned long)VAR_2->fifo_time,
    (unsigned long)VAR_1->fifo_time)) {
   FUNC_2(&VAR_1->queuelist, &VAR_2->queuelist);
   VAR_1->fifo_time = VAR_2->fifo_time;
  }
 }




 FUNC_0(VAR_0, VAR_2);
}
