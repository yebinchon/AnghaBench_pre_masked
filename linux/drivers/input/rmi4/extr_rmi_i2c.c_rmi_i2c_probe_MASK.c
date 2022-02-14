
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct rmi_device_platform_data {int irq; } ;
struct TYPE_13__ {char* proto_name; int * ops; TYPE_2__* dev; struct rmi_device_platform_data pdata; } ;
struct rmi_i2c_xport {TYPE_1__ xport; int page_mutex; struct i2c_client* client; int startup_delay; TYPE_3__* supplies; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_14__ {int of_node; } ;
struct i2c_client {TYPE_2__ dev; int adapter; int irq; } ;
struct TYPE_15__ {char* supply; } ;


 int FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_2__*,char*,...) ;
 struct rmi_device_platform_data* FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,char*) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*,int ,struct rmi_i2c_xport*) ;
 struct rmi_i2c_xport* FUNC_6 (TYPE_2__*,int,int ) ;
 int FUNC_7 (TYPE_2__*,int ,TYPE_3__*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct rmi_i2c_xport*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int ,char*,int *) ;
 int FUNC_13 (int ,TYPE_3__*) ;
 int FUNC_14 (int ,TYPE_2__*,char*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (struct rmi_i2c_xport*,int ) ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct rmi_device_platform_data *VAR_10;
 struct rmi_device_platform_data *VAR_11 =
     FUNC_2(&VAR_8->dev);
 struct rmi_i2c_xport *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_6(&VAR_8->dev, sizeof(struct rmi_i2c_xport),
    VAR_2);
 if (!VAR_12)
  return -VAR_1;

 VAR_10 = &VAR_12->xport.pdata;

 if (!VAR_8->dev.of_node && VAR_11)
  *VAR_10 = *VAR_11;

 VAR_10->irq = VAR_8->irq;

 FUNC_14(VAR_4, &VAR_8->dev, "Probing %s.\n",
   FUNC_4(&VAR_8->dev));

 if (!FUNC_8(VAR_8->adapter, VAR_3)) {
  FUNC_1(&VAR_8->dev,
   "adapter does not support required functionality\n");
  return -VAR_0;
 }

 VAR_12->supplies[0].supply = "vdd";
 VAR_12->supplies[1].supply = "vio";
 VAR_13 = FUNC_7(&VAR_8->dev,
      FUNC_0(VAR_12->supplies),
      VAR_12->supplies);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_13(FUNC_0(VAR_12->supplies),
           VAR_12->supplies);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_5(&VAR_8->dev,
       VAR_6,
       VAR_12);
 if (VAR_13)
  return VAR_13;

 FUNC_12(VAR_8->dev.of_node, "syna,startup-delay-ms",
        &VAR_12->startup_delay);

 FUNC_10(VAR_12->startup_delay);

 VAR_12->client = VAR_8;
 FUNC_11(&VAR_12->page_mutex);

 VAR_12->xport.dev = &VAR_8->dev;
 VAR_12->xport.proto_name = "i2c";
 VAR_12->xport.ops = &VAR_5;

 FUNC_9(VAR_8, VAR_12);





 VAR_13 = FUNC_16(VAR_12, 0);
 if (VAR_13) {
  FUNC_1(&VAR_8->dev, "Failed to set page select to 0\n");
  return VAR_13;
 }

 FUNC_3(&VAR_8->dev, "registering I2C-connected sensor\n");

 VAR_13 = FUNC_15(&VAR_12->xport);
 if (VAR_13) {
  FUNC_1(&VAR_8->dev, "failed to register sensor: %d\n", VAR_13);
  return VAR_13;
 }

 VAR_13 = FUNC_5(&VAR_8->dev,
       VAR_7,
       VAR_12);
 if (VAR_13)
  return VAR_13;

 return 0;
}
