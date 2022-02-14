
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct ipcp {int throughput; int my_ip; } ;
struct fsm {TYPE_3__* bundle; TYPE_1__* link; } ;
struct TYPE_9__ {scalar_t__* file; } ;
struct TYPE_11__ {char* filterid; TYPE_2__ cfg; } ;
struct TYPE_10__ {TYPE_4__ radius; int links; int radacct; } ;
struct TYPE_8__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_0 (TYPE_3__*) ;
 struct ipcp* FUNC_1 (struct fsm*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (struct ipcp*,int ) ;
 int FUNC_4 (int ,char*,int ,char*) ;
 int FUNC_5 (TYPE_4__*,int *,int ,int ,int *) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;
 int FUNC_8 (char*,int,char*,char*) ;
 scalar_t__ FUNC_9 (TYPE_3__*,char*,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_10(struct fsm *VAR_4)
{

  struct ipcp *VAR_5 = FUNC_1(VAR_4);
  static int VAR_6;
  char VAR_7[16];

  if (!VAR_6++) {
    FUNC_8(VAR_7, sizeof VAR_7, "%s", FUNC_2(VAR_5->my_ip));
    FUNC_4(VAR_2, "%s: LayerDown: %s\n", VAR_4->link->name, VAR_7);


    FUNC_6(&VAR_4->bundle->radius);
    FUNC_5(&VAR_4->bundle->radius, &VAR_4->bundle->radacct,
                   VAR_4->bundle->links, VAR_3, &VAR_5->throughput);

    if (*VAR_4->bundle->radius.cfg.file && VAR_4->bundle->radius.filterid)
      FUNC_9(VAR_4->bundle, VAR_4->bundle->radius.filterid, VAR_1,
                    ((void*)0), ((void*)0));
    FUNC_7(&VAR_4->bundle->radius);






    if (FUNC_9(VAR_4->bundle, VAR_7, VAR_1, ((void*)0), ((void*)0)) < 0) {
      if (FUNC_0(VAR_4->bundle)) {
         if (FUNC_9(VAR_4->bundle, FUNC_0(VAR_4->bundle),
                          VAR_1, ((void*)0), ((void*)0)) < 0)
         FUNC_9(VAR_4->bundle, "MYADDR", VAR_1, ((void*)0), ((void*)0));
      } else
        FUNC_9(VAR_4->bundle, "MYADDR", VAR_1, ((void*)0), ((void*)0));
    }

    FUNC_3(VAR_5, VAR_0);
  }
  VAR_6--;
}
