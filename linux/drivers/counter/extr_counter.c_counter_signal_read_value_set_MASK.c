
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct counter_signal_read_value {scalar_t__ len; int buf; } ;
typedef enum counter_signal_value_type { ____Placeholder_counter_signal_value_type } counter_signal_value_type ;
typedef enum counter_signal_level { ____Placeholder_counter_signal_level } counter_signal_level ;


 int const VAR_0 ;
 char** VAR_1 ;
 scalar_t__ FUNC_0 (int ,char*,char*) ;

void FUNC_1(struct counter_signal_read_value *const VAR_2,
       const enum counter_signal_value_type VAR_3,
       void *const VAR_4)
{
 if (VAR_3 == VAR_0)
  VAR_2->len = FUNC_0(VAR_2->buf, "%s\n",
       VAR_1[*(enum counter_signal_level *)VAR_4]);
 else
  VAR_2->len = 0;
}
