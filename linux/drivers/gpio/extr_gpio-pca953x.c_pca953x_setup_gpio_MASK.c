
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct gpio_chip {int can_sleep; int ngpio; int names; int owner; int * parent; int label; int base; int set_config; int set_multiple; int get_direction; int set; int get; int direction_output; int direction_input; } ;
struct pca953x_chip {int names; TYPE_1__* client; int gpio_start; struct gpio_chip gpio_chip; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct pca953x_chip *VAR_8, int VAR_9)
{
 struct gpio_chip *VAR_10;

 VAR_10 = &VAR_8->gpio_chip;

 VAR_10->direction_input = VAR_1;
 VAR_10->direction_output = VAR_2;
 VAR_10->get = VAR_4;
 VAR_10->set = VAR_7;
 VAR_10->get_direction = VAR_3;
 VAR_10->set_multiple = VAR_6;
 VAR_10->set_config = VAR_5;
 VAR_10->can_sleep = 1;

 VAR_10->base = VAR_8->gpio_start;
 VAR_10->ngpio = VAR_9;
 VAR_10->label = FUNC_0(&VAR_8->client->dev);
 VAR_10->parent = &VAR_8->client->dev;
 VAR_10->owner = VAR_0;
 VAR_10->names = VAR_8->names;
}
