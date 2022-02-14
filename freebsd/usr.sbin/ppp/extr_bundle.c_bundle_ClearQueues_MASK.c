
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datalink {int physical; struct datalink* next; } ;
struct TYPE_2__ {int timer; } ;
struct bundle {struct datalink* links; int ncp; TYPE_1__ choked; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
  struct bundle *VAR_2 = (struct bundle *)VAR_1;
  struct datalink *VAR_3;

  FUNC_0(VAR_0, "Clearing choked output queue\n");
  FUNC_3(&VAR_2->choked.timer);
  FUNC_1(&VAR_2->ncp);
  for (VAR_3 = VAR_2->links; VAR_3; VAR_3 = VAR_3->next)
    FUNC_2(VAR_3->physical);
}
