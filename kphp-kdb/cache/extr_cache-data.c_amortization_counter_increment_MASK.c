
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct time_amortization_table {int dummy; } ;
struct amortization_counter {void* last_update_time; int value; } ;


 scalar_t__ FUNC_0 (int) ;
 void* VAR_0 ;
 int FUNC_1 (struct time_amortization_table*,int) ;

void FUNC_2 (struct time_amortization_table *VAR_1, struct amortization_counter *VAR_2, int VAR_3) {
  int VAR_4 = VAR_0 - VAR_2->last_update_time;
  if (!VAR_4) {
    VAR_2->value += VAR_3;
    return;
  }
  if (FUNC_0(VAR_4 > 0)) {
    VAR_2->value *= FUNC_1 (VAR_1, VAR_4);
    VAR_2->last_update_time = VAR_0;
    VAR_2->value += VAR_3;
  } else {
    VAR_2->value += VAR_3 * FUNC_1 (VAR_1, -VAR_4);
  }
}
