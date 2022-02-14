
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct gpio_chip {int can_sleep; int * dbg_show; int ngpio; int base; int direction_output; int direction_input; int get_direction; int set; scalar_t__ get; scalar_t__ request; int parent; int label; int owner; } ;
struct TYPE_4__ {TYPE_1__* desc; int dev; } ;
struct TYPE_3__ {int ngpio; scalar_t__ get; scalar_t__ request; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 TYPE_2__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct gpio_chip *VAR_10)
{
 VAR_10->owner = VAR_1;
 VAR_10->label = VAR_0;
 VAR_10->parent = VAR_8.dev;


 VAR_10->request = VAR_8.desc->request ?
  VAR_8.desc->request : VAR_6;
 VAR_10->get = VAR_8.desc->get ?
  VAR_8.desc->get : VAR_4;

 VAR_10->set = VAR_7;
 VAR_10->get_direction = VAR_5;
 VAR_10->direction_input = VAR_2;
 VAR_10->direction_output = VAR_3;
 VAR_10->base = VAR_9;
 VAR_10->ngpio = VAR_8.desc->ngpio;
 VAR_10->can_sleep = 0;
 VAR_10->dbg_show = ((void*)0);
}
