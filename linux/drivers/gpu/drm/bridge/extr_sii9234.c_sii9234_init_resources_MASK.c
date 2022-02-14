
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sii9234 {struct i2c_client** client; TYPE_1__* dev; TYPE_2__* supplies; int gpio_reset; } ;
struct i2c_client {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct TYPE_6__ {char* supply; } ;
struct TYPE_5__ {int of_node; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (TYPE_1__*,int,TYPE_2__*) ;
 void* FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_7(struct sii9234 *VAR_9,
      struct i2c_client *VAR_10)
{
 struct i2c_adapter *VAR_11 = VAR_10->adapter;
 int VAR_12;

 if (!VAR_9->dev->of_node) {
  FUNC_2(VAR_9->dev, "not DT device\n");
  return -VAR_0;
 }

 VAR_9->gpio_reset = FUNC_3(VAR_9->dev, "reset", VAR_1);
 if (FUNC_0(VAR_9->gpio_reset)) {
  FUNC_2(VAR_9->dev, "failed to get reset gpio from DT\n");
  return FUNC_1(VAR_9->gpio_reset);
 }

 VAR_9->supplies[0].supply = "avcc12";
 VAR_9->supplies[1].supply = "avcc33";
 VAR_9->supplies[2].supply = "iovcc18";
 VAR_9->supplies[3].supply = "cvcc12";
 VAR_12 = FUNC_4(VAR_9->dev, 4, VAR_9->supplies);
 if (VAR_12) {
  FUNC_2(VAR_9->dev, "regulator_bulk failed\n");
  return VAR_12;
 }

 VAR_9->client[VAR_6] = VAR_10;

 VAR_9->client[VAR_7] = FUNC_5(VAR_11, VAR_8);
 if (!VAR_9->client[VAR_7]) {
  FUNC_2(VAR_9->dev, "failed to create TPI client\n");
  return -VAR_0;
 }

 VAR_9->client[VAR_4] = FUNC_5(VAR_11, VAR_5);
 if (!VAR_9->client[VAR_4]) {
  FUNC_2(VAR_9->dev, "failed to create HDMI RX client\n");
  goto fail_tpi;
 }

 VAR_9->client[VAR_2] = FUNC_5(VAR_11, VAR_3);
 if (!VAR_9->client[VAR_2]) {
  FUNC_2(VAR_9->dev, "failed to create CBUS client\n");
  goto fail_hdmi;
 }

 return 0;

fail_hdmi:
 FUNC_6(VAR_9->client[VAR_4]);
fail_tpi:
 FUNC_6(VAR_9->client[VAR_7]);

 return -VAR_0;
}
