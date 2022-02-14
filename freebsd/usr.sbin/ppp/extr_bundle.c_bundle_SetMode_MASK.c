
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct datalink {TYPE_4__* physical; } ;
struct TYPE_6__ {scalar_t__ s_addr; } ;
struct TYPE_10__ {TYPE_1__ peer_ip; } ;
struct TYPE_8__ {TYPE_5__ ipcp; } ;
struct TYPE_7__ {int all; } ;
struct bundle {scalar_t__ phase; TYPE_3__ ncp; TYPE_2__ phys_type; } ;
struct TYPE_9__ {int type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct bundle*) ;
 int FUNC_1 (struct datalink*,int) ;
 int FUNC_2 (TYPE_5__*) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (int) ;

int
FUNC_5(struct bundle *VAR_4, struct datalink *VAR_5, int VAR_6)
{
  int VAR_7;

  VAR_7 = VAR_5->physical->type;
  if (VAR_7 == VAR_6)
    return 1;

  if (VAR_6 == VAR_3 && !(VAR_4->phys_type.all & VAR_3))

    if (VAR_4->ncp.ipcp.peer_ip.s_addr == VAR_0) {
      FUNC_3(VAR_1, "You must `set ifaddr' or `open' before"
                 " changing mode to %s\n", FUNC_4(VAR_6));
      return 0;
    }

  if (!FUNC_1(VAR_5, VAR_6))
    return 0;

  if (VAR_6 == VAR_3 && !(VAR_4->phys_type.all & VAR_3) &&
      VAR_4->phase != VAR_2)

    FUNC_2(&VAR_4->ncp.ipcp);


  FUNC_0(VAR_4);

  return 1;
}
