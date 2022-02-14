
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct stmfts_data {int * ledvdd; scalar_t__ use_key; TYPE_2__* input; int prop; TYPE_8__* regulators; int cmd_done; int mutex; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int irq; int adapter; } ;
struct TYPE_13__ {char* supply; } ;
struct TYPE_11__ {int bustype; } ;
struct TYPE_12__ {int close; int open; TYPE_1__ id; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_8__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 size_t VAR_23 ;
 size_t VAR_24 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,int ,struct stmfts_data*) ;
 int FUNC_6 (int *,int *) ;
 TYPE_2__* FUNC_7 (int *) ;
 struct stmfts_data* FUNC_8 (int *,int,int ) ;
 int FUNC_9 (int *,int ,TYPE_8__*) ;
 int FUNC_10 (int *,int ,int *,int ,int ,char*,struct stmfts_data*) ;
 int FUNC_11 (int ,int) ;
 int FUNC_12 (struct i2c_client*,struct stmfts_data*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (TYPE_2__*,int ,int ) ;
 int FUNC_15 (TYPE_2__*) ;
 int FUNC_16 (TYPE_2__*,int ,int ,int,int ,int ) ;
 int FUNC_17 (TYPE_2__*,int ,int ) ;
 int FUNC_18 (TYPE_2__*,struct stmfts_data*) ;
 int FUNC_19 (int ,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int VAR_25 ;
 int FUNC_22 (struct stmfts_data*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_23 (struct stmfts_data*) ;
 int FUNC_24 (TYPE_2__*,int,int *) ;

__attribute__((used)) static int FUNC_25(struct i2c_client *VAR_30,
   const struct i2c_device_id *VAR_31)
{
 int VAR_32;
 struct stmfts_data *VAR_33;

 if (!FUNC_11(VAR_30->adapter, VAR_13 |
      VAR_14 |
      VAR_15))
  return -VAR_8;

 VAR_33 = FUNC_8(&VAR_30->dev, sizeof(*VAR_33), VAR_12);
 if (!VAR_33)
  return -VAR_9;

 FUNC_12(VAR_30, VAR_33);

 VAR_33->client = VAR_30;
 FUNC_20(&VAR_33->mutex);
 FUNC_13(&VAR_33->cmd_done);

 VAR_33->regulators[VAR_24].supply = "vdd";
 VAR_33->regulators[VAR_23].supply = "avdd";
 VAR_32 = FUNC_9(&VAR_30->dev,
          FUNC_0(VAR_33->regulators),
          VAR_33->regulators);
 if (VAR_32)
  return VAR_32;

 VAR_33->input = FUNC_7(&VAR_30->dev);
 if (!VAR_33->input)
  return -VAR_9;

 VAR_33->input->name = VAR_21;
 VAR_33->input->id.bustype = VAR_7;
 VAR_33->input->open = VAR_27;
 VAR_33->input->close = VAR_26;

 FUNC_17(VAR_33->input, VAR_10, VAR_2);
 FUNC_17(VAR_33->input, VAR_10, VAR_3);
 FUNC_24(VAR_33->input, 1, &VAR_33->prop);

 FUNC_16(VAR_33->input, VAR_5, 0, 255, 0, 0);
 FUNC_16(VAR_33->input, VAR_6, 0, 255, 0, 0);
 FUNC_16(VAR_33->input, VAR_1, 0, 255, 0, 0);
 FUNC_16(VAR_33->input, VAR_4, 0, 255, 0, 0);
 FUNC_16(VAR_33->input, VAR_0, 0, 255, 0, 0);

 VAR_33->use_key = FUNC_4(&VAR_30->dev,
         "touch-key-connected");
 if (VAR_33->use_key) {
  FUNC_17(VAR_33->input, VAR_11, VAR_20);
  FUNC_17(VAR_33->input, VAR_11, VAR_19);
 }

 VAR_32 = FUNC_14(VAR_33->input,
      VAR_22, VAR_16);
 if (VAR_32)
  return VAR_32;

 FUNC_18(VAR_33->input, VAR_33);
 FUNC_19(VAR_30->irq, VAR_18);
 VAR_32 = FUNC_10(&VAR_30->dev, VAR_30->irq,
     ((void*)0), VAR_28,
     VAR_17,
     "stmfts_irq", VAR_33);
 if (VAR_32)
  return VAR_32;

 FUNC_1(&VAR_30->dev, "initializing ST-Microelectronics FTS...\n");

 VAR_32 = FUNC_23(VAR_33);
 if (VAR_32)
  return VAR_32;

 VAR_32 = FUNC_5(&VAR_30->dev, VAR_29, VAR_33);
 if (VAR_32)
  return VAR_32;

 VAR_32 = FUNC_15(VAR_33->input);
 if (VAR_32)
  return VAR_32;

 if (VAR_33->use_key) {
  VAR_32 = FUNC_22(VAR_33);
  if (VAR_32) {






   FUNC_2(&VAR_30->dev, "unable to use touchkey leds\n");
   VAR_33->ledvdd = ((void*)0);
  }
 }

 VAR_32 = FUNC_6(&VAR_30->dev, &VAR_25);
 if (VAR_32)
  return VAR_32;

 FUNC_21(&VAR_30->dev);
 FUNC_3(&VAR_30->dev);

 return 0;
}
