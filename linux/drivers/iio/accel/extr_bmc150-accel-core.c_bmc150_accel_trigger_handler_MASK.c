
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct bmc150_accel_data {int buffer; int mutex; int regmap; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct bmc150_accel_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ,int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct iio_poll_func *VAR_5 = VAR_4;
 struct iio_dev *VAR_6 = VAR_5->indio_dev;
 struct bmc150_accel_data *VAR_7 = FUNC_0(VAR_6);
 int VAR_8;

 FUNC_3(&VAR_7->mutex);
 VAR_8 = FUNC_5(VAR_7->regmap, VAR_1,
          VAR_7->buffer, VAR_0 * 2);
 FUNC_4(&VAR_7->mutex);
 if (VAR_8 < 0)
  goto err_read;

 FUNC_1(VAR_6, VAR_7->buffer,
        VAR_5->timestamp);
err_read:
 FUNC_2(VAR_6->trig);

 return VAR_2;
}
