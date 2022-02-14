
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsm {int proto; } ;
struct datalink {scalar_t__ state; struct datalink* next; } ;
struct TYPE_2__ {int mp; } ;
struct bundle {TYPE_1__ ncp; struct datalink* links; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bundle*,int ) ;
 scalar_t__ FUNC_1 (struct bundle*) ;
 int FUNC_2 (struct datalink*,int ) ;
 int FUNC_3 (struct fsm*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4, struct fsm *VAR_5)
{






  struct bundle *VAR_6 = (struct bundle *)VAR_4;
  struct datalink *VAR_7;

  if (FUNC_4(VAR_5->proto) && !FUNC_6(&VAR_6->ncp)) {
    if (FUNC_1(VAR_6) != VAR_2)
      FUNC_0(VAR_6, VAR_3);
    for (VAR_7 = VAR_6->links; VAR_7; VAR_7 = VAR_7->next)
      if (VAR_7->state == VAR_1)
        FUNC_2(VAR_7, VAR_0);
    FUNC_3(VAR_5);
    FUNC_5(&VAR_6->ncp.mp);
  }
}
