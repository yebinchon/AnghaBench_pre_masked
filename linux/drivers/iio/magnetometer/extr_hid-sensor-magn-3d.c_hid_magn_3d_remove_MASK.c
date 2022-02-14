
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct hid_sensor_hub_device* platform_data; } ;
struct platform_device {TYPE_1__ dev; } ;
struct magn_3d_state {int magn_flux_attributes; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct iio_dev*) ;
 struct magn_3d_state* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct hid_sensor_hub_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct hid_sensor_hub_device *VAR_2 = VAR_1->dev.platform_data;
 struct iio_dev *VAR_3 = FUNC_4(VAR_1);
 struct magn_3d_state *VAR_4 = FUNC_2(VAR_3);

 FUNC_5(VAR_2, VAR_0);
 FUNC_1(VAR_3);
 FUNC_0(&VAR_4->magn_flux_attributes);
 FUNC_3(VAR_3);

 return 0;
}
