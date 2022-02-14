
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct i2c_device_id {int dummy; } ;
struct TYPE_13__ {int parent; } ;
struct i2c_client {TYPE_6__ dev; } ;
struct drv2667_data {TYPE_2__* input_dev; int regmap; struct i2c_client* client; int work; int regulator; } ;
struct TYPE_11__ {int parent; } ;
struct TYPE_12__ {char* name; int close; TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__*,char*,...) ;
 TYPE_2__* FUNC_4 (TYPE_6__*) ;
 struct drv2667_data* FUNC_5 (TYPE_6__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (TYPE_6__*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct drv2667_data*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct i2c_client*,struct drv2667_data*) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int ,int ) ;
 int FUNC_13 (TYPE_2__*,struct drv2667_data*) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct drv2667_data *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_5(&VAR_8->dev, sizeof(*VAR_10), VAR_3);
 if (!VAR_10)
  return -VAR_0;

 VAR_10->regulator = FUNC_7(&VAR_8->dev, "vbat");
 if (FUNC_1(VAR_10->regulator)) {
  VAR_11 = FUNC_2(VAR_10->regulator);
  FUNC_3(&VAR_8->dev,
   "unable to get regulator, error: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_10->input_dev = FUNC_4(&VAR_8->dev);
 if (!VAR_10->input_dev) {
  FUNC_3(&VAR_8->dev, "Failed to allocate input device\n");
  return -VAR_0;
 }

 VAR_10->input_dev->name = "drv2667:haptics";
 VAR_10->input_dev->dev.parent = VAR_8->dev.parent;
 VAR_10->input_dev->close = VAR_4;
 FUNC_13(VAR_10->input_dev, VAR_10);
 FUNC_12(VAR_10->input_dev, VAR_1, VAR_2);

 VAR_11 = FUNC_10(VAR_10->input_dev, ((void*)0),
     VAR_5);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "input_ff_create() failed: %d\n",
   VAR_11);
  return VAR_11;
 }

 FUNC_0(&VAR_10->work, VAR_7);

 VAR_10->client = VAR_8;
 FUNC_9(VAR_8, VAR_10);

 VAR_10->regmap = FUNC_6(VAR_8, &VAR_6);
 if (FUNC_1(VAR_10->regmap)) {
  VAR_11 = FUNC_2(VAR_10->regmap);
  FUNC_3(&VAR_8->dev, "Failed to allocate register map: %d\n",
   VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_8(VAR_10);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "Device init failed: %d\n", VAR_11);
  return VAR_11;
 }

 VAR_11 = FUNC_11(VAR_10->input_dev);
 if (VAR_11) {
  FUNC_3(&VAR_8->dev, "couldn't register input device: %d\n",
   VAR_11);
  return VAR_11;
 }

 return 0;
}
