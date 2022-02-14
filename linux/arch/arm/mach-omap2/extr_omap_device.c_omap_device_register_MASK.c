
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; int name; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct platform_device*) ;
 int FUNC_2 (char*,int ) ;

int FUNC_3(struct platform_device *VAR_1)
{
 FUNC_2("omap_device: %s: registering\n", VAR_1->name);

 FUNC_0(&VAR_1->dev, &VAR_0);
 return FUNC_1(VAR_1);
}
