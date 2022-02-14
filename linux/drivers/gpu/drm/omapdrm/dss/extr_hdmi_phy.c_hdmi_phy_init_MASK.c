
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_phy_data {int base; int * features; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 int VAR_1 ;
 int VAR_2 ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;

int FUNC_4(struct platform_device *VAR_3, struct hdmi_phy_data *VAR_4,
    unsigned int VAR_5)
{
 struct resource *VAR_6;

 if (VAR_5 == 4)
  VAR_4->features = &VAR_1;
 else
  VAR_4->features = &VAR_2;

 VAR_6 = FUNC_3(VAR_3, VAR_0, "phy");
 VAR_4->base = FUNC_2(&VAR_3->dev, VAR_6);
 if (FUNC_0(VAR_4->base))
  return FUNC_1(VAR_4->base);

 return 0;
}
