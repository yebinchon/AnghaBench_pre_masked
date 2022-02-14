
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct migor_ts_priv {int irq; struct input_dev* input; struct i2c_client* client; } ;
struct TYPE_4__ {int * parent; } ;
struct TYPE_3__ {int bustype; } ;
struct input_dev {int* evbit; int close; int open; TYPE_2__ dev; TYPE_1__ id; int name; int keybit; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int ,struct migor_ts_priv*) ;
 int FUNC_5 (struct i2c_client*,struct migor_ts_priv*) ;
 struct input_dev* FUNC_6 () ;
 int FUNC_7 (struct input_dev*) ;
 int FUNC_8 (struct input_dev*) ;
 int FUNC_9 (struct input_dev*,int ,int,int,int ,int ) ;
 int FUNC_10 (struct input_dev*,struct migor_ts_priv*) ;
 int FUNC_11 (struct migor_ts_priv*) ;
 struct migor_ts_priv* FUNC_12 (int,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (int ,int *,int ,int,int ,struct migor_ts_priv*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct migor_ts_priv *VAR_15;
 struct input_dev *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_12(sizeof(*VAR_15), VAR_7);
 VAR_16 = FUNC_6();
 if (!VAR_15 || !VAR_16) {
  FUNC_2(&VAR_13->dev, "failed to allocate memory\n");
  VAR_17 = -VAR_4;
  goto err_free_mem;
 }

 VAR_15->client = VAR_13;
 VAR_15->input = VAR_16;
 VAR_15->irq = VAR_13->irq;

 VAR_16->evbit[0] = FUNC_0(VAR_6) | FUNC_0(VAR_5);

 FUNC_1(VAR_2, VAR_16->keybit);

 FUNC_9(VAR_16, VAR_0, 95, 955, 0, 0);
 FUNC_9(VAR_16, VAR_1, 85, 935, 0, 0);

 VAR_16->name = VAR_13->name;
 VAR_16->id.bustype = VAR_3;
 VAR_16->dev.parent = &VAR_13->dev;

 VAR_16->open = VAR_12;
 VAR_16->close = VAR_10;

 FUNC_10(VAR_16, VAR_15);

 VAR_17 = FUNC_13(VAR_15->irq, ((void*)0), VAR_11,
                                     VAR_9 | VAR_8,
                                     VAR_13->name, VAR_15);
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "Unable to request touchscreen IRQ.\n");
  goto err_free_mem;
 }

 VAR_17 = FUNC_8(VAR_16);
 if (VAR_17)
  goto err_free_irq;

 FUNC_5(VAR_13, VAR_15);
 FUNC_3(&VAR_13->dev, 1);

 return 0;

 err_free_irq:
 FUNC_4(VAR_15->irq, VAR_15);
 err_free_mem:
 FUNC_7(VAR_16);
 FUNC_11(VAR_15);
 return VAR_17;
}
