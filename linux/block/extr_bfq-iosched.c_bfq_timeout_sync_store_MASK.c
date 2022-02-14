
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct bfq_data* elevator_data; } ;
struct bfq_data {scalar_t__ bfq_user_max_budget; int bfq_max_budget; int bfq_timeout; } ;
typedef int ssize_t ;


 unsigned long VAR_0 ;
 int FUNC_0 (struct bfq_data*) ;
 int FUNC_1 (unsigned long*,char const*) ;
 int FUNC_2 (unsigned long) ;

__attribute__((used)) static ssize_t FUNC_3(struct elevator_queue *VAR_1,
          const char *VAR_2, size_t VAR_3)
{
 struct bfq_data *VAR_4 = VAR_1->elevator_data;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_1(&VAR_5, (VAR_2));
 if (VAR_6)
  return VAR_6;

 if (VAR_5 < 1)
  VAR_5 = 1;
 else if (VAR_5 > VAR_0)
  VAR_5 = VAR_0;

 VAR_4->bfq_timeout = FUNC_2(VAR_5);
 if (VAR_4->bfq_user_max_budget == 0)
  VAR_4->bfq_max_budget = FUNC_0(VAR_4);

 return VAR_3;
}
