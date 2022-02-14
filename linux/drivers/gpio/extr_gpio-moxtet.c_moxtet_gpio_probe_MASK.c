
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; int can_sleep; int owner; int ngpio; int set; int get; int direction_output; int direction_input; int get_direction; int label; struct device* parent; } ;
struct moxtet_gpio_chip {TYPE_2__ gpio_chip; int * desc; struct device* dev; } ;
struct device_node {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct TYPE_3__ {int id; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * VAR_5 ;
 int FUNC_1 (struct device*,char*,struct device_node*,int) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (struct device*,struct moxtet_gpio_chip*) ;
 int FUNC_4 (struct device*,TYPE_2__*,struct moxtet_gpio_chip*) ;
 struct moxtet_gpio_chip* FUNC_5 (struct device*,int,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__* FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct device *VAR_11)
{
 struct moxtet_gpio_chip *VAR_12;
 struct device_node *VAR_13 = VAR_11->of_node;
 int VAR_14;

 VAR_14 = FUNC_6(VAR_11)->id;

 if (VAR_14 >= FUNC_0(VAR_5)) {
  FUNC_1(VAR_11, "%pOF Moxtet device id 0x%x is not supported by gpio-moxtet driver\n",
   VAR_13, VAR_14);
  return -VAR_1;
 }

 VAR_12 = FUNC_5(VAR_11, sizeof(*VAR_12), VAR_2);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->dev = VAR_11;
 VAR_12->gpio_chip.parent = VAR_11;
 VAR_12->desc = &VAR_5[VAR_14];

 FUNC_3(VAR_11, VAR_12);

 VAR_12->gpio_chip.label = FUNC_2(VAR_11);
 VAR_12->gpio_chip.get_direction = VAR_8;
 VAR_12->gpio_chip.direction_input = VAR_6;
 VAR_12->gpio_chip.direction_output = VAR_7;
 VAR_12->gpio_chip.get = VAR_9;
 VAR_12->gpio_chip.set = VAR_10;
 VAR_12->gpio_chip.base = -1;

 VAR_12->gpio_chip.ngpio = VAR_3;

 VAR_12->gpio_chip.can_sleep = 1;
 VAR_12->gpio_chip.owner = VAR_4;

 return FUNC_4(VAR_11, &VAR_12->gpio_chip, VAR_12);
}
