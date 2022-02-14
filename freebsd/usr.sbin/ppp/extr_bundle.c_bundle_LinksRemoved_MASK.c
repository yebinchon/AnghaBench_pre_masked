
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct datalink {struct datalink* next; } ;
struct TYPE_5__ {scalar_t__ sessiontime; } ;
struct TYPE_6__ {int all; int open; } ;
struct TYPE_4__ {int mp; } ;
struct bundle {TYPE_2__ radius; TYPE_3__ phys_type; TYPE_1__ ncp; struct datalink* links; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*,struct datalink*) ;
 int FUNC_2 (struct bundle*) ;
 int FUNC_3 (struct bundle*) ;
 int FUNC_4 (int *) ;

void
FUNC_5(struct bundle *VAR_2)
{
  struct datalink *VAR_3;

  VAR_2->phys_type.all = VAR_2->phys_type.open = 0;
  for (VAR_3 = VAR_2->links; VAR_3; VAR_3 = VAR_3->next)
    FUNC_1(VAR_2, VAR_3);

  FUNC_0(VAR_2);
  FUNC_4(&VAR_2->ncp.mp);

  if ((VAR_2->phys_type.open & (VAR_1|VAR_0))
      == VAR_2->phys_type.open) {

    if (VAR_2->radius.sessiontime)
      FUNC_3(VAR_2);

    FUNC_2(VAR_2);
   }
}
