
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gpio_chip {int base; int ngpio; int owner; int set; int get; int label; int * parent; } ;
struct ttl_module {struct gpio_chip gpio; int regs; int lock; } ;
struct platform_device {int dev; int name; } ;
struct janz_platform_data {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int *,char*) ;
 struct janz_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct gpio_chip*,int *) ;
 struct ttl_module* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct platform_device*,int ) ;
 int FUNC_7 (struct platform_device*,struct ttl_module*) ;
 int FUNC_8 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (struct ttl_module*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_6)
{
 struct janz_platform_data *VAR_7;
 struct ttl_module *VAR_8;
 struct gpio_chip *VAR_9;
 int VAR_10;

 VAR_7 = FUNC_3(&VAR_6->dev);
 if (!VAR_7) {
  FUNC_2(&VAR_6->dev, "no platform data\n");
  return -VAR_1;
 }

 VAR_8 = FUNC_5(&VAR_6->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_0;

 FUNC_7(VAR_6, VAR_8);
 FUNC_8(&VAR_8->lock);


 VAR_8->regs = FUNC_6(VAR_6, 0);
 if (FUNC_0(VAR_8->regs))
  return FUNC_1(VAR_8->regs);

 FUNC_9(VAR_8);


 VAR_9 = &VAR_8->gpio;
 VAR_9->parent = &VAR_6->dev;
 VAR_9->label = VAR_6->name;
 VAR_9->get = VAR_4;
 VAR_9->set = VAR_5;
 VAR_9->owner = VAR_3;


 VAR_9->base = -1;
 VAR_9->ngpio = 20;

 VAR_10 = FUNC_4(&VAR_6->dev, VAR_9, ((void*)0));
 if (VAR_10) {
  FUNC_2(&VAR_6->dev, "unable to add GPIO chip\n");
  return VAR_10;
 }

 return 0;
}
