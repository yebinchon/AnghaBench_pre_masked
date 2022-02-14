
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct catu_drvdata {int base; TYPE_1__* csdev; } ;
struct TYPE_2__ {struct device dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct catu_drvdata*) ;
 int FUNC_1 (struct catu_drvdata*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;

__attribute__((used)) static int FUNC_5(struct catu_drvdata *VAR_1)
{
 int VAR_2 = 0;
 struct device *VAR_3 = &VAR_1->csdev->dev;

 FUNC_1(VAR_1, 0);
 FUNC_2(VAR_1->base);
 if (FUNC_0(VAR_1)) {
  FUNC_4(VAR_3, "Timeout while waiting for READY\n");
  VAR_2 = -VAR_0;
 }

 FUNC_3(VAR_3, "Disabled\n");
 return VAR_2;
}
