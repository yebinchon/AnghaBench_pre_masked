
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct sticky_route {int type; struct ncpaddr gw; int dst; struct sticky_route* next; } ;
struct TYPE_6__ {TYPE_1__* dns; } ;
struct TYPE_7__ {TYPE_2__ ns; } ;
struct TYPE_8__ {TYPE_3__ ipcp; } ;
struct bundle {TYPE_4__ ncp; } ;
struct TYPE_5__ {scalar_t__ s_addr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct ncpaddr*,struct ncpaddr const*) ;
 int FUNC_1 (struct ncpaddr*,struct ncpaddr const*) ;
 scalar_t__ FUNC_2 (struct ncpaddr const*) ;
 int FUNC_3 (int *,struct ncpaddr*) ;
 int FUNC_4 (int *,struct ncpaddr const*) ;
 int FUNC_5 (struct bundle*,int ,int *,struct ncpaddr*,int,int ) ;

void
FUNC_6(struct bundle *VAR_13, struct sticky_route *VAR_14,
             const struct ncpaddr *VAR_15, const struct ncpaddr *VAR_16)
{
  struct ncpaddr VAR_17;

  for (; VAR_14; VAR_14 = VAR_14->next) {
    FUNC_3(&VAR_14->dst, &VAR_17);
    if (FUNC_2(VAR_15) == VAR_0) {
      if ((VAR_14->type & VAR_7) && !FUNC_1(&VAR_17, VAR_15)) {
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        FUNC_4(&VAR_14->dst, VAR_15);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_5) && !FUNC_1(&VAR_17, VAR_16)) {
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        FUNC_4(&VAR_14->dst, VAR_16);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_3) && !FUNC_1(&VAR_17, VAR_16)) {
        if (VAR_13->ncp.ipcp.ns.dns[0].s_addr == VAR_2)
          continue;
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_4) && !FUNC_1(&VAR_17, VAR_16)) {
        if (VAR_13->ncp.ipcp.ns.dns[1].s_addr == VAR_2)
          continue;
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_9) && !FUNC_1(&VAR_14->gw, VAR_16))
        FUNC_0(&VAR_14->gw, VAR_16);

    } else if (FUNC_2(VAR_15) == VAR_1) {
      if ((VAR_14->type & VAR_8) && !FUNC_1(&VAR_17, VAR_15)) {
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        FUNC_4(&VAR_14->dst, VAR_15);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_6) && !FUNC_1(&VAR_17, VAR_16)) {
        FUNC_5(VAR_13, VAR_12, &VAR_14->dst, ((void*)0), 1, 0);
        FUNC_4(&VAR_14->dst, VAR_16);
        if (VAR_14->type & VAR_9)
          FUNC_0(&VAR_14->gw, VAR_16);
      } else if ((VAR_14->type & VAR_10) && !FUNC_1(&VAR_14->gw, VAR_16))
        FUNC_0(&VAR_14->gw, VAR_16);

    }
    FUNC_5(VAR_13, VAR_11, &VAR_14->dst, &VAR_14->gw, 1, 0);
  }
}
