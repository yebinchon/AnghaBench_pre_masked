
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {struct ace_device* queuedata; } ;
struct ace_device {int rq_list; } ;


 int FUNC_0 (int *) ;

__attribute__((used)) static bool FUNC_1(struct request_queue *VAR_0)
{
 struct ace_device *VAR_1 = VAR_0->queuedata;

 return !FUNC_0(&VAR_1->rq_list);
}
