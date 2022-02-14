
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int nr_hw_queues; } ;
struct elevator_type {int dummy; } ;


 struct elevator_type* FUNC_0 (struct request_queue*,char*,int) ;

__attribute__((used)) static struct elevator_type *FUNC_1(struct request_queue *VAR_0)
{
 if (VAR_0->nr_hw_queues != 1)
  return ((void*)0);

 return FUNC_0(VAR_0, "mq-deadline", 0);
}
