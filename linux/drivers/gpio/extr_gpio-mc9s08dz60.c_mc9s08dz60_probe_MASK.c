
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int base; int can_sleep; int direction_output; int set; int get; int ngpio; int owner; int * parent; int label; } ;
struct mc9s08dz60 {TYPE_1__ chip; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_1__*,struct mc9s08dz60*) ;
 struct mc9s08dz60* FUNC_1 (int *,int,int ) ;
 int FUNC_2 (struct i2c_client*,struct mc9s08dz60*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_7,
       const struct i2c_device_id *VAR_8)
{
 struct mc9s08dz60 *VAR_9;

 VAR_9 = FUNC_1(&VAR_7->dev, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->chip.label = VAR_7->name;
 VAR_9->chip.base = -1;
 VAR_9->chip.parent = &VAR_7->dev;
 VAR_9->chip.owner = VAR_3;
 VAR_9->chip.ngpio = VAR_2;
 VAR_9->chip.can_sleep = 1;
 VAR_9->chip.get = VAR_5;
 VAR_9->chip.set = VAR_6;
 VAR_9->chip.direction_output = VAR_4;
 VAR_9->client = VAR_7;
 FUNC_2(VAR_7, VAR_9);

 return FUNC_0(&VAR_7->dev, &VAR_9->chip, VAR_9);
}
