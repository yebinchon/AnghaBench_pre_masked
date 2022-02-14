
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int base; int ngpio; int direction_output; int direction_input; int get; int set; int label; } ;
struct scoop_dev {scalar_t__ base; TYPE_2__ gpio; int suspend_set; int suspend_clr; int scoop_lock; } ;
struct scoop_config {int io_dir; int io_out; int gpio_base; int suspend_set; int suspend_clr; } ;
struct resource {scalar_t__ start; } ;
struct TYPE_4__ {struct scoop_config* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_2__*,struct scoop_dev*) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int,scalar_t__) ;
 int FUNC_5 (struct scoop_dev*) ;
 struct scoop_dev* FUNC_6 (int,int ) ;
 struct resource* FUNC_7 (struct platform_device*,int ,int ) ;
 int FUNC_8 (struct platform_device*,struct scoop_dev*) ;
 int FUNC_9 (char*,unsigned int,scalar_t__) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct resource*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct platform_device *VAR_12)
{
 struct scoop_dev *VAR_13;
 struct scoop_config *VAR_14;
 struct resource *VAR_15 = FUNC_7(VAR_12, VAR_3, 0);
 int VAR_16;

 if (!VAR_15)
  return -VAR_0;

 VAR_13 = FUNC_6(sizeof(struct scoop_dev), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 FUNC_12(&VAR_13->scoop_lock);

 VAR_14 = VAR_12->dev.platform_data;
 VAR_13->base = FUNC_2(VAR_15->start, FUNC_11(VAR_15));

 if (!VAR_13->base) {
  VAR_16 = -VAR_1;
  goto err_ioremap;
 }

 FUNC_8(VAR_12, VAR_13);

 FUNC_9("Sharp Scoop Device found at 0x%08x -> 0x%8p\n",(unsigned int)VAR_15->start, VAR_13->base);

 FUNC_4(0x0140, VAR_13->base + VAR_7);
 FUNC_10(&VAR_12->dev);
 FUNC_4(0x0000, VAR_13->base + VAR_4);
 FUNC_4(VAR_14->io_dir & 0xffff, VAR_13->base + VAR_5);
 FUNC_4(VAR_14->io_out & 0xffff, VAR_13->base + VAR_6);

 VAR_13->suspend_clr = VAR_14->suspend_clr;
 VAR_13->suspend_set = VAR_14->suspend_set;

 VAR_13->gpio.base = -1;

 if (VAR_14->gpio_base != 0) {
  VAR_13->gpio.label = FUNC_0(&VAR_12->dev);
  VAR_13->gpio.base = VAR_14->gpio_base;
  VAR_13->gpio.ngpio = 12;
  VAR_13->gpio.set = VAR_11;
  VAR_13->gpio.get = VAR_10;
  VAR_13->gpio.direction_input = VAR_8;
  VAR_13->gpio.direction_output = VAR_9;

  VAR_16 = FUNC_1(&VAR_13->gpio, VAR_13);
  if (VAR_16)
   goto err_gpio;
 }

 return 0;

err_gpio:
 FUNC_8(VAR_12, ((void*)0));
err_ioremap:
 FUNC_3(VAR_13->base);
 FUNC_5(VAR_13);

 return VAR_16;
}
