
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etm_enable_arg {int rc; struct etm_drvdata* drvdata; int member_0; } ;
struct etm_drvdata {int sticky_enable; int spinlock; int cpu; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,char*) ;
 struct etm_drvdata* FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (int ,int ,struct etm_enable_arg*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct coresight_device *VAR_2)
{
 struct etm_drvdata *VAR_3 = FUNC_2(VAR_2->dev.parent);
 struct etm_enable_arg VAR_4 = { 0 };
 int VAR_5;

 FUNC_4(&VAR_3->spinlock);





 if (FUNC_0(VAR_3->cpu)) {
  VAR_4.drvdata = VAR_3;
  VAR_5 = FUNC_3(VAR_3->cpu,
            VAR_1, &VAR_4, 1);
  if (!VAR_5)
   VAR_5 = VAR_4.rc;
  if (!VAR_5)
   VAR_3->sticky_enable = 1;
 } else {
  VAR_5 = -VAR_0;
 }

 FUNC_5(&VAR_3->spinlock);

 if (!VAR_5)
  FUNC_1(&VAR_2->dev, "ETM tracing enabled\n");
 return VAR_5;
}
