
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct TYPE_10__ {int s_addr; } ;
struct TYPE_7__ {struct bundle* bundle; } ;
struct ipcp {TYPE_4__ ifmask; TYPE_1__ fsm; } ;
struct in_addr {int s_addr; } ;
struct TYPE_9__ {int routes; scalar_t__ valid; } ;
struct TYPE_8__ {scalar_t__ sendpipe; scalar_t__ recvpipe; } ;
struct TYPE_11__ {int route; TYPE_2__ cfg; } ;
struct bundle {TYPE_3__ radius; TYPE_5__ ncp; int iface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bundle*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct in_addr FUNC_1 (struct in_addr) ;
 int FUNC_2 (int ,TYPE_5__*,struct ncprange*,struct ncpaddr*,int) ;
 int FUNC_3 (int ,TYPE_5__*,int ,int) ;
 int FUNC_4 (struct ncpaddr*,struct sockaddr_storage*) ;
 int FUNC_5 (struct ncpaddr*,struct in_addr) ;
 int FUNC_6 (struct ncprange*,struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_7 (struct ncprange*,struct ncpaddr*) ;
 int FUNC_8 (struct ncprange*,TYPE_4__) ;
 int FUNC_9 (struct bundle*,int ,struct ncpaddr*,struct ncpaddr*) ;
 int FUNC_10 (struct bundle*,struct sockaddr*,struct sockaddr*,struct sockaddr*,int *,int *) ;

__attribute__((used)) static int
FUNC_11(struct ipcp *VAR_8, struct in_addr VAR_9,
                  struct in_addr VAR_10)
{
  struct bundle *VAR_11 = VAR_8->fsm.bundle;
  struct ncpaddr VAR_12, VAR_13;
  struct ncprange VAR_14;
  struct in_addr VAR_15;
  struct sockaddr_storage VAR_16, VAR_17, VAR_18;
  struct sockaddr *VAR_19, *VAR_20, *VAR_21;

  VAR_19 = (struct sockaddr *)&VAR_16;
  VAR_20 = (struct sockaddr *)&VAR_17;
  VAR_21 = (struct sockaddr *)&VAR_18;

  FUNC_5(&VAR_13, VAR_10);
  FUNC_5(&VAR_12, VAR_9);
  FUNC_7(&VAR_14, &VAR_12);

  VAR_15 = FUNC_1(VAR_9);

  if (VAR_8->ifmask.s_addr != VAR_5 &&
      (VAR_8->ifmask.s_addr & VAR_15.s_addr) == VAR_15.s_addr)
    FUNC_8(&VAR_14, VAR_8->ifmask);

  if (!FUNC_2(VAR_11->iface, &VAR_11->ncp, &VAR_14, &VAR_13,
                 VAR_1|VAR_3|VAR_4))
    return 0;

  if (!FUNC_0(VAR_11, VAR_6))
    FUNC_3(VAR_11->iface, &VAR_11->ncp, VAR_0,
                VAR_2|VAR_4);

  if (VAR_11->ncp.cfg.sendpipe > 0 || VAR_11->ncp.cfg.recvpipe > 0) {
    FUNC_6(&VAR_14, &VAR_17, &VAR_18);
    FUNC_4(&VAR_13, &VAR_16);
    FUNC_10(VAR_11, VAR_19, VAR_20, VAR_21, ((void*)0), ((void*)0));
  }

  if (FUNC_0(VAR_11, VAR_7))
    FUNC_9(VAR_11, VAR_11->ncp.route, &VAR_12, &VAR_13);


  if (VAR_11->radius.valid)
    FUNC_9(VAR_11, VAR_11->radius.routes, &VAR_12, &VAR_13);


  return 1;
}
