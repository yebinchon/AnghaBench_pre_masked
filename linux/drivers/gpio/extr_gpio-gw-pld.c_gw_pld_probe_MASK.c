
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct device {struct device_node* of_node; } ;
struct i2c_client {int flags; struct device dev; } ;
struct TYPE_2__ {int base; int can_sleep; int ngpio; int set; int direction_output; int get; int direction_input; int label; int owner; struct device_node* of_node; struct device* parent; } ;
struct gw_pld {int out; TYPE_1__ chip; struct i2c_client* client; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*,char*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*,TYPE_1__*,struct gw_pld*) ;
 struct gw_pld* FUNC_3 (struct device*,int,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct i2c_client*,struct gw_pld*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct device_node *VAR_11 = VAR_10->of_node;
 struct gw_pld *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(VAR_10, sizeof(*VAR_12), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->chip.base = -1;
 VAR_12->chip.can_sleep = 1;
 VAR_12->chip.parent = VAR_10;
 VAR_12->chip.of_node = VAR_11;
 VAR_12->chip.owner = VAR_3;
 VAR_12->chip.label = FUNC_1(VAR_10);
 VAR_12->chip.ngpio = 8;
 VAR_12->chip.direction_input = VAR_5;
 VAR_12->chip.get = VAR_4;
 VAR_12->chip.direction_output = VAR_6;
 VAR_12->chip.set = VAR_7;
 VAR_12->client = VAR_8;






 VAR_8->flags |= VAR_2;
 VAR_12->out = 0xFF;

 FUNC_4(VAR_8, VAR_12);

 VAR_13 = FUNC_2(VAR_10, &VAR_12->chip, VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_0(VAR_10, "registered Gateworks PLD GPIO device\n");

 return 0;
}
