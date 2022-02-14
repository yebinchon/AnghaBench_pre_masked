
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_8__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct s6sy761_data {TYPE_2__* input; int tx_channel; int prop; TYPE_8__* regulators; struct i2c_client* client; } ;
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
 size_t VAR_18 ;
 size_t VAR_19 ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,int ,struct s6sy761_data*) ;
 int FUNC_3 (int *,int *) ;
 TYPE_2__* FUNC_4 (int *) ;
 struct s6sy761_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (int *,int ,TYPE_8__*) ;
 int FUNC_7 (int *,int ,int *,int ,int,char*,struct s6sy761_data*) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (struct i2c_client*,struct s6sy761_data*) ;
 int FUNC_10 (TYPE_2__*,int ) ;
 int FUNC_11 (TYPE_2__*,int ,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*,int ,int ,int,int ,int ) ;
 int FUNC_14 (TYPE_2__*,struct s6sy761_data*) ;
 int FUNC_15 (int *) ;
 int VAR_20 ;
 int FUNC_16 (struct s6sy761_data*,unsigned int*,unsigned int*) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_17 (TYPE_2__*,int,int *) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_25,
    const struct i2c_device_id *VAR_26)
{
 struct s6sy761_data *VAR_27;
 unsigned int VAR_28, VAR_29;
 int VAR_30;

 if (!FUNC_8(VAR_25->adapter, VAR_11 |
      VAR_12 |
      VAR_13))
  return -VAR_8;

 VAR_27 = FUNC_5(&VAR_25->dev, sizeof(*VAR_27), VAR_10);
 if (!VAR_27)
  return -VAR_9;

 FUNC_9(VAR_25, VAR_27);
 VAR_27->client = VAR_25;

 VAR_27->regulators[VAR_19].supply = "vdd";
 VAR_27->regulators[VAR_18].supply = "avdd";
 VAR_30 = FUNC_6(&VAR_25->dev,
          FUNC_0(VAR_27->regulators),
          VAR_27->regulators);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_2(&VAR_25->dev, VAR_24, VAR_27);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_16(VAR_27, &VAR_28, &VAR_29);
 if (VAR_30)
  return VAR_30;

 VAR_27->input = FUNC_4(&VAR_25->dev);
 if (!VAR_27->input)
  return -VAR_9;

 VAR_27->input->name = VAR_17;
 VAR_27->input->id.bustype = VAR_7;
 VAR_27->input->open = VAR_22;
 VAR_27->input->close = VAR_21;

 FUNC_13(VAR_27->input, VAR_0, 0, VAR_28, 0, 0);
 FUNC_13(VAR_27->input, VAR_1, 0, VAR_29, 0, 0);
 FUNC_13(VAR_27->input, VAR_3, 0, 255, 0, 0);
 FUNC_13(VAR_27->input, VAR_4, 0, 255, 0, 0);
 FUNC_13(VAR_27->input, VAR_3, 0, 255, 0, 0);
 FUNC_13(VAR_27->input, VAR_4, 0, 255, 0, 0);
 FUNC_13(VAR_27->input, VAR_2, 0, 255, 0, 0);

 FUNC_17(VAR_27->input, 1, &VAR_27->prop);

 if (!FUNC_10(VAR_27->input, VAR_5) ||
     !FUNC_10(VAR_27->input, VAR_6)) {
  FUNC_1(&VAR_25->dev, "the axis have not been set\n");
 }

 VAR_30 = FUNC_11(VAR_27->input, VAR_27->tx_channel,
      VAR_14);
 if (VAR_30)
  return VAR_30;

 FUNC_14(VAR_27->input, VAR_27);

 VAR_30 = FUNC_12(VAR_27->input);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_7(&VAR_25->dev, VAR_25->irq, ((void*)0),
     VAR_23,
     VAR_16 | VAR_15,
     "s6sy761_irq", VAR_27);
 if (VAR_30)
  return VAR_30;

 VAR_30 = FUNC_3(&VAR_25->dev, &VAR_20);
 if (VAR_30)
  return VAR_30;

 FUNC_15(&VAR_25->dev);

 return 0;
}
