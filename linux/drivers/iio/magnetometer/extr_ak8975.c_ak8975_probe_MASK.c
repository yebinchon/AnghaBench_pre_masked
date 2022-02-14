
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;


struct TYPE_19__ {TYPE_2__* parent; } ;
struct iio_dev {char const* name; int modes; int available_scan_masks; int * info; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {char* name; scalar_t__ driver_data; } ;
struct TYPE_20__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_2__ dev; } ;
struct ak8975_platform_data {int eoc_gpio; int orientation; } ;
struct ak8975_data {int eoc_gpio; int lock; TYPE_15__* def; void* vid; void* vdd; int orientation; scalar_t__ eoc_irq; struct i2c_client* client; } ;
typedef enum asahi_compass_chipset { ____Placeholder_asahi_compass_chipset } asahi_compass_chipset ;
struct TYPE_18__ {int type; } ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (void*) ;
 int FUNC_3 (void*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 char* FUNC_4 (TYPE_2__*,int*) ;
 int FUNC_5 (struct ak8975_data*) ;
 int FUNC_6 (struct ak8975_data*) ;
 int VAR_10 ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 TYPE_15__* VAR_11 ;
 int FUNC_9 (TYPE_2__*,char*,char const*) ;
 int FUNC_10 (TYPE_2__*,char*,...) ;
 struct ak8975_platform_data* FUNC_11 (TYPE_2__*) ;
 int FUNC_12 (TYPE_2__*,int,int ,char*) ;
 struct iio_dev* FUNC_13 (TYPE_2__*,int) ;
 void* FUNC_14 (TYPE_2__*,char*) ;
 scalar_t__ FUNC_15 (int) ;
 int FUNC_16 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_17 (struct iio_dev*) ;
 struct ak8975_data* FUNC_18 (struct iio_dev*) ;
 int FUNC_19 (TYPE_2__*,char*,int *) ;
 int FUNC_20 (struct iio_dev*) ;
 int FUNC_21 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (scalar_t__,int ) ;
 int FUNC_24 (TYPE_2__*) ;
 int FUNC_25 (TYPE_2__*) ;
 int FUNC_26 (TYPE_2__*) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (TYPE_2__*,int) ;
 int FUNC_29 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_30(struct i2c_client *VAR_12,
   const struct i2c_device_id *VAR_13)
{
 struct ak8975_data *VAR_14;
 struct iio_dev *VAR_15;
 int VAR_16;
 int VAR_17;
 const char *VAR_18 = ((void*)0);
 enum asahi_compass_chipset VAR_19 = VAR_0;
 const struct ak8975_platform_data *VAR_20 =
  FUNC_11(&VAR_12->dev);


 if (VAR_20)
  VAR_16 = VAR_20->eoc_gpio;
 else if (VAR_12->dev.of_node)
  VAR_16 = FUNC_23(VAR_12->dev.of_node, 0);
 else
  VAR_16 = -1;

 if (VAR_16 == -VAR_4)
  return -VAR_4;



 if (FUNC_15(VAR_16)) {
  VAR_17 = FUNC_12(&VAR_12->dev, VAR_16,
       VAR_5, "ak_8975");
  if (VAR_17 < 0) {
   FUNC_10(&VAR_12->dev,
    "failed to request GPIO %d, error %d\n",
       VAR_16, VAR_17);
   return VAR_17;
  }
 }


 VAR_15 = FUNC_13(&VAR_12->dev, sizeof(*VAR_14));
 if (VAR_15 == ((void*)0))
  return -VAR_2;

 VAR_14 = FUNC_18(VAR_15);
 FUNC_16(VAR_12, VAR_15);

 VAR_14->client = VAR_12;
 VAR_14->eoc_gpio = VAR_16;
 VAR_14->eoc_irq = 0;

 if (!VAR_20) {
  VAR_17 = FUNC_19(&VAR_12->dev, "mount-matrix",
         &VAR_14->orientation);
  if (VAR_17)
   return VAR_17;
 } else
  VAR_14->orientation = VAR_20->orientation;


 if (VAR_13) {
  VAR_19 = (enum asahi_compass_chipset)(VAR_13->driver_data);
  VAR_18 = VAR_13->name;
 } else if (FUNC_0(&VAR_12->dev)) {
  VAR_18 = FUNC_4(&VAR_12->dev, &VAR_19);
  if (!VAR_18)
   return -VAR_1;
 } else
  return -VAR_3;

 if (VAR_19 >= VAR_0) {
  FUNC_10(&VAR_12->dev, "AKM device type unsupported: %d\n",
   VAR_19);
  return -VAR_1;
 }

 VAR_14->def = &VAR_11[VAR_19];


 VAR_14->vdd = FUNC_14(&VAR_12->dev, "vdd");
 if (FUNC_2(VAR_14->vdd))
  return FUNC_3(VAR_14->vdd);
 VAR_14->vid = FUNC_14(&VAR_12->dev, "vid");
 if (FUNC_2(VAR_14->vid))
  return FUNC_3(VAR_14->vid);

 VAR_17 = FUNC_6(VAR_14);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_8(VAR_12, VAR_14->def->type);
 if (VAR_17 < 0) {
  FUNC_10(&VAR_12->dev, "Unexpected device\n");
  goto power_off;
 }
 FUNC_9(&VAR_12->dev, "Asahi compass chip %s\n", VAR_18);


 VAR_17 = FUNC_7(VAR_12);
 if (VAR_17 < 0) {
  FUNC_10(&VAR_12->dev, "%s initialization fails\n", VAR_18);
  goto power_off;
 }

 FUNC_22(&VAR_14->lock);
 VAR_15->dev.parent = &VAR_12->dev;
 VAR_15->channels = VAR_7;
 VAR_15->num_channels = FUNC_1(VAR_7);
 VAR_15->info = &VAR_9;
 VAR_15->available_scan_masks = VAR_10;
 VAR_15->modes = VAR_6;
 VAR_15->name = VAR_18;

 VAR_17 = FUNC_21(VAR_15, ((void*)0), VAR_8,
      ((void*)0));
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "triggered buffer setup failed\n");
  goto power_off;
 }

 VAR_17 = FUNC_17(VAR_15);
 if (VAR_17) {
  FUNC_10(&VAR_12->dev, "device register failed\n");
  goto cleanup_buffer;
 }


 FUNC_25(&VAR_12->dev);
 FUNC_27(&VAR_12->dev);
 FUNC_24(&VAR_12->dev);




 FUNC_28(&VAR_12->dev, 50);
 FUNC_29(&VAR_12->dev);
 FUNC_26(&VAR_12->dev);

 return 0;

cleanup_buffer:
 FUNC_20(VAR_15);
power_off:
 FUNC_5(VAR_14);
 return VAR_17;
}
