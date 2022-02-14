
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mcp4018_data {int * cfg; struct i2c_client* client; } ;
struct TYPE_3__ {struct device* parent; } ;
struct iio_dev {int num_channels; int name; int * channels; int * info; TYPE_1__ dev; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;
struct TYPE_4__ {size_t driver_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*,char*) ;
 struct iio_dev* FUNC_1 (struct device*,int) ;
 int FUNC_2 (struct device*,struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 TYPE_2__* FUNC_4 (int ,struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 struct mcp4018_data* FUNC_6 (struct iio_dev*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_7 (struct device*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7)
{
 struct device *VAR_8 = &VAR_7->dev;
 struct mcp4018_data *VAR_9;
 struct iio_dev *VAR_10;

 if (!FUNC_3(VAR_7->adapter,
         VAR_2)) {
  FUNC_0(VAR_8, "SMBUS Byte transfers not supported\n");
  return -VAR_1;
 }

 VAR_10 = FUNC_1(VAR_8, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_0;
 VAR_9 = FUNC_6(VAR_10);
 FUNC_5(VAR_7, VAR_10);
 VAR_9->client = VAR_7;

 VAR_9->cfg = FUNC_7(VAR_8);
 if (!VAR_9->cfg)
  VAR_9->cfg = &VAR_3[FUNC_4(VAR_5, VAR_7)->driver_data];

 VAR_10->dev.parent = VAR_8;
 VAR_10->info = &VAR_6;
 VAR_10->channels = &VAR_4;
 VAR_10->num_channels = 1;
 VAR_10->name = VAR_7->name;

 return FUNC_2(VAR_8, VAR_10);
}
