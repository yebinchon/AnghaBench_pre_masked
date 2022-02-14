
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_7__ {int base; int ngpio; int label; int set_multiple; int set; int get; int direction_output; int direction_input; TYPE_1__* parent; } ;
struct xgpio_instance {int* gpio_state; int* gpio_dir; int* gpio_width; TYPE_3__ gc; int regs; int * gpio_lock; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct platform_device {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,TYPE_3__*,struct xgpio_instance*) ;
 struct xgpio_instance* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 scalar_t__ FUNC_7 (struct device_node*,char*,int*) ;
 int FUNC_8 (struct platform_device*,struct xgpio_instance*) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_10 (struct xgpio_instance*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_11(struct platform_device *VAR_7)
{
 struct xgpio_instance *VAR_8;
 int VAR_9 = 0;
 struct device_node *VAR_10 = VAR_7->dev.of_node;
 u32 VAR_11;

 VAR_8 = FUNC_5(&VAR_7->dev, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_8(VAR_7, VAR_8);


 FUNC_7(VAR_10, "xlnx,dout-default", &VAR_8->gpio_state[0]);


 if (FUNC_7(VAR_10, "xlnx,tri-default", &VAR_8->gpio_dir[0]))
  VAR_8->gpio_dir[0] = 0xFFFFFFFF;





 if (FUNC_7(VAR_10, "xlnx,gpio-width", &VAR_8->gpio_width[0]))
  VAR_8->gpio_width[0] = 32;

 FUNC_9(&VAR_8->gpio_lock[0]);

 if (FUNC_7(VAR_10, "xlnx,is-dual", &VAR_11))
  VAR_11 = 0;

 if (VAR_11) {

  FUNC_7(VAR_10, "xlnx,dout-default-2",
         &VAR_8->gpio_state[1]);


  if (FUNC_7(VAR_10, "xlnx,tri-default-2",
      &VAR_8->gpio_dir[1]))
   VAR_8->gpio_dir[1] = 0xFFFFFFFF;





  if (FUNC_7(VAR_10, "xlnx,gpio2-width",
      &VAR_8->gpio_width[1]))
   VAR_8->gpio_width[1] = 32;

  FUNC_9(&VAR_8->gpio_lock[1]);
 }

 VAR_8->gc.base = -1;
 VAR_8->gc.ngpio = VAR_8->gpio_width[0] + VAR_8->gpio_width[1];
 VAR_8->gc.parent = &VAR_7->dev;
 VAR_8->gc.direction_input = VAR_2;
 VAR_8->gc.direction_output = VAR_3;
 VAR_8->gc.get = VAR_4;
 VAR_8->gc.set = VAR_5;
 VAR_8->gc.set_multiple = VAR_6;

 VAR_8->gc.label = FUNC_3(&VAR_7->dev);

 VAR_8->regs = FUNC_6(VAR_7, 0);
 if (FUNC_0(VAR_8->regs)) {
  FUNC_2(&VAR_7->dev, "failed to ioremap memory resource\n");
  return FUNC_1(VAR_8->regs);
 }

 FUNC_10(VAR_8);

 VAR_9 = FUNC_4(&VAR_7->dev, &VAR_8->gc, VAR_8);
 if (VAR_9) {
  FUNC_2(&VAR_7->dev, "failed to add GPIO chip\n");
  return VAR_9;
 }

 return 0;
}
