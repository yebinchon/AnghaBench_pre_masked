
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etm_drvdata {scalar_t__ cpu; int base; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 struct etm_drvdata* FUNC_4 (int ) ;
 int FUNC_5 (struct etm_drvdata*) ;
 int FUNC_6 (struct etm_drvdata*) ;
 scalar_t__ FUNC_7 () ;

__attribute__((used)) static void FUNC_8(struct coresight_device *VAR_0)
{
 struct etm_drvdata *VAR_1 = FUNC_4(VAR_0->dev.parent);

 if (FUNC_2(VAR_1->cpu != FUNC_7()))
  return;

 FUNC_1(VAR_1->base);


 FUNC_5(VAR_1);





 FUNC_6(VAR_1);
 FUNC_3(VAR_1->base);

 FUNC_0(VAR_1->base);
}
