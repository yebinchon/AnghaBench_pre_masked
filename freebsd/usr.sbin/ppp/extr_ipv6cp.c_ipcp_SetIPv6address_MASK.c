
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct TYPE_6__ {struct bundle* bundle; } ;
struct ipv6cp {struct ncpaddr hisaddr; struct ncpaddr myaddr; TYPE_1__ fsm; } ;
struct in6_addr {int* s6_addr; } ;
struct TYPE_8__ {int ipv6routes; scalar_t__ valid; } ;
struct TYPE_7__ {scalar_t__ sendpipe; scalar_t__ recvpipe; } ;
struct TYPE_9__ {int route; TYPE_2__ cfg; } ;
struct bundle {TYPE_3__ radius; TYPE_4__ ncp; int iface; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct bundle*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,TYPE_4__*,struct ncprange*,struct ncpaddr*,int) ;
 int FUNC_2 (int ,TYPE_4__*,int ,int) ;
 struct in6_addr VAR_9 ;
 int FUNC_3 (int*,int *,int ) ;
 int FUNC_4 (struct in6_addr*,char,int) ;
 int FUNC_5 (struct ncpaddr*,struct sockaddr_storage*) ;
 scalar_t__ FUNC_6 (struct ncpaddr*) ;
 int FUNC_7 (struct ncpaddr*,struct in6_addr*) ;
 int FUNC_8 (struct ncprange*,struct sockaddr_storage*,struct sockaddr_storage*) ;
 int FUNC_9 (struct ncprange*,struct ncpaddr*,int) ;
 int FUNC_10 (struct bundle*,int ,struct ncpaddr*,struct ncpaddr*) ;
 int FUNC_11 (struct bundle*,int ,struct ncprange*,struct ncpaddr*,int,int ) ;
 int FUNC_12 (struct bundle*,struct sockaddr*,struct sockaddr*,struct sockaddr*,int *,int *) ;

__attribute__((used)) static int
FUNC_13(struct ipv6cp *VAR_10, u_char *VAR_11, u_char *VAR_12)
{
  struct bundle *VAR_13 = VAR_10->fsm.bundle;
  struct in6_addr VAR_14, VAR_15;
  struct ncprange VAR_16, VAR_17;
  struct ncpaddr VAR_18;
  struct sockaddr_storage VAR_19, VAR_20, VAR_21;
  struct sockaddr *VAR_22, *VAR_23, *VAR_24;

  VAR_22 = (struct sockaddr *)&VAR_19;
  VAR_23 = (struct sockaddr *)&VAR_20;
  VAR_24 = (struct sockaddr *)&VAR_21;

  FUNC_4(&VAR_14, '\0', sizeof VAR_14);
  FUNC_4(&VAR_15, '\0', sizeof VAR_15);

  VAR_14.s6_addr[0] = 0xfe;
  VAR_14.s6_addr[1] = 0x80;
  FUNC_3(&VAR_14.s6_addr[8], VAR_11, VAR_5);




  VAR_15.s6_addr[0] = 0xfe;
  VAR_15.s6_addr[1] = 0x80;
  FUNC_3(&VAR_15.s6_addr[8], VAR_12, VAR_5);




  FUNC_7(&VAR_10->myaddr, &VAR_14);
  FUNC_7(&VAR_10->hisaddr, &VAR_15);
  FUNC_9(&VAR_16, &VAR_10->myaddr, 64);

  if (!FUNC_1(VAR_13->iface, &VAR_13->ncp, &VAR_16, &VAR_10->hisaddr,
                 VAR_1|VAR_3|VAR_4))
    return 0;

  if (!FUNC_0(VAR_13, VAR_6))
    FUNC_2(VAR_13->iface, &VAR_13->ncp, VAR_0,
                VAR_2|VAR_4);

  FUNC_7(&VAR_18, &VAR_9);
  FUNC_9(&VAR_17, &VAR_18, 32);
  FUNC_11(VAR_13, VAR_8, &VAR_17, &VAR_10->myaddr, 1, 0);

  if (VAR_13->ncp.cfg.sendpipe > 0 || VAR_13->ncp.cfg.recvpipe > 0) {
    FUNC_8(&VAR_16, &VAR_20, &VAR_21);
    if (FUNC_6(&VAR_10->hisaddr))
      FUNC_5(&VAR_10->hisaddr, &VAR_19);
    else
      VAR_22 = ((void*)0);
    FUNC_12(VAR_13, VAR_22, VAR_23, VAR_24, ((void*)0), ((void*)0));
  }

  if (FUNC_0(VAR_13, VAR_7))
    FUNC_10(VAR_13, VAR_13->ncp.route, &VAR_10->myaddr, &VAR_10->hisaddr);


  if (VAR_13->radius.valid)
    FUNC_10(VAR_13, VAR_13->radius.ipv6routes, &VAR_10->myaddr,
                 &VAR_10->hisaddr);


  return 1;
}
