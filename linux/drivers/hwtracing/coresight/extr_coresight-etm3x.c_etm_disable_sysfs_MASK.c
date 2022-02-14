
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etm_drvdata {int spinlock; int cpu; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct etm_drvdata* FUNC_3 (int ) ;
 int VAR_0 ;
 int FUNC_4 (int ,int ,struct etm_drvdata*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct coresight_device *VAR_1)
{
 struct etm_drvdata *VAR_2 = FUNC_3(VAR_1->dev.parent);







 FUNC_0();
 FUNC_5(&VAR_2->spinlock);





 FUNC_4(VAR_2->cpu, VAR_0, VAR_2, 1);

 FUNC_6(&VAR_2->spinlock);
 FUNC_1();

 FUNC_2(&VAR_1->dev, "ETM tracing disabled\n");
}
