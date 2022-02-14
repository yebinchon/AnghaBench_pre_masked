
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct max5821_data {int* powerdown; int vref_mv; int vref_reg; int * powerdown_mode; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int modes; int channels; int num_channels; TYPE_1__ dev; int name; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,char*) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct max5821_data* FUNC_8 (struct iio_dev*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_6,
   const struct i2c_device_id *VAR_7)
{
 struct max5821_data *VAR_8;
 struct iio_dev *VAR_9;
 u32 VAR_10;
 int VAR_11;

 VAR_9 = FUNC_4(&VAR_6->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_0;
 VAR_8 = FUNC_8(VAR_9);
 FUNC_6(VAR_6, VAR_9);
 VAR_8->client = VAR_6;
 FUNC_9(&VAR_8->lock);


 for (VAR_10 = 0; VAR_10 < VAR_3; VAR_10++) {
  VAR_8->powerdown[VAR_10] = 1;
  VAR_8->powerdown_mode[VAR_10] = VAR_2;
 }

 VAR_8->vref_reg = FUNC_5(&VAR_6->dev, "vref");
 if (FUNC_1(VAR_8->vref_reg)) {
  VAR_11 = FUNC_2(VAR_8->vref_reg);
  FUNC_3(&VAR_6->dev,
   "Failed to get vref regulator: %d\n", VAR_11);
  goto error_free_reg;
 }

 VAR_11 = FUNC_11(VAR_8->vref_reg);
 if (VAR_11) {
  FUNC_3(&VAR_6->dev,
   "Failed to enable vref regulator: %d\n", VAR_11);
  goto error_free_reg;
 }

 VAR_11 = FUNC_12(VAR_8->vref_reg);
 if (VAR_11 < 0) {
  FUNC_3(&VAR_6->dev,
   "Failed to get voltage on regulator: %d\n", VAR_11);
  goto error_disable_reg;
 }

 VAR_8->vref_mv = VAR_11 / 1000;

 VAR_9->name = VAR_7->name;
 VAR_9->dev.parent = &VAR_6->dev;
 VAR_9->num_channels = FUNC_0(VAR_4);
 VAR_9->channels = VAR_4;
 VAR_9->modes = VAR_1;
 VAR_9->info = &VAR_5;

 return FUNC_7(VAR_9);

error_disable_reg:
 FUNC_10(VAR_8->vref_reg);

error_free_reg:

 return VAR_11;
}
