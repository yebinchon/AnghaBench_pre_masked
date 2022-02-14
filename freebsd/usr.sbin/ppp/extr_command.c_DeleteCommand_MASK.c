
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ncprange {int dummy; } ;
struct cmdargs {int argc; int argn; TYPE_5__* bundle; TYPE_4__* cmd; int * argv; } ;
struct TYPE_9__ {int * dns; } ;
struct TYPE_10__ {TYPE_2__ ns; int peer_ip; int my_ip; } ;
struct TYPE_8__ {int hisaddr; int myaddr; } ;
struct TYPE_13__ {int route; TYPE_3__ ipcp; TYPE_1__ ipv6cp; } ;
struct TYPE_12__ {TYPE_7__ ncp; } ;
struct TYPE_11__ {scalar_t__ args; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ncprange*,TYPE_7__*,int ) ;
 int FUNC_1 (struct ncprange*,int *) ;
 int FUNC_2 (struct ncprange*,int ) ;
 int FUNC_3 (int *,int,struct ncprange*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_5__*,int ) ;
 int FUNC_6 (TYPE_5__*,int ,struct ncprange*,int *,int,int ) ;
 scalar_t__ FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(struct cmdargs const *VAR_8)
{
  struct ncprange VAR_9;
  int VAR_10;

  if (VAR_8->argc == VAR_8->argn+1) {
    if(FUNC_7(VAR_8->argv[VAR_8->argn], "all") == 0) {
      FUNC_5(VAR_8->bundle, 0);
      FUNC_4(&VAR_8->bundle->ncp.route);
    } else {
      VAR_10 = 0;
      if (FUNC_7(VAR_8->argv[VAR_8->argn], "MYADDR") == 0) {
        FUNC_2(&VAR_9, VAR_8->bundle->ncp.ipcp.my_ip);
        VAR_10 = VAR_4;

      } else if (FUNC_7(VAR_8->argv[VAR_8->argn], "MYADDR6") == 0) {
        FUNC_1(&VAR_9, &VAR_8->bundle->ncp.ipv6cp.myaddr);
        VAR_10 = VAR_5;

      } else if (FUNC_7(VAR_8->argv[VAR_8->argn], "HISADDR") == 0) {
        FUNC_2(&VAR_9, VAR_8->bundle->ncp.ipcp.peer_ip);
        VAR_10 = VAR_2;

      } else if (FUNC_7(VAR_8->argv[VAR_8->argn], "HISADDR6") == 0) {
        FUNC_1(&VAR_9, &VAR_8->bundle->ncp.ipv6cp.hisaddr);
        VAR_10 = VAR_3;

      } else if (FUNC_7(VAR_8->argv[VAR_8->argn], "DNS0") == 0) {
        FUNC_2(&VAR_9, VAR_8->bundle->ncp.ipcp.ns.dns[0]);
        VAR_10 = VAR_0;
      } else if (FUNC_7(VAR_8->argv[VAR_8->argn], "DNS1") == 0) {
        FUNC_2(&VAR_9, VAR_8->bundle->ncp.ipcp.ns.dns[1]);
        VAR_10 = VAR_1;
      } else {
        FUNC_0(&VAR_9, &VAR_8->bundle->ncp, VAR_8->argv[VAR_8->argn]);
        VAR_10 = VAR_6;
      }
      FUNC_6(VAR_8->bundle, VAR_7, &VAR_9, ((void*)0), VAR_8->cmd->args ? 1 : 0, 0);
      FUNC_3(&VAR_8->bundle->ncp.route, VAR_10, &VAR_9);
    }
  } else
    return -1;

  return 0;
}
