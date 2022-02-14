
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lm8333_platform_data {int active_time; int debounce_time; int matrix_data; } ;
struct lm8333 {int keycodes; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_4__ {int bustype; } ;
struct TYPE_3__ {int * parent; } ;
struct input_dev {TYPE_2__ id; TYPE_1__ dev; int name; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; int name; } ;


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
 int FUNC_0 (int *,char*) ;
 struct lm8333_platform_data* FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int ,struct lm8333*) ;
 int FUNC_4 (struct i2c_client*,struct lm8333*) ;
 struct input_dev* FUNC_5 () ;
 int FUNC_6 (struct input_dev*) ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*,int ,int ) ;
 int FUNC_9 (struct lm8333*) ;
 struct lm8333* FUNC_10 (int,int ) ;
 int VAR_12 ;
 int FUNC_11 (struct lm8333*,int ,int) ;
 int FUNC_12 (int ,int *,int ,int ,int ,struct input_dev*) ;
 int FUNC_13 (int ,int *,int ,int,char*,struct lm8333*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13,
      const struct i2c_device_id *VAR_14)
{
 const struct lm8333_platform_data *VAR_15 =
   FUNC_1(&VAR_13->dev);
 struct lm8333 *VAR_16;
 struct input_dev *VAR_17;
 int VAR_18, VAR_19;

 if (!VAR_15)
  return -VAR_1;

 VAR_19 = VAR_15->active_time ?: 500;
 if (VAR_19 / 3 <= VAR_15->debounce_time / 3) {
  FUNC_0(&VAR_13->dev, "Active time not big enough!\n");
  return -VAR_1;
 }

 VAR_16 = FUNC_10(sizeof(*VAR_16), VAR_4);
 VAR_17 = FUNC_5();
 if (!VAR_16 || !VAR_17) {
  VAR_18 = -VAR_2;
  goto free_mem;
 }

 VAR_16->client = VAR_13;
 VAR_16->input = VAR_17;

 VAR_17->name = VAR_13->name;
 VAR_17->dev.parent = &VAR_13->dev;
 VAR_17->id.bustype = VAR_0;

 FUNC_8(VAR_17, VAR_3, VAR_11);

 VAR_18 = FUNC_12(VAR_15->matrix_data, ((void*)0),
      VAR_10, VAR_9,
      VAR_16->keycodes, VAR_17);
 if (VAR_18)
  goto free_mem;

 if (VAR_15->debounce_time) {
  VAR_18 = FUNC_11(VAR_16, VAR_8,
        VAR_15->debounce_time / 3);
  if (VAR_18)
   FUNC_2(&VAR_13->dev, "Unable to set debounce time\n");
 }

 if (VAR_15->active_time) {
  VAR_18 = FUNC_11(VAR_16, VAR_7,
        VAR_15->active_time / 3);
  if (VAR_18)
   FUNC_2(&VAR_13->dev, "Unable to set active time\n");
 }

 VAR_18 = FUNC_13(VAR_13->irq, ((void*)0), VAR_12,
       VAR_6 | VAR_5,
       "lm8333", VAR_16);
 if (VAR_18)
  goto free_mem;

 VAR_18 = FUNC_7(VAR_17);
 if (VAR_18)
  goto free_irq;

 FUNC_4(VAR_13, VAR_16);
 return 0;

 free_irq:
 FUNC_3(VAR_13->irq, VAR_16);
 free_mem:
 FUNC_6(VAR_17);
 FUNC_9(VAR_16);
 return VAR_18;
}
