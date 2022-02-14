
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* u32 ;
struct property {int dummy; } ;
struct gpio_fan_speed {void* ctrl_val; void* rpm; } ;
struct gpio_fan_data {unsigned int num_gpios; unsigned int num_speed; struct gpio_fan_speed* speed; struct gpio_desc** gpios; struct gpio_desc* alarm_gpio; struct device* dev; } ;
struct gpio_desc {int dummy; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
typedef int __be32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct gpio_desc*) ;
 int FUNC_1 (struct gpio_desc*) ;
 int FUNC_2 (struct device*,char*) ;
 struct gpio_desc* FUNC_3 (struct device*,int *,unsigned int,int ) ;
 struct gpio_desc* FUNC_4 (struct device*,char*,int ) ;
 void* FUNC_5 (struct device*,unsigned int,int,int ) ;
 unsigned int FUNC_6 (struct device*,int *) ;
 struct property* FUNC_7 (struct device_node*,char*,unsigned int*) ;
 int * FUNC_8 (struct property*,int const*,void**) ;

__attribute__((used)) static int FUNC_9(struct gpio_fan_data *VAR_5)
{
 struct gpio_fan_speed *VAR_6;
 struct device *VAR_7 = VAR_5->dev;
 struct device_node *VAR_8 = VAR_7->of_node;
 struct gpio_desc **VAR_9;
 unsigned VAR_10;
 u32 VAR_11;
 struct property *VAR_12;
 const __be32 *VAR_13;


 VAR_5->alarm_gpio = FUNC_4(VAR_7, "alarm", VAR_4);
 if (FUNC_0(VAR_5->alarm_gpio))
  return FUNC_1(VAR_5->alarm_gpio);


 VAR_5->num_gpios = FUNC_6(VAR_7, ((void*)0));
 if (VAR_5->num_gpios <= 0) {
  if (VAR_5->alarm_gpio)
   return 0;
  FUNC_2(VAR_7, "DT properties empty / missing");
  return -VAR_0;
 }
 VAR_9 = FUNC_5(VAR_7,
        VAR_5->num_gpios, sizeof(struct gpio_desc *),
        VAR_2);
 if (!VAR_9)
  return -VAR_1;
 for (VAR_10 = 0; VAR_10 < VAR_5->num_gpios; VAR_10++) {
  VAR_9[VAR_10] = FUNC_3(VAR_7, ((void*)0), VAR_10, VAR_3);
  if (FUNC_0(VAR_9[VAR_10]))
   return FUNC_1(VAR_9[VAR_10]);
 }
 VAR_5->gpios = VAR_9;


 VAR_12 = FUNC_7(VAR_8, "gpio-fan,speed-map", &VAR_10);
 if (!VAR_12) {
  FUNC_2(VAR_7, "gpio-fan,speed-map DT property missing");
  return -VAR_0;
 }
 VAR_10 = VAR_10 / sizeof(u32);
 if (VAR_10 == 0 || VAR_10 & 1) {
  FUNC_2(VAR_7, "gpio-fan,speed-map contains zero/odd number of entries");
  return -VAR_0;
 }
 VAR_5->num_speed = VAR_10 / 2;






 VAR_6 = FUNC_5(VAR_7,
   VAR_5->num_speed, sizeof(struct gpio_fan_speed),
   VAR_2);
 if (!VAR_6)
  return -VAR_1;
 VAR_13 = ((void*)0);
 for (VAR_10 = 0; VAR_10 < VAR_5->num_speed; VAR_10++) {
  VAR_13 = FUNC_8(VAR_12, VAR_13, &VAR_11);
  if (!VAR_13)
   return -VAR_0;
  VAR_6[VAR_10].rpm = VAR_11;
  VAR_13 = FUNC_8(VAR_12, VAR_13, &VAR_11);
  if (!VAR_13)
   return -VAR_0;
  VAR_6[VAR_10].ctrl_val = VAR_11;
 }
 VAR_5->speed = VAR_6;

 return 0;
}
