
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct datalink {TYPE_1__* physical; struct datalink* next; } ;
struct bundle {struct datalink* links; } ;
struct TYPE_2__ {int fd; } ;


 int VAR_0 ;
 int FUNC_0 (struct datalink*,int ) ;

int
FUNC_1(struct bundle *VAR_1, int VAR_2)
{
  struct datalink *VAR_3;

  for (VAR_3 = VAR_1->links; VAR_3; VAR_3 = VAR_3->next)
    if (VAR_3->physical->fd == VAR_2) {
      FUNC_0(VAR_3, VAR_0);
      return 1;
    }

  return 0;
}
