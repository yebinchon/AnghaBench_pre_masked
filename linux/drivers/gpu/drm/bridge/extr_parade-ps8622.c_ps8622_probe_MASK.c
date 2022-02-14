
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int of_node; int * funcs; } ;
struct ps8622_bridge {scalar_t__ max_lane_count; scalar_t__ lane_count; TYPE_2__ bridge; TYPE_3__* bl; TYPE_3__* gpio_rst; TYPE_3__* gpio_slp; TYPE_3__* v12; struct i2c_client* client; int panel; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_7__ {void* brightness; void* max_brightness; } ;
struct TYPE_9__ {TYPE_1__ props; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (TYPE_3__*) ;
 void* VAR_3 ;
 int FUNC_2 (TYPE_3__*) ;
 TYPE_3__* FUNC_3 (char*,struct device*,struct ps8622_bridge*,int *,int *) ;
 int FUNC_4 (struct device*,char*,int) ;
 int FUNC_5 (struct device*,char*) ;
 void* FUNC_6 (struct device*,char*,int ) ;
 struct ps8622_bridge* FUNC_7 (struct device*,int,int ) ;
 TYPE_3__* FUNC_8 (struct device*,char*) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int ,int ,int ,int *,int *) ;
 int FUNC_11 (struct i2c_client*,struct ps8622_bridge*) ;
 int FUNC_12 (int ,char*,int *) ;
 scalar_t__ FUNC_13 (int ,char*,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_6,
     const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct ps8622_bridge *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_7(VAR_8, sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_10 = FUNC_10(VAR_8->of_node, 0, 0, &VAR_9->panel, ((void*)0));
 if (VAR_10)
  return VAR_10;

 VAR_9->client = VAR_6;

 VAR_9->v12 = FUNC_8(VAR_8, "vdd12");
 if (FUNC_1(VAR_9->v12)) {
  FUNC_5(VAR_8, "no 1.2v regulator found for PS8622\n");
  VAR_9->v12 = ((void*)0);
 }

 VAR_9->gpio_slp = FUNC_6(VAR_8, "sleep", VAR_2);
 if (FUNC_1(VAR_9->gpio_slp)) {
  VAR_10 = FUNC_2(VAR_9->gpio_slp);
  FUNC_4(VAR_8, "cannot get gpio_slp %d\n", VAR_10);
  return VAR_10;
 }





 VAR_9->gpio_rst = FUNC_6(VAR_8, "reset", VAR_2);
 if (FUNC_1(VAR_9->gpio_rst)) {
  VAR_10 = FUNC_2(VAR_9->gpio_rst);
  FUNC_4(VAR_8, "cannot get gpio_rst %d\n", VAR_10);
  return VAR_10;
 }

 VAR_9->max_lane_count = VAR_7->driver_data;

 if (FUNC_13(VAR_8->of_node, "lane-count",
      &VAR_9->lane_count)) {
  VAR_9->lane_count = VAR_9->max_lane_count;
 } else if (VAR_9->lane_count > VAR_9->max_lane_count) {
  FUNC_5(VAR_8, "lane-count property is too high,"
      "using max_lane_count\n");
  VAR_9->lane_count = VAR_9->max_lane_count;
 }

 if (!FUNC_12(VAR_8->of_node, "use-external-pwm", ((void*)0))) {
  VAR_9->bl = FUNC_3("ps8622-backlight",
    VAR_8, VAR_9, &VAR_4,
    ((void*)0));
  if (FUNC_1(VAR_9->bl)) {
   FUNC_0("failed to register backlight\n");
   VAR_10 = FUNC_2(VAR_9->bl);
   VAR_9->bl = ((void*)0);
   return VAR_10;
  }
  VAR_9->bl->props.max_brightness = VAR_3;
  VAR_9->bl->props.brightness = VAR_3;
 }

 VAR_9->bridge.funcs = &VAR_5;
 VAR_9->bridge.of_node = VAR_8->of_node;
 FUNC_9(&VAR_9->bridge);

 FUNC_11(VAR_6, VAR_9);

 return 0;
}
