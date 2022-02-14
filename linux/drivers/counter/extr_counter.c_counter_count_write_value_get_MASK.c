
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_count_write_value {int buf; } ;
typedef enum counter_count_value_type { ____Placeholder_counter_count_value_type } counter_count_value_type ;



 int FUNC_0 (int ,int ,void* const) ;

int FUNC_1(void *const VAR_0,
      const enum counter_count_value_type VAR_1,
      const struct counter_count_write_value *const VAR_2)
{
 int VAR_3;

 switch (VAR_1) {
 case 128:
  VAR_3 = FUNC_0(VAR_2->buf, 0, VAR_0);
  if (VAR_3)
   return VAR_3;
  break;
 }

 return 0;
}
