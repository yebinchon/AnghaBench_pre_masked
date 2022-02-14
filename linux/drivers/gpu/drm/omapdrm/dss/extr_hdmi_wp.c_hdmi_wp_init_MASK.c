
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct hdmi_wp_data {unsigned int version; int phys_base; int base; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,struct resource*) ;
 struct resource* FUNC_3 (struct platform_device*,int ,char*) ;

int FUNC_4(struct platform_device *VAR_1, struct hdmi_wp_data *VAR_2,
   unsigned int VAR_3)
{
 struct resource *VAR_4;

 VAR_4 = FUNC_3(VAR_1, VAR_0, "wp");
 VAR_2->base = FUNC_2(&VAR_1->dev, VAR_4);
 if (FUNC_0(VAR_2->base))
  return FUNC_1(VAR_2->base);

 VAR_2->phys_base = VAR_4->start;
 VAR_2->version = VAR_3;

 return 0;
}
