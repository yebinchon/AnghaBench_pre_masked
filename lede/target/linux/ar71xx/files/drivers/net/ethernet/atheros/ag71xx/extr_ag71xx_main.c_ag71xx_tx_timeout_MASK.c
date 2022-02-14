
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct ag71xx {int restart_work; TYPE_1__* dev; } ;
struct TYPE_2__ {int name; } ;


 struct ag71xx* FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (struct ag71xx*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0)
{
 struct ag71xx *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_1))
  FUNC_2("%s: tx timeout\n", VAR_1->dev->name);

 FUNC_3(&VAR_1->restart_work, 1);
}
