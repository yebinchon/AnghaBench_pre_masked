
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kyber_queue_data {int cpu_latency; int * domain_tokens; int timer; } ;
struct elevator_queue {struct kyber_queue_data* elevator_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct kyber_queue_data*) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct elevator_queue *VAR_1)
{
 struct kyber_queue_data *VAR_2 = VAR_1->elevator_data;
 int VAR_3;

 FUNC_0(&VAR_2->timer);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++)
  FUNC_3(&VAR_2->domain_tokens[VAR_3]);
 FUNC_1(VAR_2->cpu_latency);
 FUNC_2(VAR_2);
}
