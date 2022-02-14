
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sh_tmu_channel {int index; TYPE_2__* tmu; } ;
struct clock_event_device {int dummy; } ;
struct TYPE_4__ {TYPE_1__* pdev; } ;
struct TYPE_3__ {int dev; } ;


 struct sh_tmu_channel* FUNC_0 (struct clock_event_device*) ;
 scalar_t__ FUNC_1 (struct clock_event_device*) ;
 scalar_t__ FUNC_2 (struct clock_event_device*) ;
 int FUNC_3 (int *,char*,int ,char*) ;
 int FUNC_4 (struct sh_tmu_channel*,int) ;
 int FUNC_5 (struct sh_tmu_channel*) ;

__attribute__((used)) static int FUNC_6(struct clock_event_device *VAR_0,
     int VAR_1)
{
 struct sh_tmu_channel *VAR_2 = FUNC_0(VAR_0);


 if (FUNC_1(VAR_0) || FUNC_2(VAR_0))
  FUNC_5(VAR_2);

 FUNC_3(&VAR_2->tmu->pdev->dev, "ch%u: used for %s clock events\n",
   VAR_2->index, VAR_1 ? "periodic" : "oneshot");
 FUNC_4(VAR_2, VAR_1);
 return 0;
}
