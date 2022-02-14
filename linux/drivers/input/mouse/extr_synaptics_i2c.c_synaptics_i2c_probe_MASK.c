
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct synaptics_i2c {int input; TYPE_1__* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int irq; int dev; } ;
struct TYPE_2__ {int dev; int irq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,int ) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (struct i2c_client*,struct synaptics_i2c*) ;
 int FUNC_4 () ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct synaptics_i2c*) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ,int ,int ,struct synaptics_i2c*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_9 (TYPE_1__*,int ,int ) ;
 int FUNC_10 (struct i2c_client*) ;
 int FUNC_11 (struct synaptics_i2c*) ;
 struct synaptics_i2c* FUNC_12 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_7,
          const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 struct synaptics_i2c *VAR_10;

 VAR_10 = FUNC_12(VAR_7);
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_10(VAR_7);
 if (VAR_9)
  goto err_mem_free;

 if (VAR_7->irq < 1)
  VAR_4 = 1;

 VAR_10->input = FUNC_4();
 if (!VAR_10->input) {
  VAR_9 = -VAR_1;
  goto err_mem_free;
 }

 FUNC_11(VAR_10);

 if (!VAR_4) {
  FUNC_0(&VAR_10->client->dev,
    "Requesting IRQ: %d\n", VAR_10->client->irq);

  VAR_9 = FUNC_8(VAR_10->client->irq, VAR_6,
      VAR_3,
      VAR_0, VAR_10);
  if (VAR_9) {
   FUNC_2(&VAR_10->client->dev,
      "IRQ request failed: %d, "
      "falling back to polling\n", VAR_9);
   VAR_4 = 1;
   FUNC_9(VAR_10->client,
           VAR_2, 0);
  }
 }

 if (VAR_4)
  FUNC_0(&VAR_10->client->dev,
    "Using polling at rate: %d times/sec\n", VAR_5);


 VAR_9 = FUNC_6(VAR_10->input);
 if (VAR_9) {
  FUNC_1(&VAR_7->dev,
    "Input device register failed: %d\n", VAR_9);
  goto err_input_free;
 }

 FUNC_3(VAR_7, VAR_10);

 return 0;

err_input_free:
 FUNC_5(VAR_10->input);
err_mem_free:
 FUNC_7(VAR_10);

 return VAR_9;
}
