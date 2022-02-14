
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct regmap_range_node {unsigned int range_min; unsigned int window_len; unsigned int range_max; unsigned int window_start; unsigned int selector_reg; unsigned int selector_shift; int selector_mask; } ;
struct regmap {void* work_buf; void* selector_work_buf; } ;


 int VAR_0 ;
 int FUNC_0 (struct regmap*,unsigned int,int ,unsigned int,int*,int) ;

__attribute__((used)) static int FUNC_1(struct regmap *VAR_1, unsigned int *VAR_2,
          struct regmap_range_node *VAR_3,
          unsigned int VAR_4)
{
 void *VAR_5;
 unsigned int VAR_6;
 unsigned int VAR_7;
 bool VAR_8;
 int VAR_9;

 VAR_6 = (*VAR_2 - VAR_3->range_min) % VAR_3->window_len;
 VAR_7 = (*VAR_2 - VAR_3->range_min) / VAR_3->window_len;

 if (VAR_4 > 1) {

  if (*VAR_2 + VAR_4 - 1 > VAR_3->range_max)
   return -VAR_0;


  if (VAR_4 > VAR_3->window_len - VAR_6)
   return -VAR_0;
 }




 if (VAR_4 > 1 ||
     VAR_3->window_start + VAR_6 != VAR_3->selector_reg) {

  VAR_5 = VAR_1->work_buf;
  VAR_1->work_buf = VAR_1->selector_work_buf;

  VAR_9 = FUNC_0(VAR_1, VAR_3->selector_reg,
       VAR_3->selector_mask,
       VAR_7 << VAR_3->selector_shift,
       &VAR_8, 0);

  VAR_1->work_buf = VAR_5;

  if (VAR_9 != 0)
   return VAR_9;
 }

 *VAR_2 = VAR_3->window_start + VAR_6;

 return 0;
}
