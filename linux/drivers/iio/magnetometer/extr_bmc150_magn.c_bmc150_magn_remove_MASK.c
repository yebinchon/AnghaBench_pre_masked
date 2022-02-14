
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_dev {int dummy; } ;
struct device {int dummy; } ;
struct bmc150_magn_data {scalar_t__ irq; int mutex; scalar_t__ dready_trig; } ;


 int VAR_0 ;
 int FUNC_0 (struct bmc150_magn_data*,int ,int) ;
 struct iio_dev* FUNC_1 (struct device*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;
 int FUNC_3 (struct iio_dev*) ;
 struct bmc150_magn_data* FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;
 int FUNC_11 (struct device*) ;

int FUNC_12(struct device *VAR_1)
{
 struct iio_dev *VAR_2 = FUNC_1(VAR_1);
 struct bmc150_magn_data *VAR_3 = FUNC_4(VAR_2);

 FUNC_3(VAR_2);

 FUNC_9(VAR_1);
 FUNC_11(VAR_1);
 FUNC_10(VAR_1);

 FUNC_6(VAR_2);

 if (VAR_3->irq > 0)
  FUNC_2(VAR_3->irq, VAR_3->dready_trig);

 if (VAR_3->dready_trig)
  FUNC_5(VAR_3->dready_trig);

 FUNC_7(&VAR_3->mutex);
 FUNC_0(VAR_3, VAR_0, 1);
 FUNC_8(&VAR_3->mutex);

 return 0;
}
