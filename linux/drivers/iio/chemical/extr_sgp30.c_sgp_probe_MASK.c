
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* raw_words; } ;
struct sgp_data {struct i2c_client* client; int iaq_thread; TYPE_3__ buffer; int feature_set; int data_lock; } ;
struct of_device_id {scalar_t__ data; } ;
struct TYPE_6__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; int name; int * info; TYPE_2__ dev; } ;
struct i2c_device_id {unsigned long driver_data; int name; } ;
struct i2c_client {int name; int dev; } ;
struct TYPE_8__ {int num_channels; int channels; } ;
struct TYPE_5__ {int value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct sgp_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int ,struct sgp_data*,char*,int ) ;
 int FUNC_8 (int *) ;
 struct of_device_id* FUNC_9 (int ,int *) ;
 int FUNC_10 (struct sgp_data*,unsigned long) ;
 int VAR_5 ;
 TYPE_4__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_11 (struct sgp_data*) ;
 int FUNC_12 (struct sgp_data*,int ,TYPE_3__*,int,int ) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_10,
       const struct i2c_device_id *VAR_11)
{
 struct iio_dev *VAR_12;
 struct sgp_data *VAR_13;
 const struct of_device_id *VAR_14;
 unsigned long VAR_15;
 int VAR_16;

 VAR_12 = FUNC_3(&VAR_10->dev, sizeof(*VAR_13));
 if (!VAR_12)
  return -VAR_0;

 VAR_14 = FUNC_9(VAR_7, &VAR_10->dev);
 if (VAR_14)
  VAR_15 = (unsigned long)VAR_14->data;
 else
  VAR_15 = VAR_11->driver_data;

 VAR_13 = FUNC_6(VAR_12);
 FUNC_5(VAR_10, VAR_12);
 VAR_13->client = VAR_10;
 FUNC_1(VAR_5, VAR_4);
 FUNC_8(&VAR_13->data_lock);


 VAR_16 = FUNC_12(VAR_13, VAR_3, &VAR_13->buffer, 1,
      VAR_2);
 if (VAR_16 < 0)
  return VAR_16;

 VAR_13->feature_set = FUNC_0(VAR_13->buffer.raw_words[0].value);

 VAR_16 = FUNC_10(VAR_13, VAR_15);
 if (VAR_16)
  return VAR_16;

 VAR_12->dev.parent = &VAR_10->dev;
 VAR_12->info = &VAR_9;
 VAR_12->name = VAR_11->name;
 VAR_12->modes = VAR_1;
 VAR_12->channels = VAR_6[VAR_15].channels;
 VAR_12->num_channels = VAR_6[VAR_15].num_channels;

 FUNC_11(VAR_13);

 VAR_16 = FUNC_4(&VAR_10->dev, VAR_12);
 if (VAR_16) {
  FUNC_2(&VAR_10->dev, "failed to register iio device\n");
  return VAR_16;
 }

 VAR_13->iaq_thread = FUNC_7(VAR_8, VAR_13,
           "%s-iaq", VAR_13->client->name);

 return 0;
}
