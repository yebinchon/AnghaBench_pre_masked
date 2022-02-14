
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int can_sleep; int base; unsigned int ngpio; int owner; TYPE_2__* parent; int of_node; int label; int dbg_show; int set; int get; int direction_output; int direction_input; } ;
struct adnp {TYPE_1__* client; scalar_t__ reg_shift; struct gpio_chip gpio; } ;
struct TYPE_4__ {int of_node; } ;
struct TYPE_3__ {TYPE_2__ dev; int name; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_2__*,struct gpio_chip*,struct adnp*) ;
 scalar_t__ FUNC_2 (unsigned int) ;

__attribute__((used)) static int FUNC_3(struct adnp *VAR_7, unsigned int VAR_8)
{
 struct gpio_chip *VAR_9 = &VAR_7->gpio;
 int VAR_10;

 VAR_7->reg_shift = FUNC_2(VAR_8) - 3;

 VAR_9->direction_input = VAR_3;
 VAR_9->direction_output = VAR_4;
 VAR_9->get = VAR_5;
 VAR_9->set = VAR_6;
 VAR_9->can_sleep = 1;

 if (FUNC_0(VAR_0))
  VAR_9->dbg_show = VAR_2;

 VAR_9->base = -1;
 VAR_9->ngpio = VAR_8;
 VAR_9->label = VAR_7->client->name;
 VAR_9->parent = &VAR_7->client->dev;
 VAR_9->of_node = VAR_9->parent->of_node;
 VAR_9->owner = VAR_1;

 VAR_10 = FUNC_1(&VAR_7->client->dev, VAR_9, VAR_7);
 if (VAR_10)
  return VAR_10;

 return 0;
}
