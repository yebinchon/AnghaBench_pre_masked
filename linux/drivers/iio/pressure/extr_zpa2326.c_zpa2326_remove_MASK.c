
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct iio_dev {TYPE_1__ dev; } ;
struct device {int dummy; } ;


 struct iio_dev* FUNC_0 (struct device const*) ;
 int FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iio_dev*,int ) ;
 int FUNC_5 (struct iio_dev*) ;

void FUNC_6(const struct device *VAR_0)
{
 struct iio_dev *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1);
 FUNC_3(VAR_1->dev.parent);
 FUNC_5(VAR_1);
 FUNC_4(VAR_1, FUNC_2(VAR_1));
}
