
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct max7301_platform_data {int base; int input_pullup_active; } ;
struct TYPE_5__ {int base; int (* direction_input ) (TYPE_2__*,int) ;int can_sleep; int owner; struct device* parent; int ngpio; int set; int direction_output; int get; int label; } ;
struct max7301 {int* port_config; int lock; TYPE_2__ chip; int input_pullup_active; int (* write ) (struct device*,int,int) ;struct device* dev; } ;
struct device {TYPE_1__* driver; } ;
struct TYPE_4__ {int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct max7301_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,struct max7301*) ;
 int FUNC_2 (TYPE_2__*,struct max7301*) ;
 int FUNC_3 (TYPE_2__*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct device*,int,int) ;

int FUNC_7(struct max7301 *VAR_5)
{
 struct device *VAR_6 = VAR_5->dev;
 struct max7301_platform_data *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = FUNC_0(VAR_6);

 FUNC_5(&VAR_5->lock);
 FUNC_1(VAR_6, VAR_5);


 VAR_5->write(VAR_6, 0x04, 0x01);

 if (VAR_7) {
  VAR_5->input_pullup_active = VAR_7->input_pullup_active;
  VAR_5->chip.base = VAR_7->base;
 } else {
  VAR_5->chip.base = -1;
 }
 VAR_5->chip.label = VAR_6->driver->name;

 VAR_5->chip.direction_input = FUNC_3;
 VAR_5->chip.get = VAR_3;
 VAR_5->chip.direction_output = VAR_2;
 VAR_5->chip.set = VAR_4;

 VAR_5->chip.ngpio = VAR_0;
 VAR_5->chip.can_sleep = 1;
 VAR_5->chip.parent = VAR_6;
 VAR_5->chip.owner = VAR_1;

 VAR_9 = FUNC_2(&VAR_5->chip, VAR_5);
 if (VAR_9)
  goto exit_destroy;





 for (VAR_8 = 1; VAR_8 < 8; VAR_8++) {
  int VAR_10;






  VAR_5->port_config[VAR_8] = 0xAA;
  for (VAR_10 = 0; VAR_10 < 4; VAR_10++) {
   int VAR_11 = (VAR_8 - 1) * 4 + VAR_10;
   VAR_9 = FUNC_3(&VAR_5->chip, VAR_11);
   if (VAR_9)
    goto exit_destroy;
  }
 }

 return VAR_9;

exit_destroy:
 FUNC_4(&VAR_5->lock);
 return VAR_9;
}
