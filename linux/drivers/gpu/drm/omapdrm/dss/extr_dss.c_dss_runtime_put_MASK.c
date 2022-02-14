
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dss_device {TYPE_1__* pdev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;

void FUNC_3(struct dss_device *VAR_2)
{
 int VAR_3;

 FUNC_0("dss_runtime_put\n");

 VAR_3 = FUNC_2(&VAR_2->pdev->dev);
 FUNC_1(VAR_3 < 0 && VAR_3 != -VAR_1 && VAR_3 != -VAR_0);
}
