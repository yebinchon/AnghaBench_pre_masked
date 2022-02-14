
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct ib_device {int coredev; int hw_stats; scalar_t__ hw_stats_ag; TYPE_1__ dev; } ;


 int FUNC_0 (int *,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct ib_device *VAR_0)
{
 if (VAR_0->hw_stats_ag)
  FUNC_0(&VAR_0->dev.kobj, VAR_0->hw_stats_ag);
 FUNC_2(VAR_0->hw_stats);

 FUNC_1(&VAR_0->coredev);
}
