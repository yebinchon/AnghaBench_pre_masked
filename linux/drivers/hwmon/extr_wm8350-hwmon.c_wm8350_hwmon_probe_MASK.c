
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wm8350 {int dummy; } ;
struct platform_device {int dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,char*,struct wm8350*,int ) ;
 struct wm8350* FUNC_2 (struct platform_device*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct wm8350 *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3;

 VAR_3 = FUNC_1(&VAR_1->dev, "wm8350",
          VAR_2,
          VAR_0);
 return FUNC_0(VAR_3);
}
