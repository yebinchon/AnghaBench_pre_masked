
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_fail_time; scalar_t__ sequential_fails; int fails; int success; } ;
typedef TYPE_1__ stat_read_t ;


 int VAR_0 ;

void FUNC_0 (stat_read_t *VAR_1, int VAR_2) {
  if (VAR_2) {
    VAR_1->success++;
    VAR_1->sequential_fails = 0;
  } else {
    VAR_1->fails++;
    VAR_1->sequential_fails++;
    VAR_1->last_fail_time = VAR_0;
  }
}
