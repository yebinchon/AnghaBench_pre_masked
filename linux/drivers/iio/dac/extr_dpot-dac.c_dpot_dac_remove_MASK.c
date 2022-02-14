
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct dpot_dac {int vref; } ;


 int FUNC_0 (struct iio_dev*) ;
 struct dpot_dac* FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_2(VAR_0);
 struct dpot_dac *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_1);
 FUNC_3(VAR_2->vref);

 return 0;
}
