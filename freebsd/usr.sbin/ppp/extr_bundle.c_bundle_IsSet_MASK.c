
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct fdescriptor {int dummy; } ;
struct datalink {int desc; struct datalink* next; } ;
struct TYPE_9__ {int fd; } ;
struct TYPE_6__ {int desc; } ;
struct TYPE_7__ {TYPE_1__ server; } ;
struct TYPE_8__ {TYPE_2__ mp; } ;
struct TYPE_10__ {int desc; } ;
struct bundle {TYPE_4__ dev; TYPE_3__ ncp; TYPE_5__ radius; struct datalink* links; } ;
typedef int fd_set ;


 int FUNC_0 (int ,int const*) ;
 struct bundle* FUNC_1 (struct fdescriptor*) ;
 scalar_t__ FUNC_2 (int *,int const*) ;

__attribute__((used)) static int
FUNC_3(struct fdescriptor *VAR_0, const fd_set *VAR_1)
{
  struct bundle *VAR_2 = FUNC_1(VAR_0);
  struct datalink *VAR_3;

  for (VAR_3 = VAR_2->links; VAR_3; VAR_3 = VAR_3->next)
    if (FUNC_2(&VAR_3->desc, VAR_1))
      return 1;


  if (FUNC_2(&VAR_2->radius.desc, VAR_1))
    return 1;


  if (FUNC_2(&VAR_2->ncp.mp.server.desc, VAR_1))
    return 1;

  return FUNC_0(VAR_2->dev.fd, VAR_1);
}
