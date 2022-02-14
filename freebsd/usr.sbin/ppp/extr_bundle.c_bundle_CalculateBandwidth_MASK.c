
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


struct TYPE_12__ {int bandwidth; } ;
struct datalink {scalar_t__ state; scalar_t__ name; TYPE_10__* physical; TYPE_1__ mp; struct datalink* next; } ;
struct TYPE_19__ {scalar_t__ mtu; scalar_t__ valid; } ;
struct TYPE_16__ {int ccp; } ;
struct TYPE_17__ {scalar_t__ peer_mrru; TYPE_5__ link; scalar_t__ active; } ;
struct TYPE_18__ {TYPE_6__ mp; } ;
struct bundle {int bandwidth; TYPE_9__* iface; TYPE_8__ radius; TYPE_7__ ncp; struct datalink* links; } ;
struct TYPE_20__ {scalar_t__ mtu; } ;
struct TYPE_14__ {scalar_t__ his_mru; } ;
struct TYPE_15__ {TYPE_3__ lcp; int ccp; } ;
struct TYPE_13__ {scalar_t__ full; } ;
struct TYPE_11__ {TYPE_4__ link; TYPE_2__ name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,char*,scalar_t__,...) ;
 int FUNC_2 (TYPE_10__*) ;
 int FUNC_3 (struct bundle*) ;
 int FUNC_4 (struct bundle*) ;

void
FUNC_5(struct bundle *VAR_4)
{
  struct datalink *VAR_5;
  int VAR_6, VAR_7, VAR_8;

  VAR_4->bandwidth = 0;
  VAR_4->iface->mtu = 0;
  VAR_8 = 0;

  for (VAR_5 = VAR_4->links; VAR_5; VAR_5 = VAR_5->next) {
    VAR_7 = FUNC_0(&VAR_5->physical->link.ccp);
    if (VAR_8 < VAR_7)
      VAR_8 = VAR_7;
    if (VAR_5->state == VAR_0) {
      if ((VAR_6 = VAR_5->mp.bandwidth) == 0 &&
          (VAR_6 = FUNC_2(VAR_5->physical)) == 0)
        FUNC_1(VAR_2, "%s: %s: Cannot determine bandwidth\n",
                   VAR_5->name, VAR_5->physical->name.full);
      else
        VAR_4->bandwidth += VAR_6;
      if (!VAR_4->ncp.mp.active) {
        VAR_4->iface->mtu = VAR_5->physical->link.lcp.his_mru;
        break;
      }
    }
  }

  if (VAR_4->bandwidth == 0)
    VAR_4->bandwidth = 115200;

  if (VAR_4->ncp.mp.active) {
    VAR_4->iface->mtu = VAR_4->ncp.mp.peer_mrru;
    VAR_7 = FUNC_0(&VAR_4->ncp.mp.link.ccp);
    if (VAR_8 < VAR_7)
      VAR_8 = VAR_7;
  } else if (!VAR_4->iface->mtu)
    VAR_4->iface->mtu = VAR_1;


  if (VAR_4->radius.valid && VAR_4->radius.mtu &&
      VAR_4->radius.mtu < VAR_4->iface->mtu) {
    FUNC_1(VAR_3, "Reducing MTU to radius value %lu\n",
               VAR_4->radius.mtu);
    VAR_4->iface->mtu = VAR_4->radius.mtu;
  }


  if (VAR_8) {
    FUNC_1(VAR_3, "Reducing MTU from %lu to %lu (CCP requirement)\n",
               VAR_4->iface->mtu, VAR_4->iface->mtu - VAR_8);
    VAR_4->iface->mtu -= VAR_8;
  }

  FUNC_4(VAR_4);

  FUNC_3(VAR_4);
}
