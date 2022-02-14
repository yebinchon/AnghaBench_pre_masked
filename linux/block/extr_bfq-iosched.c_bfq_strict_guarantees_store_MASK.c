
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct elevator_queue {struct bfq_data* elevator_data; } ;
struct bfq_data {unsigned long strict_guarantees; int bfq_slice_idle; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (unsigned long*,char const*) ;

__attribute__((used)) static ssize_t FUNC_1(struct elevator_queue *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct bfq_data *VAR_4 = VAR_1->elevator_data;
 unsigned long VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(&VAR_5, (VAR_2));
 if (VAR_6)
  return VAR_6;

 if (VAR_5 > 1)
  VAR_5 = 1;
 if (!VAR_4->strict_guarantees && VAR_5 == 1
     && VAR_4->bfq_slice_idle < 8 * VAR_0)
  VAR_4->bfq_slice_idle = 8 * VAR_0;

 VAR_4->strict_guarantees = VAR_5;

 return VAR_3;
}
