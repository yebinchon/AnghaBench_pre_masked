
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; int * funcs; } ;
struct ptn3460_bridge {TYPE_1__ bridge; int edid_emulation; void* gpio_rst_n; void* gpio_pd_n; struct i2c_client* client; int panel; } ;
struct i2c_device_id {int dummy; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (struct device*,char*,...) ;
 void* FUNC_4 (struct device*,char*,int ) ;
 struct ptn3460_bridge* FUNC_5 (struct device*,int,int ) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ,int ,int *,int *) ;
 int FUNC_8 (struct i2c_client*,struct ptn3460_bridge*) ;
 int FUNC_9 (int ,char*,int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct ptn3460_bridge *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_5(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8) {
  return -VAR_0;
 }

 VAR_9 = FUNC_7(VAR_7->of_node, 0, 0, &VAR_8->panel, ((void*)0));
 if (VAR_9)
  return VAR_9;

 VAR_8->client = VAR_5;

 VAR_8->gpio_pd_n = FUNC_4(&VAR_5->dev, "powerdown",
            VAR_2);
 if (FUNC_1(VAR_8->gpio_pd_n)) {
  VAR_9 = FUNC_2(VAR_8->gpio_pd_n);
  FUNC_3(VAR_7, "cannot get gpio_pd_n %d\n", VAR_9);
  return VAR_9;
 }





 VAR_8->gpio_rst_n = FUNC_4(&VAR_5->dev, "reset",
      VAR_3);
 if (FUNC_1(VAR_8->gpio_rst_n)) {
  VAR_9 = FUNC_2(VAR_8->gpio_rst_n);
  FUNC_0("cannot get gpio_rst_n %d\n", VAR_9);
  return VAR_9;
 }

 VAR_9 = FUNC_9(VAR_7->of_node, "edid-emulation",
   &VAR_8->edid_emulation);
 if (VAR_9) {
  FUNC_3(VAR_7, "Can't read EDID emulation value\n");
  return VAR_9;
 }

 VAR_8->bridge.funcs = &VAR_4;
 VAR_8->bridge.of_node = VAR_7->of_node;
 FUNC_6(&VAR_8->bridge);

 FUNC_8(VAR_5, VAR_8);

 return 0;
}
