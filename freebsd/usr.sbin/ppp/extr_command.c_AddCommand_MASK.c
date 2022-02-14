
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ncprange {int dummy; } ;
struct ncpaddr {int dummy; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct in6_addr {int dummy; } ;
struct cmdargs {int argc; int argn; TYPE_5__* bundle; TYPE_1__* cmd; int * argv; } ;
struct TYPE_11__ {int hisaddr; } ;
struct TYPE_9__ {struct in_addr* dns; } ;
struct TYPE_10__ {struct in_addr peer_ip; TYPE_2__ ns; struct in_addr my_ip; } ;
struct TYPE_13__ {int route; TYPE_4__ ipv6cp; TYPE_3__ ipcp; } ;
struct TYPE_12__ {TYPE_6__ ncp; } ;
struct TYPE_8__ {scalar_t__ args; } ;


 struct in_addr FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (struct in6_addr*,char,int) ;
 int FUNC_3 (struct ncpaddr*,TYPE_6__*,int ) ;
 int FUNC_4 (struct ncpaddr*) ;
 int FUNC_5 (int *,struct in6_addr*) ;
 int FUNC_6 (struct ncpaddr*,struct in_addr) ;
 int FUNC_7 (struct ncpaddr*,struct in6_addr*) ;
 int FUNC_8 (struct ncprange*,TYPE_6__*,int ) ;
 int FUNC_9 (struct ncprange*,int ) ;
 int FUNC_10 (struct ncprange*,struct in_addr,struct in_addr) ;
 int FUNC_11 (int *,int,struct ncprange*,struct ncpaddr*) ;
 scalar_t__ FUNC_12 (TYPE_5__*,int ,struct ncprange*,struct ncpaddr*,int,int) ;
 scalar_t__ FUNC_13 (int ,char*) ;
 int FUNC_14 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_15(struct cmdargs const *VAR_12)
{
  struct ncpaddr VAR_13;
  struct ncprange VAR_14;
  struct in_addr VAR_15;

  struct in6_addr VAR_16;

  int VAR_17, VAR_18, VAR_19;

  if (VAR_12->argc != VAR_12->argn+3 && VAR_12->argc != VAR_12->argn+2)
    return -1;

  VAR_19 = 0;
  VAR_17 = 0;
  if (VAR_12->argc == VAR_12->argn + 2) {
    if (!FUNC_13(VAR_12->argv[VAR_12->argn], "default"))
      VAR_17 = 1;
    else {
      if (!FUNC_8(&VAR_14, &VAR_12->bundle->ncp, VAR_12->argv[VAR_12->argn]))
        return -1;
      if (!FUNC_14(VAR_12->argv[VAR_12->argn], "MYADDR", 6))
        VAR_19 = VAR_6;
      else if (!FUNC_14(VAR_12->argv[VAR_12->argn], "MYADDR6", 7))
        VAR_19 = VAR_7;
      else if (!FUNC_14(VAR_12->argv[VAR_12->argn], "HISADDR", 7))
        VAR_19 = VAR_4;
      else if (!FUNC_14(VAR_12->argv[VAR_12->argn], "HISADDR6", 8))
        VAR_19 = VAR_5;
      else if (!FUNC_14(VAR_12->argv[VAR_12->argn], "DNS0", 4))
        VAR_19 = VAR_2;
      else if (!FUNC_14(VAR_12->argv[VAR_12->argn], "DNS1", 4))
        VAR_19 = VAR_3;
    }
    VAR_18 = 1;
  } else {
    if (FUNC_13(VAR_12->argv[VAR_12->argn], "MYADDR") == 0) {
      VAR_19 = VAR_6;
      VAR_15 = VAR_12->bundle->ncp.ipcp.my_ip;
    } else if (FUNC_13(VAR_12->argv[VAR_12->argn], "HISADDR") == 0) {
      VAR_19 = VAR_4;
      VAR_15 = VAR_12->bundle->ncp.ipcp.peer_ip;
    } else if (FUNC_13(VAR_12->argv[VAR_12->argn], "DNS0") == 0) {
      VAR_19 = VAR_2;
      VAR_15 = VAR_12->bundle->ncp.ipcp.ns.dns[0];
    } else if (FUNC_13(VAR_12->argv[VAR_12->argn], "DNS1") == 0) {
      VAR_19 = VAR_3;
      VAR_15 = VAR_12->bundle->ncp.ipcp.ns.dns[1];
    } else {
      VAR_15 = FUNC_0(VAR_12->argv[VAR_12->argn]);
      if (VAR_15.s_addr == VAR_0) {
        FUNC_1(VAR_1, "%s: Invalid destination address\n",
                   VAR_12->argv[VAR_12->argn]);
        return -1;
      }
    }
    FUNC_10(&VAR_14, VAR_15, FUNC_0(VAR_12->argv[VAR_12->argn + 1]));
    VAR_18 = 2;
  }

  if (FUNC_13(VAR_12->argv[VAR_12->argn + VAR_18], "HISADDR") == 0) {
    FUNC_6(&VAR_13, VAR_12->bundle->ncp.ipcp.peer_ip);
    VAR_19 |= VAR_8;

  } else if (FUNC_13(VAR_12->argv[VAR_12->argn + VAR_18], "HISADDR6") == 0) {
    if (!FUNC_5(&VAR_12->bundle->ncp.ipv6cp.hisaddr, &VAR_16))
      FUNC_2(&VAR_16, '\0', sizeof VAR_16);
    FUNC_7(&VAR_13, &VAR_16);
    VAR_19 |= VAR_9;

  } else {
    if (!FUNC_3(&VAR_13, &VAR_12->bundle->ncp, VAR_12->argv[VAR_12->argn + VAR_18])) {
      FUNC_1(VAR_1, "%s: Invalid gateway address\n",
                 VAR_12->argv[VAR_12->argn + VAR_18]);
      return -1;
    }
  }

  if (VAR_17)
    FUNC_9(&VAR_14, FUNC_4(&VAR_13));

  if (FUNC_12(VAR_12->bundle, VAR_11, &VAR_14, &VAR_13, VAR_12->cmd->args ? 1 : 0,
             ((VAR_19 & VAR_8) || (VAR_19 & VAR_9)) ? 1 : 0)
      && VAR_19 != VAR_10)
    FUNC_11(&VAR_12->bundle->ncp.route, VAR_19, &VAR_14, &VAR_13);

  return 0;
}
