
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct cm3605 {int vdd; int aset; int led; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct cm3605* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 struct iio_dev* FUNC_5 (struct platform_device*) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int FUNC_7(struct platform_device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_5(VAR_1);
 struct cm3605 *VAR_3 = FUNC_2(VAR_2);

 FUNC_3(VAR_3->led, VAR_0);
 FUNC_4(VAR_3->led);
 FUNC_0(VAR_3->aset, 0);
 FUNC_1(VAR_2);
 FUNC_6(VAR_3->vdd);

 return 0;
}
