
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* data; struct TYPE_3__* next; } ;
typedef TYPE_1__ GSLList ;



int
FUNC_0 (GSLList * VAR_0, int (*VAR_1) (void *, void *), void *VAR_2)
{
  while (VAR_0) {
    if (VAR_1 (VAR_0->data, VAR_2) != 0)
      return -1;
    VAR_0 = VAR_0->next;
  }

  return 0;
}
