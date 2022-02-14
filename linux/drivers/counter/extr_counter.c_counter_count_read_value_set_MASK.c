
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_count_read_value {int len; int buf; } ;
typedef enum counter_count_value_type { ____Placeholder_counter_count_value_type } counter_count_value_type ;



 int FUNC_0 (int ,char*,unsigned long) ;

void FUNC_1(struct counter_count_read_value *const VAR_0,
      const enum counter_count_value_type VAR_1,
      void *const VAR_2)
{
 switch (VAR_1) {
 case 128:
  VAR_0->len = FUNC_0(VAR_0->buf, "%lu\n", *(unsigned long *)VAR_2);
  break;
 default:
  VAR_0->len = 0;
 }
}
