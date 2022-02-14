
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb2_clock_sel_priv {int hw; } ;
struct device {int of_node; } ;
struct platform_device {struct device dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 struct usb2_clock_sel_priv* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct device *VAR_1 = &VAR_0->dev;
 struct usb2_clock_sel_priv *VAR_2 = FUNC_2(VAR_0);

 FUNC_1(VAR_1->of_node);
 FUNC_0(&VAR_2->hw);
 FUNC_4(VAR_1);
 FUNC_3(VAR_1);

 return 0;
}
