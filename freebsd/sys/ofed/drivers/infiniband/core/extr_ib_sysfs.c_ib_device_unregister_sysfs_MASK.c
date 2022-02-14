
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int kobj; } ;
struct ib_device {TYPE_1__ dev; int hw_stats_ag; scalar_t__ hw_stats; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ib_device*) ;
 int * VAR_0 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct ib_device *VAR_1)
{
 int VAR_2;


 FUNC_6(&VAR_1->dev.kobj);

 FUNC_4(VAR_1);

 if (VAR_1->hw_stats) {
  FUNC_5(VAR_1->hw_stats);
  FUNC_3(&VAR_1->dev.kobj, VAR_1->hw_stats_ag);
 }

 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  FUNC_1(&VAR_1->dev, VAR_0[VAR_2]);

 FUNC_2(&VAR_1->dev);
}
