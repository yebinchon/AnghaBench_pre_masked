
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wm831x {int dummy; } ;
struct TYPE_2__ {int parent; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 int FUNC_0 (struct device*) ;
 struct wm831x* FUNC_1 (int ) ;
 struct device* FUNC_2 (TYPE_1__*,char*,struct wm831x*,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct wm831x *VAR_2 = FUNC_1(VAR_1->dev.parent);
 struct device *VAR_3;

 VAR_3 = FUNC_2(&VAR_1->dev, "wm831x",
          VAR_2,
          VAR_0);
 return FUNC_0(VAR_3);
}
