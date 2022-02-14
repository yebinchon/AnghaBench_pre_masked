
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_gyroadc {int clk; struct device* dev; } ;
struct platform_device {int dummy; } ;
struct iio_dev {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct iio_dev*) ;
 struct rcar_gyroadc* FUNC_2 (struct iio_dev*) ;
 struct iio_dev* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct device*) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct rcar_gyroadc*) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_3(VAR_0);
 struct rcar_gyroadc *VAR_2 = FUNC_2(VAR_1);
 struct device *VAR_3 = VAR_2->dev;

 FUNC_1(VAR_1);
 FUNC_5(VAR_3);
 FUNC_9(VAR_2);
 FUNC_6(VAR_3);
 FUNC_4(VAR_3);
 FUNC_7(VAR_3);
 FUNC_0(VAR_2->clk);
 FUNC_8(VAR_1);

 return 0;
}
