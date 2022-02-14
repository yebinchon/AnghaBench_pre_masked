
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datalink {scalar_t__ state; TYPE_1__* physical; struct datalink* next; } ;
struct bundle {scalar_t__ phase; struct datalink* links; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;

int
FUNC_0(struct bundle *VAR_3)
{
  struct datalink *VAR_4;
  int VAR_5, VAR_6;

  if (VAR_3->phase == VAR_1) {
    for (VAR_5 = VAR_6 = 0, VAR_4 = VAR_3->links; VAR_4; VAR_4 = VAR_4->next)
      if (VAR_4->physical->type == VAR_2) {
        if (++VAR_5 == 2 || (VAR_5 == 1 && VAR_6))

          return 1;
      } else if (VAR_4->state == VAR_0) {
        VAR_6++;
        if (VAR_5)

          return 1;
      }
  }

  return 0;
}
