
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datalink {scalar_t__ state; struct datalink* next; TYPE_1__* physical; } ;
struct bundle {struct datalink* links; } ;
struct TYPE_2__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bundle*) ;
 struct datalink* FUNC_1 (struct datalink*) ;

void
FUNC_2(struct bundle *VAR_4)
{
  struct datalink **VAR_5 = &VAR_4->links;
  int VAR_6 = 0;

  while (*VAR_5)
    if ((*VAR_5)->state == VAR_0 &&
        (*VAR_5)->physical->type &
        (VAR_2|VAR_1|VAR_3)) {
      *VAR_5 = FUNC_1(*VAR_5);
      VAR_6++;
    } else
      VAR_5 = &(*VAR_5)->next;

  if (VAR_6)
    FUNC_0(VAR_4);
}
