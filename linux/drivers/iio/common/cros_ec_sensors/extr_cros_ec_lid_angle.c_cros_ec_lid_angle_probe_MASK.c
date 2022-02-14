
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct platform_device {struct device dev; } ;
struct iio_dev {int num_channels; int channels; int * info; } ;
struct TYPE_2__ {int read_ec_sensors_data; } ;
struct cros_ec_lid_angle_state {TYPE_1__ core; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct platform_device*,struct iio_dev*,int) ;
 int VAR_4 ;
 struct iio_dev* FUNC_2 (struct device*,int) ;
 int FUNC_3 (struct device*,struct iio_dev*) ;
 int FUNC_4 (struct device*,struct iio_dev*,int *,int ,int *) ;
 struct cros_ec_lid_angle_state* FUNC_5 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_5)
{
 struct device *VAR_6 = &VAR_5->dev;
 struct iio_dev *VAR_7;
 struct cros_ec_lid_angle_state *VAR_8;
 int VAR_9;

 VAR_7 = FUNC_2(VAR_6, sizeof(*VAR_8));
 if (!VAR_7)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_5, VAR_7, 0);
 if (VAR_9)
  return VAR_9;

 VAR_7->info = &VAR_2;
 VAR_8 = FUNC_5(VAR_7);
 VAR_7->channels = VAR_1;
 VAR_7->num_channels = FUNC_0(VAR_1);

 VAR_8->core.read_ec_sensors_data = VAR_4;

 VAR_9 = FUNC_4(VAR_6, VAR_7, ((void*)0),
   VAR_3, ((void*)0));
 if (VAR_9)
  return VAR_9;

 return FUNC_3(VAR_6, VAR_7);
}
