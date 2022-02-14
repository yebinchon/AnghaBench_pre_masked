
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct etmv4_drvdata {int sticky_enable; int spinlock; int cpu; } ;
struct etm4_enable_arg {int rc; struct etmv4_drvdata* drvdata; int member_0; } ;
struct TYPE_2__ {int parent; } ;
struct coresight_device {TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,char*) ;
 struct etmv4_drvdata* FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,struct etm4_enable_arg*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct coresight_device *VAR_1)
{
 struct etmv4_drvdata *VAR_2 = FUNC_1(VAR_1->dev.parent);
 struct etm4_enable_arg VAR_3 = { 0 };
 int VAR_4;

 FUNC_3(&VAR_2->spinlock);





 VAR_3.drvdata = VAR_2;
 VAR_4 = FUNC_2(VAR_2->cpu,
           VAR_0, &VAR_3, 1);
 if (!VAR_4)
  VAR_4 = VAR_3.rc;
 if (!VAR_4)
  VAR_2->sticky_enable = 1;
 FUNC_4(&VAR_2->spinlock);

 if (!VAR_4)
  FUNC_0(&VAR_1->dev, "ETM tracing enabled\n");
 return VAR_4;
}
