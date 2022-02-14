
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; } ;
struct request {int rq_flags; int hash; } ;
struct elevator_queue {int hash; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct request*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *,int ) ;
 int FUNC_3 (struct request*) ;

void FUNC_4(struct request_queue *VAR_1, struct request *VAR_2)
{
 struct elevator_queue *VAR_3 = VAR_1->elevator;

 FUNC_0(FUNC_1(VAR_2));
 FUNC_2(VAR_3->hash, &VAR_2->hash, FUNC_3(VAR_2));
 VAR_2->rq_flags |= VAR_0;
}
