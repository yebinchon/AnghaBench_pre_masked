
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request_queue {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct request_queue*,unsigned long) ;
 unsigned long FUNC_1 (struct device*) ;

bool FUNC_2(struct request_queue *VAR_0,
           struct device *VAR_1)
{
 unsigned long VAR_2 = FUNC_1(VAR_1);

 if (!VAR_2)
  return 0;


 FUNC_0(VAR_0, VAR_2);

 return 1;
}
