
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct adc084s021 {int lock; TYPE_1__* spi; } ;
typedef int irqreturn_t ;
typedef int __be16 ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct adc084s021*,int **) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (struct iio_dev*) ;
 struct adc084s021* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*,int *,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static irqreturn_t FUNC_8(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct adc084s021 *VAR_5 = FUNC_3(VAR_4);
 __be16 VAR_6[8] = {0};

 FUNC_6(&VAR_5->lock);

 if (FUNC_0(VAR_5, &VAR_6) < 0)
  FUNC_1(&VAR_5->spi->dev, "Failed to read data\n");

 FUNC_4(VAR_4, VAR_6,
        FUNC_2(VAR_4));
 FUNC_7(&VAR_5->lock);
 FUNC_5(VAR_4->trig);

 return VAR_0;
}
