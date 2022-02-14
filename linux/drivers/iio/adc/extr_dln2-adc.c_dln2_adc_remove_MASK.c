
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct platform_device*,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct iio_dev* FUNC_2 (struct platform_device*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2);
 FUNC_0(VAR_1, VAR_0);
 return 0;
}
