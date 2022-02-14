
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* next_used; TYPE_1__* prev_used; } ;
typedef TYPE_3__ user ;
struct TYPE_6__ {TYPE_1__* prev_used; } ;
struct TYPE_5__ {TYPE_2__* next_used; } ;



void FUNC_0 (user *VAR_0) {
  VAR_0->next_used->prev_used = VAR_0->prev_used;
  VAR_0->prev_used->next_used = VAR_0->next_used;
}
