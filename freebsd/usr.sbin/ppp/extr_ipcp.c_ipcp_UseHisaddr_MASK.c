
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ncpaddr {int dummy; } ;
struct in_addr {scalar_t__ s_addr; } ;
struct TYPE_7__ {char const* src; } ;
struct TYPE_6__ {int peer_range; int my_range; TYPE_2__ peer_list; } ;
struct ipcp {struct in_addr peer_ip; TYPE_1__ cfg; int my_ip; } ;
struct ncp {struct ipcp ipcp; } ;
struct bundle {struct ncp ncp; } ;


 scalar_t__ VAR_0 ;
 struct in_addr FUNC_0 (struct bundle*,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct bundle*,int *,struct ncpaddr*) ;
 int FUNC_2 (struct ipcp*,struct in_addr,struct in_addr) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*,char const*) ;
 int FUNC_7 (int ,char*,char const*) ;
 int FUNC_8 (int *,char,int) ;
 int FUNC_9 (struct ncpaddr*,struct in_addr) ;
 scalar_t__ FUNC_10 (int *,struct ncp*,char const*) ;
 scalar_t__ FUNC_11 (int *) ;
 int FUNC_12 (int *,struct in_addr*) ;
 int FUNC_13 (int *,struct in_addr) ;
 scalar_t__ FUNC_14 (char const*,char*) ;

int
FUNC_15(struct bundle *VAR_3, const char *VAR_4, int VAR_5)
{
  struct in_addr VAR_6;
  struct ncp *VAR_7 = &VAR_3->ncp;
  struct ipcp *VAR_8 = &VAR_7->ipcp;
  struct ncpaddr VAR_9;


  FUNC_8(&VAR_8->cfg.peer_range, '\0', sizeof VAR_8->cfg.peer_range);
  FUNC_4(&VAR_8->cfg.peer_list);
  if (FUNC_14(VAR_4, ",-")) {
    FUNC_6(&VAR_8->cfg.peer_list, VAR_4);
    if (FUNC_3(&VAR_8->cfg.peer_list)) {
      FUNC_5(&VAR_8->cfg.peer_list);
      VAR_8->peer_ip = FUNC_0(VAR_3, VAR_8->my_ip);
      if (VAR_8->peer_ip.s_addr == VAR_1) {
        FUNC_7(VAR_2, "%s: None available !\n", VAR_8->cfg.peer_list.src);
        return 0;
      }
      FUNC_13(&VAR_8->cfg.peer_range, VAR_8->peer_ip);
    } else {
      FUNC_7(VAR_2, "%s: Invalid range !\n", VAR_4);
      return 0;
    }
  } else if (FUNC_10(&VAR_8->cfg.peer_range, VAR_7, VAR_4) != 0) {
    if (FUNC_11(&VAR_8->cfg.my_range) != VAR_0) {
      FUNC_7(VAR_2, "%s: Not an AF_INET address !\n", VAR_4);
      return 0;
    }
    FUNC_12(&VAR_8->cfg.my_range, &VAR_6);
    FUNC_12(&VAR_8->cfg.peer_range, &VAR_8->peer_ip);

    if (VAR_5 && !FUNC_2(VAR_8, VAR_6, VAR_8->peer_ip))
      return 0;
  } else
    return 0;

  FUNC_9(&VAR_9, VAR_8->peer_ip);
  FUNC_1(VAR_3, ((void*)0), &VAR_9);

  return 1;
}
