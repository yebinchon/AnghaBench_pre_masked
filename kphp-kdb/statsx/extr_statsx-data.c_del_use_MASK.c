
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct counter {TYPE_2__* prev_use; TYPE_1__* next_use; } ;
struct TYPE_4__ {TYPE_1__* next_use; } ;
struct TYPE_3__ {TYPE_2__* prev_use; } ;



__attribute__((used)) static void FUNC_0 (struct counter *VAR_0) {
  if (VAR_0->prev_use && VAR_0->next_use) {
    VAR_0->next_use->prev_use = VAR_0->prev_use;
    VAR_0->prev_use->next_use = VAR_0->next_use;
    VAR_0->next_use = 0;
    VAR_0->prev_use = 0;
  }
}
