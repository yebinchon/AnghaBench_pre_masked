
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int base; int direction_output; int set; int direction_input; int get; int ngpio; int label; int owner; struct device* parent; } ;
struct syscon_gpio_priv {int dreg_offset; int dir_reg_offset; TYPE_2__ chip; TYPE_1__* data; int syscon; } ;
struct device {struct device_node* of_node; } ;
struct platform_device {struct device dev; } ;
struct device_node {scalar_t__ parent; } ;
struct TYPE_3__ {int flags; scalar_t__ set; int bit_count; scalar_t__ compatible; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (struct device*,char*) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*,TYPE_2__*,struct syscon_gpio_priv*) ;
 struct syscon_gpio_priv* FUNC_6 (struct device*,int,int ) ;
 TYPE_1__* FUNC_7 (struct device*) ;
 int FUNC_8 (struct device_node*,char*,int,int*) ;
 int FUNC_9 (struct platform_device*,struct syscon_gpio_priv*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (struct device_node*,char*) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_9)
{
 struct device *VAR_10 = &VAR_9->dev;
 struct syscon_gpio_priv *VAR_11;
 struct device_node *VAR_12 = VAR_10->of_node;
 int VAR_13;

 VAR_11 = FUNC_6(VAR_10, sizeof(*VAR_11), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->data = FUNC_7(VAR_10);

 if (VAR_11->data->compatible) {
  VAR_11->syscon = FUNC_11(
     VAR_11->data->compatible);
  if (FUNC_0(VAR_11->syscon))
   return FUNC_1(VAR_11->syscon);
 } else {
  VAR_11->syscon =
   FUNC_12(VAR_12, "gpio,syscon-dev");
  if (FUNC_0(VAR_11->syscon) && VAR_12->parent)
   VAR_11->syscon = FUNC_10(VAR_12->parent);
  if (FUNC_0(VAR_11->syscon))
   return FUNC_1(VAR_11->syscon);

  VAR_13 = FUNC_8(VAR_12, "gpio,syscon-dev", 1,
       &VAR_11->dreg_offset);
  if (VAR_13)
   FUNC_3(VAR_10, "can't read the data register offset!\n");

  VAR_11->dreg_offset <<= 3;

  VAR_13 = FUNC_8(VAR_12, "gpio,syscon-dev", 2,
       &VAR_11->dir_reg_offset);
  if (VAR_13)
   FUNC_2(VAR_10, "can't read the dir register offset!\n");

  VAR_11->dir_reg_offset <<= 3;
 }

 VAR_11->chip.parent = VAR_10;
 VAR_11->chip.owner = VAR_4;
 VAR_11->chip.label = FUNC_4(VAR_10);
 VAR_11->chip.base = -1;
 VAR_11->chip.ngpio = VAR_11->data->bit_count;
 VAR_11->chip.get = VAR_7;
 if (VAR_11->data->flags & VAR_2)
  VAR_11->chip.direction_input = VAR_5;
 if (VAR_11->data->flags & VAR_3) {
  VAR_11->chip.set = VAR_11->data->set ? : VAR_8;
  VAR_11->chip.direction_output = VAR_6;
 }

 FUNC_9(VAR_9, VAR_11);

 return FUNC_5(&VAR_9->dev, &VAR_11->chip, VAR_11);
}
