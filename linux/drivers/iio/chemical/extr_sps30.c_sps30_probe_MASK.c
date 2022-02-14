
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct sps30_state {int lock; int state; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int available_scan_masks; int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_client {int dev; int name; int adapter; } ;
typedef int buf ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int *) ;
 int FUNC_4 (int *,int ,struct sps30_state*) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 int FUNC_7 (int *,struct iio_dev*,int *,int ,int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct sps30_state* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct sps30_state*,int ,int *,int) ;
 int FUNC_13 (struct sps30_state*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_13)
{
 struct iio_dev *VAR_14;
 struct sps30_state *VAR_15;
 u8 VAR_16[32];
 int VAR_17;

 if (!FUNC_8(VAR_13->adapter, VAR_2))
  return -VAR_1;

 VAR_14 = FUNC_5(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_14)
  return -VAR_0;

 VAR_15 = FUNC_10(VAR_14);
 FUNC_9(VAR_13, VAR_14);
 VAR_15->client = VAR_13;
 VAR_15->state = VAR_4;
 VAR_14->dev.parent = &VAR_13->dev;
 VAR_14->info = &VAR_9;
 VAR_14->name = VAR_13->name;
 VAR_14->channels = VAR_7;
 VAR_14->num_channels = FUNC_0(VAR_7);
 VAR_14->modes = VAR_3;
 VAR_14->available_scan_masks = VAR_10;

 FUNC_11(&VAR_15->lock);
 FUNC_1(VAR_8, VAR_5);

 VAR_17 = FUNC_13(VAR_15);
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "failed to reset device\n");
  return VAR_17;
 }

 VAR_17 = FUNC_12(VAR_15, VAR_6, VAR_16, sizeof(VAR_16));
 if (VAR_17) {
  FUNC_2(&VAR_13->dev, "failed to read serial number\n");
  return VAR_17;
 }

 FUNC_3(&VAR_13->dev, "serial number: %s\n", VAR_16);

 VAR_17 = FUNC_4(&VAR_13->dev, VAR_11, VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_7(&VAR_13->dev, VAR_14, ((void*)0),
           VAR_12, ((void*)0));
 if (VAR_17)
  return VAR_17;

 return FUNC_6(&VAR_13->dev, VAR_14);
}
