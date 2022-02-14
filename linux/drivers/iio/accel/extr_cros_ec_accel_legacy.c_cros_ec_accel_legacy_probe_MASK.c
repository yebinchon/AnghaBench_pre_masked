
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int parent; } ;
struct platform_device {struct device dev; } ;
struct iio_dev {int num_channels; int channels; int * info; } ;
struct cros_ec_sensors_core_state {scalar_t__ loc; int* sign; int read_ec_sensors_data; TYPE_1__* ec; } ;
struct cros_ec_dev {int ec_dev; } ;
struct TYPE_2__ {int * cmd_readmem; } ;


 int FUNC_0 (int ) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct platform_device*,struct iio_dev*,int) ;
 int VAR_9 ;
 struct cros_ec_dev* FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 int FUNC_5 (struct device*,struct iio_dev*) ;
 int FUNC_6 (struct device*,struct iio_dev*,int *,int ,int *) ;
 struct cros_ec_sensors_core_state* FUNC_7 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_8(struct platform_device *VAR_10)
{
 struct device *VAR_11 = &VAR_10->dev;
 struct cros_ec_dev *VAR_12 = FUNC_2(VAR_11->parent);
 struct iio_dev *VAR_13;
 struct cros_ec_sensors_core_state *VAR_14;
 int VAR_15;

 if (!VAR_12 || !VAR_12->ec_dev) {
  FUNC_3(&VAR_10->dev, "No EC device found.\n");
  return -VAR_2;
 }

 VAR_13 = FUNC_4(&VAR_10->dev, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_3;

 VAR_15 = FUNC_1(VAR_10, VAR_13, 1);
 if (VAR_15)
  return VAR_15;

 VAR_13->info = &VAR_6;
 VAR_14 = FUNC_7(VAR_13);

 if (VAR_14->ec->cmd_readmem != ((void*)0))
  VAR_14->read_ec_sensors_data = VAR_9;
 else
  VAR_14->read_ec_sensors_data = VAR_7;

 VAR_13->channels = VAR_5;
 VAR_13->num_channels = FUNC_0(VAR_5);

 if (VAR_14->loc == VAR_4) {
  VAR_14->sign[VAR_0] = -1;
  VAR_14->sign[VAR_1] = -1;
 }

 VAR_15 = FUNC_6(VAR_11, VAR_13, ((void*)0),
   VAR_8, ((void*)0));
 if (VAR_15)
  return VAR_15;

 return FUNC_5(VAR_11, VAR_13);
}
