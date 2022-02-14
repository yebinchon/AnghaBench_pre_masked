
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_trig_data {unsigned int gpio; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*,char*,...) ;
 int FUNC_1 (int ,struct led_classdev*) ;
 scalar_t__ FUNC_2 (unsigned int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int ,struct led_classdev*) ;
 struct gpio_trig_data* FUNC_5 (struct device*) ;
 struct led_classdev* FUNC_6 (struct device*) ;
 int FUNC_7 (int ,int *,int (*) (int ,struct led_classdev*),int,char*,struct led_classdev*) ;
 int FUNC_8 (char const*,char*,unsigned int*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_5,
  struct device_attribute *VAR_6, const char *VAR_7, size_t VAR_8)
{
 struct led_classdev *VAR_9 = FUNC_6(VAR_5);
 struct gpio_trig_data *VAR_10 = FUNC_5(VAR_5);
 unsigned VAR_11;
 int VAR_12;

 VAR_12 = FUNC_8(VAR_7, "%u", &VAR_11);
 if (VAR_12 < 1) {
  FUNC_0(VAR_5, "couldn't read gpio number\n");
  return -VAR_0;
 }

 if (VAR_10->gpio == VAR_11)
  return VAR_8;

 if (!FUNC_2(VAR_11)) {
  if (FUNC_2(VAR_10->gpio))
   FUNC_1(FUNC_3(VAR_10->gpio), VAR_9);
  VAR_10->gpio = VAR_11;
  return VAR_8;
 }

 VAR_12 = FUNC_7(FUNC_3(VAR_11), ((void*)0), FUNC_4,
   VAR_1 | VAR_2 | VAR_4
   | VAR_3, "ledtrig-gpio", VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_5, "request_irq failed with error %d\n", VAR_12);
 } else {
  if (FUNC_2(VAR_10->gpio))
   FUNC_1(FUNC_3(VAR_10->gpio), VAR_9);
  VAR_10->gpio = VAR_11;

  FUNC_4(0, VAR_9);
 }

 return VAR_12 ? VAR_12 : VAR_8;
}
