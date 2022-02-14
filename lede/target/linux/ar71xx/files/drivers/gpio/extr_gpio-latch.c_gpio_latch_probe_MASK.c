
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpio_latch_platform_data {size_t le_gpio_index; size_t num_gpios; int* gpios; int base; int le_active_low; } ;
struct gpio_chip {int can_sleep; int ngpio; int direction_output; int direction_input; int set; int get; int base; int label; } ;
struct gpio_latch_chip {struct gpio_chip gc; int le_active_low; int * gpios; int le_gpio; int latch_mutex; int mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct gpio_latch_platform_data* FUNC_0 (int *) ;
 int FUNC_1 (int *,int,int ) ;
 void* FUNC_2 (int *,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (struct gpio_chip*) ;
 int FUNC_4 (int *,int*,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct platform_device*,struct gpio_latch_chip*) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_8)
{
 struct gpio_latch_chip *VAR_9;
 struct gpio_latch_platform_data *VAR_10;
 struct gpio_chip *VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14;

 VAR_10 = FUNC_0(&VAR_8->dev);
 if (!VAR_10)
  return -VAR_0;

 if (VAR_10->le_gpio_index >= VAR_10->num_gpios ||
     !VAR_10->num_gpios ||
     !VAR_10->gpios)
  return -VAR_0;

 for (VAR_14 = 0; VAR_14 < VAR_10->num_gpios; VAR_14++) {
  int VAR_15 = VAR_10->gpios[VAR_14];

  VAR_13 = FUNC_1(&VAR_8->dev, VAR_15,
     VAR_3);
  if (VAR_13)
   return VAR_13;
 }

 VAR_9 = FUNC_2(&VAR_8->dev, sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_5(&VAR_9->mutex);
 FUNC_5(&VAR_9->latch_mutex);

 VAR_12 = VAR_10->num_gpios * sizeof(VAR_9->gpios[0]);
 VAR_9->gpios = FUNC_2(&VAR_8->dev, VAR_12 , VAR_2);
 if (!VAR_9->gpios)
  return -VAR_1;

 FUNC_4(VAR_9->gpios, VAR_10->gpios, VAR_12);

 VAR_9->le_gpio = VAR_9->gpios[VAR_10->le_gpio_index];
 VAR_9->le_active_low = VAR_10->le_active_low;

 VAR_11 = &VAR_9->gc;

 VAR_11->label = VAR_3;
 VAR_11->base = VAR_10->base;
 VAR_11->can_sleep = 1;
 VAR_11->ngpio = VAR_10->num_gpios;
 VAR_11->get = VAR_6;
 VAR_11->set = VAR_7;
 VAR_11->direction_input = VAR_4,
 VAR_11->direction_output = VAR_5;

 FUNC_6(VAR_8, VAR_9);

 VAR_13 = FUNC_3(&VAR_9->gc);
 if (VAR_13)
  return VAR_13;

 return 0;
}
