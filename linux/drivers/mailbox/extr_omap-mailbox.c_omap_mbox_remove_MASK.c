
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct omap_mbox_device {int dev; } ;


 int FUNC_0 (struct omap_mbox_device*) ;
 struct omap_mbox_device* FUNC_1 (struct platform_device*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct omap_mbox_device *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(VAR_1->dev);
 FUNC_0(VAR_1);

 return 0;
}
