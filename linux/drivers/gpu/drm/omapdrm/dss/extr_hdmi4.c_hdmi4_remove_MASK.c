
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct omap_hdmi {int dummy; } ;


 int FUNC_0 (int *,int *) ;
 int VAR_0 ;
 int FUNC_1 (struct omap_hdmi*) ;
 int FUNC_2 (struct omap_hdmi*) ;
 struct omap_hdmi* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct omap_hdmi *VAR_2 = FUNC_3(VAR_1);

 FUNC_0(&VAR_1->dev, &VAR_0);

 FUNC_1(VAR_2);

 FUNC_4(&VAR_1->dev);

 FUNC_2(VAR_2);
 return 0;
}
