
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct elevator_queue* elevator; } ;
struct kyber_queue_data {int dummy; } ;
struct elevator_type {int dummy; } ;
struct elevator_queue {struct kyber_queue_data* elevator_data; int kobj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct kyber_queue_data*) ;
 int FUNC_1 (struct kyber_queue_data*) ;
 int FUNC_2 (struct request_queue*) ;
 struct elevator_queue* FUNC_3 (struct request_queue*,struct elevator_type*) ;
 int FUNC_4 (int *) ;
 struct kyber_queue_data* FUNC_5 (struct request_queue*) ;

__attribute__((used)) static int FUNC_6(struct request_queue *VAR_1, struct elevator_type *VAR_2)
{
 struct kyber_queue_data *VAR_3;
 struct elevator_queue *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_2);
 if (!VAR_4)
  return -VAR_0;

 VAR_3 = FUNC_5(VAR_1);
 if (FUNC_0(VAR_3)) {
  FUNC_4(&VAR_4->kobj);
  return FUNC_1(VAR_3);
 }

 FUNC_2(VAR_1);

 VAR_4->elevator_data = VAR_3;
 VAR_1->elevator = VAR_4;

 return 0;
}
