
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pxa_gpio_id {int type; int gpio_nums; } ;
struct platform_device_id {scalar_t__ driver_data; } ;
struct platform_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct platform_device_id* FUNC_0 (struct platform_device*) ;

__attribute__((used)) static int FUNC_1(struct platform_device *VAR_2)
{
 const struct platform_device_id *VAR_3 = FUNC_0(VAR_2);
 struct pxa_gpio_id *VAR_4 = (struct pxa_gpio_id *)VAR_3->driver_data;
 int VAR_5 = 0;

 switch (VAR_4->type) {
 case 132:
 case 131:
 case 130:
 case 129:
 case 128:
 case 134:
 case 135:
 case 133:
  VAR_1 = VAR_4->type;
  VAR_5 = VAR_4->gpio_nums - 1;
  break;
 default:
  VAR_5 = -VAR_0;
  break;
 }
 return VAR_5;
}
