
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct deadline_data* elevator_data; } ;
struct deadline_data {int * fifo_list; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_1 (struct deadline_data*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct elevator_queue *VAR_2)
{
 struct deadline_data *VAR_3 = VAR_2->elevator_data;

 FUNC_0(!FUNC_2(&VAR_3->fifo_list[VAR_0]));
 FUNC_0(!FUNC_2(&VAR_3->fifo_list[VAR_1]));

 FUNC_1(VAR_3);
}
