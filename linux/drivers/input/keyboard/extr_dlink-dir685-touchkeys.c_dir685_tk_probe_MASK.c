
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int irq; struct device dev; } ;
struct dir685_touchkeys {struct device* dev; TYPE_2__* input; int * codes; struct i2c_client* client; } ;
typedef int bl_data ;
struct TYPE_4__ {int bustype; } ;
struct TYPE_5__ {int keycodesize; int keycodemax; char* name; TYPE_1__ id; int keybit; int evbit; int * keycode; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct device*,char*) ;
 int FUNC_4 (struct device*,char*) ;
 TYPE_2__* FUNC_5 (struct device*) ;
 struct dir685_touchkeys* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,int *,int ,int ,char*,struct dir685_touchkeys*) ;
 int VAR_13 ;
 int FUNC_8 (struct i2c_client*,int*,int) ;
 int FUNC_9 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 struct dir685_touchkeys *VAR_16;
 struct device *VAR_17 = &VAR_14->dev;
 u8 VAR_18[] = { 0xa7, 0x40 };
 int VAR_19;
 int VAR_20;

 VAR_16 = FUNC_6(&VAR_14->dev, sizeof(*VAR_16), VAR_4);
 if (!VAR_16)
  return -VAR_2;

 VAR_16->input = FUNC_5(VAR_17);
 if (!VAR_16->input)
  return -VAR_2;

 VAR_16->client = VAR_14;
 VAR_16->dev = VAR_17;

 VAR_16->input->keycodesize = sizeof(u16);
 VAR_16->input->keycodemax = FUNC_0(VAR_16->codes);
 VAR_16->input->keycode = VAR_16->codes;
 VAR_16->codes[0] = VAR_11;
 VAR_16->codes[1] = VAR_6;
 VAR_16->codes[2] = VAR_8;
 VAR_16->codes[3] = VAR_10;
 VAR_16->codes[4] = VAR_7;
 VAR_16->codes[5] = VAR_12;




 VAR_16->codes[6] = VAR_9;

 FUNC_2(VAR_3, VAR_16->input->evbit);
 for (VAR_20 = 0; VAR_20 < FUNC_0(VAR_16->codes); VAR_20++)
  FUNC_2(VAR_16->codes[VAR_20], VAR_16->input->keybit);
 FUNC_1(VAR_9, VAR_16->input->keybit);

 VAR_16->input->name = "D-Link DIR-685 touchkeys";
 VAR_16->input->id.bustype = VAR_0;

 VAR_19 = FUNC_9(VAR_16->input);
 if (VAR_19)
  return VAR_19;


 VAR_19 = FUNC_8(VAR_14, VAR_18, sizeof(VAR_18));
 if (VAR_19 != sizeof(VAR_18))
  FUNC_4(VAR_16->dev, "error setting brightness level\n");

 if (!VAR_14->irq) {
  FUNC_3(VAR_17, "no IRQ on the I2C device\n");
  return -VAR_1;
 }
 VAR_19 = FUNC_7(VAR_17, VAR_14->irq,
     ((void*)0), VAR_13,
     VAR_5,
     "dir685-tk", VAR_16);
 if (VAR_19) {
  FUNC_3(VAR_17, "can't request IRQ\n");
  return VAR_19;
 }

 return 0;
}
