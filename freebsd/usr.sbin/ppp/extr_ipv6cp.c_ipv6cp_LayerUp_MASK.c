
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {int maxreq; } ;
struct TYPE_14__ {TYPE_4__ fsm; } ;
struct ipv6cp {TYPE_5__ cfg; int throughput; int his_ifid; int hisaddr; int myaddr; } ;
struct TYPE_12__ {int reqs; int naks; int rejs; } ;
struct fsm {TYPE_3__ more; TYPE_6__* bundle; TYPE_1__* link; } ;
struct TYPE_11__ {scalar_t__* file; } ;
struct TYPE_16__ {char* filterid; TYPE_2__ cfg; } ;
struct TYPE_15__ {TYPE_7__ radius; int links; int radacct6; } ;
struct TYPE_10__ {int name; } ;


 int FUNC_0 (TYPE_6__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (TYPE_6__*) ;
 struct ipv6cp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (struct ipv6cp*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,char*,...) ;
 char* FUNC_6 (int *) ;
 int FUNC_7 (TYPE_7__*,int *,int ,int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (char*,int,char*,char*) ;
 scalar_t__ FUNC_10 (TYPE_6__*,char*,int ,int *,int *) ;

__attribute__((used)) static int
FUNC_11(struct fsm *VAR_5)
{

  struct ipv6cp *VAR_6 = FUNC_2(VAR_5);
  char VAR_7[VAR_2];

  FUNC_5(VAR_1, "%s: LayerUp.\n", VAR_5->link->name);
  if (!FUNC_3(VAR_6))
    return 0;

  FUNC_9(VAR_7, sizeof VAR_7, "%s", FUNC_6(&VAR_6->myaddr));
  FUNC_5(VAR_1, "myaddr %s hisaddr = %s\n",
             VAR_7, FUNC_6(&VAR_6->hisaddr));


  FUNC_8(&VAR_5->bundle->radacct6, VAR_6->his_ifid);
  FUNC_7(&VAR_5->bundle->radius, &VAR_5->bundle->radacct6,
   VAR_5->bundle->links, VAR_4, &VAR_6->throughput);






  if (!FUNC_0(VAR_5->bundle, VAR_3)) {
    if (*VAR_5->bundle->radius.cfg.file && VAR_5->bundle->radius.filterid)
      FUNC_10(VAR_5->bundle, VAR_5->bundle->radius.filterid, VAR_0,
      ((void*)0), ((void*)0));
  }






  if (FUNC_10(VAR_5->bundle, VAR_7, VAR_0, ((void*)0), ((void*)0)) < 0) {





    if (FUNC_1(VAR_5->bundle) && !FUNC_0(VAR_5->bundle, VAR_3)) {
      if (FUNC_10(VAR_5->bundle, FUNC_1(VAR_5->bundle),
   VAR_0, ((void*)0), ((void*)0)) < 0)
 FUNC_10(VAR_5->bundle, "MYADDR6", VAR_0, ((void*)0), ((void*)0));
    } else
      FUNC_10(VAR_5->bundle, "MYADDR6", VAR_0, ((void*)0), ((void*)0));
  }

  VAR_5->more.reqs = VAR_5->more.naks = VAR_5->more.rejs = VAR_6->cfg.fsm.maxreq * 3;
  FUNC_4();

  return 1;
}
