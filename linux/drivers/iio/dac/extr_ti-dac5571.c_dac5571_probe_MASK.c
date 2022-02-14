
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int of_node; struct device* parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct device {int of_node; } ;
struct i2c_client {struct device dev; } ;
struct dac5571_spec {int num_channels; } ;
struct dac5571_data {int (* dac5571_cmd ) (struct dac5571_data*,int,int ) ;int vref; int dac5571_pwrdwn; int lock; struct dac5571_spec const* spec; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct dac5571_data*,int,int ) ;
 int FUNC_3 (struct dac5571_data*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct dac5571_spec* VAR_6 ;
 int FUNC_4 (struct device*,char*,int) ;
 struct iio_dev* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 struct dac5571_data* FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct dac5571_data*,int,int ) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 const struct dac5571_spec *VAR_10;
 struct dac5571_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13, VAR_14;

 VAR_12 = FUNC_5(VAR_9, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_9(VAR_12);
 FUNC_7(VAR_7, VAR_12);
 VAR_11->client = VAR_7;

 VAR_12->dev.parent = VAR_9;
 VAR_12->dev.of_node = VAR_7->dev.of_node;
 VAR_12->info = &VAR_3;
 VAR_12->name = VAR_8->name;
 VAR_12->modes = VAR_1;
 VAR_12->channels = VAR_2;

 VAR_10 = &VAR_6[VAR_8->driver_data];
 VAR_12->num_channels = VAR_10->num_channels;
 VAR_11->spec = VAR_10;

 VAR_11->vref = FUNC_6(VAR_9, "vref");
 if (FUNC_0(VAR_11->vref))
  return FUNC_1(VAR_11->vref);

 VAR_13 = FUNC_12(VAR_11->vref);
 if (VAR_13 < 0)
  return VAR_13;

 FUNC_10(&VAR_11->lock);

 switch (VAR_10->num_channels) {
 case 1:
  VAR_11->dac5571_cmd = FUNC_3;
  VAR_11->dac5571_pwrdwn = VAR_5;
  break;
 case 4:
  VAR_11->dac5571_cmd = FUNC_2;
  VAR_11->dac5571_pwrdwn = VAR_4;
  break;
 default:
  goto err;
 }

 for (VAR_14 = 0; VAR_14 < VAR_10->num_channels; VAR_14++) {
  VAR_13 = VAR_11->dac5571_cmd(VAR_11, VAR_14, 0);
  if (VAR_13) {
   FUNC_4(VAR_9, "failed to initialize channel %d to 0\n", VAR_14);
   goto err;
  }
 }

 VAR_13 = FUNC_8(VAR_12);
 if (VAR_13)
  goto err;

 return 0;

 err:
 FUNC_11(VAR_11->vref);
 return VAR_13;
}
