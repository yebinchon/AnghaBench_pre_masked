
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char const* name; int * ops; } ;
struct wf_lm75_sensor {int ds1775; TYPE_1__ sens; struct i2c_client* i2c; scalar_t__ inited; } ;
struct i2c_device_id {int driver_data; } ;
struct TYPE_4__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; int addr; } ;


 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,char*) ;
 int FUNC_2 (struct i2c_client*,struct wf_lm75_sensor*) ;
 int FUNC_3 (struct wf_lm75_sensor*) ;
 struct wf_lm75_sensor* FUNC_4 (int,int ) ;
 char* FUNC_5 (int ,char*,int *) ;
 int FUNC_6 (char const*,char*) ;
 int VAR_3 ;
 int FUNC_7 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct wf_lm75_sensor *VAR_6;
 int VAR_7, VAR_8 = VAR_5->driver_data;
 const char *VAR_9, *VAR_10;

 FUNC_0("wf_lm75: creating  %s device at address 0x%02x\n",
     VAR_8 ? "ds1775" : "lm75", VAR_4->addr);

 VAR_10 = FUNC_5(VAR_4->dev.of_node, "hwsensor-location", ((void*)0));
 if (!VAR_10) {
  FUNC_1(&VAR_4->dev, "Missing hwsensor-location property!\n");
  return -VAR_1;
 }





 if (!FUNC_6(VAR_10, "Hard drive") || !FUNC_6(VAR_10, "DRIVE BAY"))
  VAR_9 = "hd-temp";
 else if (!FUNC_6(VAR_10, "Incoming Air Temp"))
  VAR_9 = "incoming-air-temp";
 else if (!FUNC_6(VAR_10, "ODD Temp"))
  VAR_9 = "optical-drive-temp";
 else if (!FUNC_6(VAR_10, "HD Temp"))
  VAR_9 = "hard-drive-temp";
 else if (!FUNC_6(VAR_10, "PCI SLOTS"))
  VAR_9 = "slots-temp";
 else if (!FUNC_6(VAR_10, "CPU A INLET"))
  VAR_9 = "cpu-inlet-temp-0";
 else if (!FUNC_6(VAR_10, "CPU B INLET"))
  VAR_9 = "cpu-inlet-temp-1";
 else
  return -VAR_1;


 VAR_6 = FUNC_4(sizeof(struct wf_lm75_sensor), VAR_2);
 if (VAR_6 == ((void*)0))
  return -VAR_0;

 VAR_6->inited = 0;
 VAR_6->ds1775 = VAR_8;
 VAR_6->i2c = VAR_4;
 VAR_6->sens.name = VAR_9;
 VAR_6->sens.ops = &VAR_3;
 FUNC_2(VAR_4, VAR_6);

 VAR_7 = FUNC_7(&VAR_6->sens);
 if (VAR_7)
  FUNC_3(VAR_6);
 return VAR_7;
}
