
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct gpio_chip {char* label; int direction_output; int direction_input; int set; int get; int ngpio; scalar_t__ base; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct gpio_chip* FUNC_0 (struct device*,int,int ) ;
 int FUNC_1 (struct gpio_chip*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_7)
{
 struct gpio_chip *VAR_8;
 struct device *VAR_9 = &VAR_7->dev;

 VAR_8 = FUNC_0(VAR_9, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->label = "loongson-gpio-chip";
 VAR_8->base = 0;
 VAR_8->ngpio = VAR_2;
 VAR_8->get = VAR_5;
 VAR_8->set = VAR_6;
 VAR_8->direction_input = VAR_3;
 VAR_8->direction_output = VAR_4;

 return FUNC_1(VAR_8, ((void*)0));
}
