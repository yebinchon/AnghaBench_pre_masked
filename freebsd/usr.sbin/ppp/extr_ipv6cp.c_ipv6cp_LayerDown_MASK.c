
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ipv6cp {int throughput; int myaddr; } ;
struct fsm {TYPE_3__* bundle; TYPE_1__* link; } ;
struct TYPE_9__ {scalar_t__* file; } ;
struct TYPE_11__ {char* filterid; TYPE_2__ cfg; } ;
struct TYPE_10__ {TYPE_4__ radius; int links; int radacct6; } ;
struct TYPE_8__ {int name; } ;


 int FUNC_0 (TYPE_3__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_1 (TYPE_3__*) ;
 struct ipv6cp* FUNC_2 (struct fsm*) ;
 int FUNC_3 (struct ipv6cp*) ;
 int FUNC_4 (int ,char*,int ,char*) ;
 char* FUNC_5 (int *) ;
 int FUNC_6 (TYPE_4__*,int *,int ,int ,int *) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,char*,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct fsm *VAR_5)
{

  struct ipv6cp *VAR_6 = FUNC_2(VAR_5);
  static int VAR_7;
  char VAR_8[VAR_2];

  if (!VAR_7++) {
    FUNC_8(VAR_8, sizeof VAR_8, "%s", FUNC_5(&VAR_6->myaddr));
    FUNC_4(VAR_1, "%s: LayerDown: %s\n", VAR_5->link->name, VAR_8);


    FUNC_7(&VAR_5->bundle->radius);
    FUNC_6(&VAR_5->bundle->radius, &VAR_5->bundle->radacct6,
     VAR_5->bundle->links, VAR_4, &VAR_6->throughput);






    if (!FUNC_0(VAR_5->bundle, VAR_3)) {
      if (*VAR_5->bundle->radius.cfg.file && VAR_5->bundle->radius.filterid)
 FUNC_9(VAR_5->bundle, VAR_5->bundle->radius.filterid, VAR_0,
        ((void*)0), ((void*)0));
    }






    if (FUNC_9(VAR_5->bundle, VAR_8, VAR_0, ((void*)0), ((void*)0)) < 0) {





      if (FUNC_1(VAR_5->bundle) && !FUNC_0(VAR_5->bundle, VAR_3)) {
 if (FUNC_9(VAR_5->bundle, FUNC_1(VAR_5->bundle),
     VAR_0, ((void*)0), ((void*)0)) < 0)
   FUNC_9(VAR_5->bundle, "MYADDR6", VAR_0, ((void*)0), ((void*)0));
      } else
 FUNC_9(VAR_5->bundle, "MYADDR6", VAR_0, ((void*)0), ((void*)0));
    }

    FUNC_3(VAR_6);
  }
  VAR_7--;
}
