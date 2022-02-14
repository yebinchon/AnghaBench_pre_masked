
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ipv6cp {int throughput; } ;
struct fsm {TYPE_1__* link; } ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;
 struct ipv6cp* FUNC_0 (struct fsm*) ;
 int FUNC_1 (int ,char*,int ) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct fsm *VAR_1)
{

  struct ipv6cp *VAR_2 = FUNC_0(VAR_1);

  FUNC_1(VAR_0, "%s: LayerFinish.\n", VAR_1->link->name);
  FUNC_3(&VAR_2->throughput);
  FUNC_2(&VAR_2->throughput, VAR_0, ((void*)0));
}
