
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct platform_device {int dev; } ;
struct hdmi_core_data {int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;

int FUNC_4(struct platform_device *VAR_1, struct hdmi_core_data *VAR_2)
{
 struct resource *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0, "core");
 VAR_2->base = FUNC_2(&VAR_1->dev, VAR_3);
 if (FUNC_0(VAR_2->base))
  return FUNC_1(VAR_2->base);

 return 0;
}
