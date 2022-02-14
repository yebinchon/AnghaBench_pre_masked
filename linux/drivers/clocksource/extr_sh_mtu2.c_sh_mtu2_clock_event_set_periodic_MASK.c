
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_mtu2_channel {int index; TYPE_2__* mtu; } ;
struct clock_event_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 struct sh_mtu2_channel* FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 int FUNC_2 (int *,char*,int ) ;
 int FUNC_3 (struct sh_mtu2_channel*) ;
 int FUNC_4 (struct sh_mtu2_channel*) ;

__attribute__((used)) static int FUNC_5(struct clock_event_device *VAR_0)
{
 struct sh_mtu2_channel *VAR_1 = FUNC_0(VAR_0);

 if (FUNC_1(VAR_0))
  FUNC_3(VAR_1);

 FUNC_2(&VAR_1->mtu->pdev->dev, "ch%u: used for periodic clock events\n",
   VAR_1->index);
 FUNC_4(VAR_1);
 return 0;
}
