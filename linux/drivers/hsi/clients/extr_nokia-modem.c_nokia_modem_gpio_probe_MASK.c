
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nokia_modem_device {int gpio_amount; TYPE_1__* gpios; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_2__ {int gpio; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*,...) ;
 struct nokia_modem_device* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,int *,int,int ) ;
 TYPE_1__* FUNC_5 (struct device*,int,int,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct device*,int ,int ) ;
 int FUNC_8 (struct device_node*) ;
 int FUNC_9 (struct device_node*,char*) ;
 int FUNC_10 (struct device_node*,char*,int,int *) ;

__attribute__((used)) static int FUNC_11(struct device *VAR_4)
{
 struct device_node *VAR_5 = VAR_4->of_node;
 struct nokia_modem_device *VAR_6 = FUNC_3(VAR_4);
 int VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_7 = FUNC_8(VAR_5);

 if (VAR_7 < 0) {
  FUNC_2(VAR_4, "missing gpios: %d\n", VAR_7);
  return VAR_7;
 }

 VAR_8 = FUNC_9(VAR_5, "gpio-names");

 if (VAR_7 != VAR_8) {
  FUNC_2(VAR_4, "number of gpios does not equal number of gpio names\n");
  return -VAR_0;
 }

 VAR_6->gpios = FUNC_5(VAR_4, VAR_7, sizeof(*VAR_6->gpios),
        VAR_2);
 if (!VAR_6->gpios)
  return -VAR_1;

 VAR_6->gpio_amount = VAR_7;

 for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++) {
  VAR_6->gpios[VAR_9].gpio = FUNC_4(VAR_4, ((void*)0), VAR_9,
           VAR_3);
  if (FUNC_0(VAR_6->gpios[VAR_9].gpio)) {
   FUNC_2(VAR_4, "Could not get gpio %d\n", VAR_9);
   return FUNC_1(VAR_6->gpios[VAR_9].gpio);
  }

  VAR_10 = FUNC_10(VAR_5, "gpio-names", VAR_9,
      &(VAR_6->gpios[VAR_9].name));
  if (VAR_10) {
   FUNC_2(VAR_4, "Could not get gpio name %d\n", VAR_9);
   return VAR_10;
  }

  VAR_10 = FUNC_6(VAR_6->gpios[VAR_9].gpio, 0);
  if (VAR_10)
   return VAR_10;

  VAR_10 = FUNC_7(VAR_4, VAR_6->gpios[VAR_9].name,
       VAR_6->gpios[VAR_9].gpio);
  if (VAR_10)
   return VAR_10;
 }

 return 0;
}
