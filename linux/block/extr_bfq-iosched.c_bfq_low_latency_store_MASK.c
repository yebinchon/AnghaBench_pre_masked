
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct bfq_data* elevator_data; } ;
struct bfq_data {scalar_t__ low_latency; } ;
typedef int ssize_t ;


 int FUNC_0 (struct bfq_data*) ;
 int FUNC_1 (unsigned long*,char const*) ;

__attribute__((used)) static ssize_t FUNC_2(struct elevator_queue *VAR_0,
         const char *VAR_1, size_t VAR_2)
{
 struct bfq_data *VAR_3 = VAR_0->elevator_data;
 unsigned long VAR_4;
 int VAR_5;

 VAR_5 = FUNC_1(&VAR_4, (VAR_1));
 if (VAR_5)
  return VAR_5;

 if (VAR_4 > 1)
  VAR_4 = 1;
 if (VAR_4 == 0 && VAR_3->low_latency != 0)
  FUNC_0(VAR_3);
 VAR_3->low_latency = VAR_4;

 return VAR_2;
}
