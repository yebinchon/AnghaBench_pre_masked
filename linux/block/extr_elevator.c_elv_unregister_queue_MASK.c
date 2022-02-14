
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; } ;
struct elevator_queue {scalar_t__ registered; int kobj; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (struct request_queue*) ;

void FUNC_3(struct request_queue *VAR_1)
{
 if (VAR_1) {
  struct elevator_queue *VAR_2 = VAR_1->elevator;

  FUNC_1(&VAR_2->kobj, VAR_0);
  FUNC_0(&VAR_2->kobj);

  VAR_2->registered = 0;

  FUNC_2(VAR_1);
 }
}
