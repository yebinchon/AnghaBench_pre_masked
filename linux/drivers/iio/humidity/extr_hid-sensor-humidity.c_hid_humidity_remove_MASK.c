
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct iio_dev {int dummy; } ;
struct hid_sensor_hub_device {int dummy; } ;
struct hid_humidity_state {int common_attributes; } ;


 int VAR_0 ;
 struct hid_sensor_hub_device* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iio_dev*) ;
 struct hid_humidity_state* FUNC_3 (struct iio_dev*) ;
 struct iio_dev* FUNC_4 (struct platform_device*) ;
 int FUNC_5 (struct hid_sensor_hub_device*,int ) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct hid_sensor_hub_device *VAR_2 = FUNC_0(&VAR_1->dev);
 struct iio_dev *VAR_3 = FUNC_4(VAR_1);
 struct hid_humidity_state *VAR_4 = FUNC_3(VAR_3);

 FUNC_2(VAR_3);
 FUNC_5(VAR_2, VAR_0);
 FUNC_1(&VAR_4->common_attributes);

 return 0;
}
