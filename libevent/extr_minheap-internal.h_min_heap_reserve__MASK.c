
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct event {int dummy; } ;
struct TYPE_3__ {size_t a; struct event** p; } ;
typedef TYPE_1__ min_heap_t ;


 scalar_t__ FUNC_0 (struct event**,size_t) ;

int FUNC_1(min_heap_t* VAR_0, size_t VAR_1)
{
 if (VAR_0->a < VAR_1)
 {
  struct event** VAR_2;
  size_t VAR_3 = VAR_0->a ? VAR_0->a * 2 : 8;
  if (VAR_3 < VAR_1)
   VAR_3 = VAR_1;
  if (!(VAR_2 = (struct event**)FUNC_0(VAR_0->p, VAR_3 * sizeof *VAR_2)))
   return -1;
  VAR_0->p = VAR_2;
  VAR_0->a = VAR_3;
 }
 return 0;
}
