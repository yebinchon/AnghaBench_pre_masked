
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; TYPE_1__* prev; } ;
typedef TYPE_2__ netbuffer_t ;
struct TYPE_4__ {int end; int wptr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;

int FUNC_1 (netbuffer_t *VAR_2) {
  FUNC_0 (VAR_2->state == VAR_1 || VAR_2->state == VAR_0);
  return VAR_2->prev->end - VAR_2->prev->wptr;
}
