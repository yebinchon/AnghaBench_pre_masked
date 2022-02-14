
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct funnel_drvdata {scalar_t__ base; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*,int) ;
 struct funnel_drvdata* FUNC_1 (int ) ;
 int FUNC_2 (struct funnel_drvdata*,int) ;

__attribute__((used)) static void FUNC_3(struct coresight_device *VAR_0, int VAR_1,
      int VAR_2)
{
 struct funnel_drvdata *VAR_3 = FUNC_1(VAR_0->dev.parent);

 if (VAR_3->base)
  FUNC_2(VAR_3, VAR_1);

 FUNC_0(&VAR_0->dev, "FUNNEL inport %d disabled\n", VAR_1);
}
