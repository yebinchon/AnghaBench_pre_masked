
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* next_time; TYPE_1__* prev_time; } ;
typedef TYPE_3__ wkey ;
struct TYPE_6__ {TYPE_1__* prev_time; } ;
struct TYPE_5__ {TYPE_2__* next_time; } ;



inline void FUNC_0 (wkey *VAR_0) {
  VAR_0->next_time->prev_time = VAR_0->prev_time;
  VAR_0->prev_time->next_time = VAR_0->next_time;
}
