
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct cyttsp4 {TYPE_1__* cpdata; int irq; int startup_work; int md; struct device* dev; } ;
struct TYPE_2__ {int (* init ) (TYPE_1__*,int ,struct device*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct cyttsp4*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct cyttsp4*) ;
 int FUNC_4 (int ,struct cyttsp4*) ;
 int FUNC_5 (struct cyttsp4*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (TYPE_1__*,int ,struct device*) ;

int FUNC_9(struct cyttsp4 *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev;

 FUNC_2(&VAR_0->md);





 FUNC_7(VAR_1);
 FUNC_6(VAR_1);

 FUNC_0(&VAR_0->startup_work);

 FUNC_3(VAR_0);

 FUNC_4(VAR_0->irq, VAR_0);
 if (VAR_0->cpdata->init)
  VAR_0->cpdata->init(VAR_0->cpdata, 0, VAR_1);
 FUNC_1(VAR_0);
 FUNC_5(VAR_0);
 return 0;
}
