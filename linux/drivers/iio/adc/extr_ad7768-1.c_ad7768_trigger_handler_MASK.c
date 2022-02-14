
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iio_poll_func {struct iio_dev* indio_dev; } ;
struct iio_dev {int trig; } ;
struct TYPE_2__ {int d32; } ;
struct ad7768_state {int lock; TYPE_1__ data; int spi; } ;
typedef int irqreturn_t ;


 int VAR_0 ;
 int FUNC_0 (struct iio_dev*) ;
 struct ad7768_state* FUNC_1 (struct iio_dev*) ;
 int FUNC_2 (struct iio_dev*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int *,int) ;

__attribute__((used)) static irqreturn_t FUNC_7(int VAR_1, void *VAR_2)
{
 struct iio_poll_func *VAR_3 = VAR_2;
 struct iio_dev *VAR_4 = VAR_3->indio_dev;
 struct ad7768_state *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 FUNC_4(&VAR_5->lock);

 VAR_6 = FUNC_6(VAR_5->spi, &VAR_5->data.d32, 3);
 if (VAR_6 < 0)
  goto err_unlock;

 FUNC_2(VAR_4, &VAR_5->data.d32,
        FUNC_0(VAR_4));

 FUNC_3(VAR_4->trig);
err_unlock:
 FUNC_5(&VAR_5->lock);

 return VAR_0;
}
