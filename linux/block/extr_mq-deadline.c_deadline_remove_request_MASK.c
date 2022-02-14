
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct request_queue {struct request* last_merge; TYPE_1__* elevator; } ;
struct request {int rb_node; int queuelist; } ;
struct deadline_data {int dummy; } ;
struct TYPE_2__ {struct deadline_data* elevator_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct deadline_data*,struct request*) ;
 int FUNC_2 (struct request_queue*,struct request*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct request_queue *VAR_0, struct request *VAR_1)
{
 struct deadline_data *VAR_2 = VAR_0->elevator->elevator_data;

 FUNC_3(&VAR_1->queuelist);




 if (!FUNC_0(&VAR_1->rb_node))
  FUNC_1(VAR_2, VAR_1);

 FUNC_2(VAR_0, VAR_1);
 if (VAR_0->last_merge == VAR_1)
  VAR_0->last_merge = ((void*)0);
}
