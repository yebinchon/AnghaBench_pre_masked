
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datalink {struct datalink* next; } ;
struct TYPE_2__ {int mp; } ;
struct bundle {TYPE_1__ ncp; struct datalink* links; } ;


 int FUNC_0 (struct bundle*,struct datalink*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(struct bundle *VAR_0, struct datalink *VAR_1)
{
  struct datalink **VAR_2 = &VAR_0->links;

  while (*VAR_2)
    VAR_2 = &(*VAR_2)->next;

  *VAR_2 = VAR_1;
  VAR_1->next = ((void*)0);

  FUNC_0(VAR_0, VAR_1);
  FUNC_1(&VAR_0->ncp.mp);
}
