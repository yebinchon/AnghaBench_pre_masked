
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct datalink {scalar_t__ state; TYPE_1__* physical; struct datalink* next; } ;
struct TYPE_5__ {scalar_t__ sessiontime; } ;
struct TYPE_6__ {int mp; } ;
struct bundle {TYPE_2__ radius; TYPE_3__ ncp; struct datalink* links; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*,int ) ;
 int FUNC_2 (struct bundle*) ;
 int FUNC_3 (struct bundle*) ;
 int FUNC_4 (struct datalink*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_3__*) ;

void
FUNC_7(struct bundle *VAR_3, struct datalink *VAR_4)
{
  struct datalink *VAR_5;
  int VAR_6;

  FUNC_4(VAR_4);

  VAR_6 = 0;
  for (VAR_5 = VAR_3->links; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5 != VAR_4 && VAR_5->state != VAR_0)
      VAR_6++;

  if (!VAR_6) {
    if (VAR_4->physical->type != VAR_2)
      FUNC_0(VAR_3);
    FUNC_6(&VAR_3->ncp);
    FUNC_5(&VAR_3->ncp.mp);
    FUNC_1(VAR_3, VAR_1);

    if (VAR_3->radius.sessiontime)
      FUNC_3(VAR_3);

    FUNC_2(VAR_3);
  }
}
