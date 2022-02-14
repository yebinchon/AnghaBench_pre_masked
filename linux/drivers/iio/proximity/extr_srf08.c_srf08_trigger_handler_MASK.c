
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srf08_data {int lock; scalar_t__* buffer; } ;
struct iio_poll_func {int timestamp; struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
typedef scalar_t__ s16 ;
typedef int irqreturn_t ;


 int VAR_0 ;
 struct srf08_data* FUNC_0 (struct iio_dev*) ;
 int FUNC_1 (struct iio_dev*,scalar_t__*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct srf08_data*) ;

__attribute__((used)) static irqreturn_t FUNC_6(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct srf08_data *VAR_5 = FUNC_0(VAR_4);
 s16 VAR_6;

 VAR_6 = FUNC_5(VAR_5);
 if (VAR_6 < 0)
  goto err;

 FUNC_3(&VAR_5->lock);

 VAR_5->buffer[0] = VAR_6;
 FUNC_1(VAR_4,
      VAR_5->buffer, VAR_3->timestamp);

 FUNC_4(&VAR_5->lock);
err:
 FUNC_2(VAR_4->trig);
 return VAR_0;
}
