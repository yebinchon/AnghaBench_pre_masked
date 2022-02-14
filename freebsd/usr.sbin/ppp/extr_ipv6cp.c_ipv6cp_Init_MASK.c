
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct link {int dummy; } ;
struct TYPE_4__ {void* maxtrm; void* maxreq; int timeout; } ;
struct TYPE_5__ {TYPE_1__ fsm; } ;
struct ipv6cp {int Queue; int throughput; int my_ifid; int his_ifid; TYPE_2__ cfg; int fsm; } ;
struct fsm_parent {int dummy; } ;
struct bundle {int dummy; } ;
struct TYPE_6__ {scalar_t__ ipv6_available; } ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *,char*,int ,int,int ,int ,struct bundle*,struct link*,struct fsm_parent const*,int *,char const* const*) ;
 int FUNC_2 (struct ipv6cp*,int ,int ) ;
 int VAR_7 ;
 int FUNC_3 (struct ipv6cp*) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ,char,int) ;
 TYPE_3__ VAR_8 ;
 int FUNC_6 (int *,int ) ;

void
FUNC_7(struct ipv6cp *VAR_9, struct bundle *VAR_10, struct link *VAR_11,
                 const struct fsm_parent *VAR_12)
{
  static const char * const VAR_13[] =
    {"IPV6CP restart", "IPV6CP openmode", "IPV6CP stopped"};
  int VAR_14;

  FUNC_1(&VAR_9->fsm, "IPV6CP", VAR_5, 1, VAR_3, VAR_4,
           VAR_10, VAR_11, VAR_12, &VAR_7, VAR_13);

  VAR_9->cfg.fsm.timeout = VAR_0;
  VAR_9->cfg.fsm.maxreq = VAR_1;
  VAR_9->cfg.fsm.maxtrm = VAR_1;

  FUNC_0(VAR_9->my_ifid, 0);
  do {
    FUNC_0(VAR_9->his_ifid, 1);
  } while (FUNC_4(VAR_9->his_ifid, VAR_9->my_ifid, VAR_2) == 0);

  if (VAR_8.ipv6_available) {
    VAR_14 = 100;
    while (VAR_14 &&
           !FUNC_2(VAR_9, VAR_9->my_ifid, VAR_9->his_ifid)) {
      do {
 VAR_14--;
     FUNC_0(VAR_9->my_ifid, 1);
      } while (VAR_14
 && FUNC_4(VAR_9->his_ifid, VAR_9->my_ifid, VAR_2) == 0);
    }
  }

  FUNC_6(&VAR_9->throughput, VAR_6);
  FUNC_5(VAR_9->Queue, '\0', sizeof VAR_9->Queue);
  FUNC_3(VAR_9);
}
