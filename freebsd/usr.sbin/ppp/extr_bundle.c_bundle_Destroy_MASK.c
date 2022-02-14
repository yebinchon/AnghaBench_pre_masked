
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct datalink {int dummy; } ;
struct TYPE_8__ {int fd; } ;
struct TYPE_9__ {int mp; } ;
struct TYPE_7__ {int timer; } ;
struct TYPE_6__ {int timer; } ;
struct bundle {int * iface; TYPE_3__ dev; TYPE_4__ ncp; struct datalink* links; int radius; TYPE_2__ choked; TYPE_1__ idle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct bundle*,int ) ;
 int FUNC_2 (struct bundle*) ;
 int FUNC_3 (int ) ;
 struct datalink* FUNC_4 (struct datalink*) ;
 int FUNC_5 (int *,TYPE_4__*,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void
FUNC_11(struct bundle *VAR_2)
{
  struct datalink *VAR_3;






  FUNC_10(&VAR_2->idle.timer);
  FUNC_10(&VAR_2->choked.timer);
  FUNC_7(&VAR_2->ncp.mp);
  FUNC_5(VAR_2->iface, &VAR_2->ncp, 0, VAR_1);
  FUNC_0(VAR_2);



  FUNC_9(&VAR_2->radius);



  VAR_3 = VAR_2->links;
  while (VAR_3)
    VAR_3 = FUNC_4(VAR_3);

  FUNC_8(&VAR_2->ncp);

  FUNC_3(VAR_2->dev.fd);
  FUNC_2(VAR_2);


  FUNC_1(VAR_2, VAR_0);

  FUNC_6(VAR_2->iface);
  VAR_2->iface = ((void*)0);
}
