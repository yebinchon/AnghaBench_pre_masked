
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct of_device_id {int data; } ;
struct max9611_dev {unsigned int shunt_resistor_uohm; int lock; struct i2c_client* i2c_client; TYPE_2__* dev; } ;
struct TYPE_6__ {struct device_node* of_node; TYPE_2__* parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct device_node {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_2__*,char*,char const* const,struct device_node const*) ;
 struct iio_dev* FUNC_2 (TYPE_2__*,int) ;
 int FUNC_3 (TYPE_2__*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 struct max9611_dev* FUNC_5 (struct iio_dev*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct max9611_dev*) ;
 int VAR_4 ;
 int FUNC_7 (int *) ;
 struct of_device_id* FUNC_8 (int ,TYPE_2__*) ;
 int FUNC_9 (struct device_node const*,char const* const,unsigned int*) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 const char * const VAR_7 = "shunt-resistor-micro-ohms";
 const struct device_node *VAR_8 = VAR_5->dev.of_node;
 const struct of_device_id *VAR_9 =
  FUNC_8(VAR_4, &VAR_5->dev);
 struct max9611_dev *VAR_10;
 struct iio_dev *VAR_11;
 unsigned int VAR_12;
 int VAR_13;

 VAR_11 = FUNC_2(&VAR_5->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_11);

 VAR_10 = FUNC_5(VAR_11);
 VAR_10->dev = &VAR_5->dev;
 VAR_10->i2c_client = VAR_5;
 FUNC_7(&VAR_10->lock);

 VAR_13 = FUNC_9(VAR_8, VAR_7, &VAR_12);
 if (VAR_13) {
  FUNC_1(&VAR_5->dev,
   "Missing %s property for %pOF node\n",
   VAR_7, VAR_8);
  return VAR_13;
 }
 VAR_10->shunt_resistor_uohm = VAR_12;

 VAR_13 = FUNC_6(VAR_10);
 if (VAR_13)
  return VAR_13;

 VAR_11->dev.parent = &VAR_5->dev;
 VAR_11->dev.of_node = VAR_5->dev.of_node;
 VAR_11->name = VAR_9->data;
 VAR_11->modes = VAR_1;
 VAR_11->info = &VAR_2;
 VAR_11->channels = VAR_3;
 VAR_11->num_channels = FUNC_0(VAR_3);

 return FUNC_3(&VAR_5->dev, VAR_11);
}
