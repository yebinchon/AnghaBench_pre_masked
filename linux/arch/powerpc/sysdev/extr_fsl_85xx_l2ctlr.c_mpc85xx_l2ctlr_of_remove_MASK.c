
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_1)
{
 FUNC_0(!VAR_0);

 FUNC_2(VAR_0);
 FUNC_3(VAR_1);
 FUNC_1(&VAR_1->dev, "MPC85xx L2 controller unloaded\n");

 return 0;
}
